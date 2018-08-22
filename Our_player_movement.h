
#Add it after possible moves line in checkOurPlayerinDanger method
if(g_master_grid[danger_position_x][danger_position_y].placedBy = g_our_player)
{
  if(possible_moves  & down && isAlive)
  {
    PlayerMove[0] = CLI_DIR_DOWN;
    if(!g_master_grid[danger_position_x+1][danger_position_y].is_explode_danger)
      {
      priority[0]=8;
      
      if(!g_master_grid[danger_position_x+1][danger_position_y].predictive_danger_count == 0)
      {
      priority[0]=8;
      }
      }
  
      
      
      
      g_master_grid[danger_position_x][danger_position_y].predictive_danger_count <=1 
