...
void mouseEventOccurred (const pcl::visualization::MouseEvent &event,
                     void* viewer_void)
{
  pcl::visualization::PCLVisualizer::Ptr viewer = *static_cast<pcl::visualization::PCLVisualizer::Ptr *> (viewer_void);
  if (event.getButton () == pcl::visualization::MouseEvent::LeftButton && 
      event.getType () == pcl::visualization::MouseEvent::MouseButtonRelease)
  {
    std::cout << "Left mouse button released at position (" 
              << event.getX () << ", " << event.getY () << ")" << std::endl;
    char str[512];

    sprintf (str, "text#%03d", text_id ++);
    viewer->addText ("clicked here", event.getX (), event.getY (), str);
  }
}
...
