
#Add it after possible moves line in checkOurPlayerinDanger method
if(g_master_grid[danger_position_x][danger_position_y].placedBy == g_opp_player)
{
  //SET first priority value ->8
                             ->9
                             ->1.5
                             ->10(need to change predictive_danger_count > 1)
 //old code 
}
//Add this line before declaration of int final priority = 0;
else{
  if(possible_moves  & down && isAlive)
  {
    PlayerMove[0] = CLI_DIR_DOWN;
    if(!g_master_grid[danger_position_x+1][danger_position_y].is_explode_danger)
      {
      priority[0] = 11;
      
      if(g_master_grid[danger_position_x+1][danger_position_y].predictive_danger_count == 0)
      {
      priority[0] = 11.5;
      }
      }
    
    if(g_master_grid[danger_position_x][danger_position_y].predictive_danger_count > 1 && 
       g_our_player_danger[danger_position_x][danger_position_y] == 0)
    {
      priority[0] = 12;
      bombstatus[0] = 1;
    }
     if(g_master_grid[danger_position_x][danger_position_y].predictive_danger_count > 2 && 
       g_our_player_danger[danger_position_x][danger_position_y] == 0)
    {
      priority[0] = 13;
      bombstatus[0] = 1;
    }
  }
  
   if(possible_moves  & up && isAlive)
  {
    PlayerMove[1] = CLI_DIR_UP;
    if(!g_master_grid[danger_position_x-1][danger_position_y].is_explode_danger)
      {
      priority[1] = 11;
      
      if(g_master_grid[danger_position_x-1][danger_position_y].predictive_danger_count == 0)
      {
      priority[1] = 11.5;
      }
      }
    
    if(g_master_grid[danger_position_x][danger_position_y].predictive_danger_count > 1 && 
       g_our_player_danger[danger_position_x][danger_position_y] == 0)
    {
      priority[1] = 12;
      bombstatus[1] = 1;
    }
     if(g_master_grid[danger_position_x][danger_position_y].predictive_danger_count > 2 && 
       g_our_player_danger[danger_position_x][danger_position_y] == 0)
    {
      priority[1] = 13;
      bombstatus[1] = 1;
    }
  }
  
   if(possible_moves  & right && isAlive)
  {
    PlayerMove[2] = CLI_DIR_RIGHT;
    if(!g_master_grid[danger_position_x][danger_position_y+1].is_explode_danger)
      {
      priority[2] = 11;
      
      if(g_master_grid[danger_position_x][danger_position_y+1].predictive_danger_count == 0)
      {
      priority[2] = 11.5;
      }
      }
    
    if(g_master_grid[danger_position_x][danger_position_y].predictive_danger_count > 1 && 
       g_our_player_danger[danger_position_x][danger_position_y] == 0)
    {
      priority[2] = 12;
      bombstatus[2] = 1;
    }
     if(g_master_grid[danger_position_x][danger_position_y].predictive_danger_count > 2 && 
       g_our_player_danger[danger_position_x][danger_position_y] == 0)
    {
      priority[2] = 13;
      bombstatus[2] = 1;
    }
  }
  
   if(possible_moves  & left && isAlive)
  {
    PlayerMove[3] = CLI_DIR_LEFT;
    if(!g_master_grid[danger_position_x][danger_position_y-1].is_explode_danger)
      {
      priority[3] = 11;
      
      if(g_master_grid[danger_position_x][danger_position_y-1].predictive_danger_count == 0)
      {
      priority[3] = 11.5;
      }
      }
    
    if(g_master_grid[danger_position_x][danger_position_y].predictive_danger_count > 1 && 
       g_our_player_danger[danger_position_x][danger_position_y] == 0)
    {
      priority[3] = 12;
      bombstatus[3] = 1;
    }
     if(g_master_grid[danger_position_x][danger_position_y].predictive_danger_count > 2 && 
       g_our_player_danger[danger_position_x][danger_position_y] == 0)
    {
      priority[3] = 13;
      bombstatus[3] = 1;
    }
  }
 
  
      
      
      
   
