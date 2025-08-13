#pragma once

namespace core 
{

	inline auto Thread( ) 
	{
		
		std::thread( [ & ]( ) 
        {
        
            while ( true ) 
            {

                // our func here
                // aimbot
                // entity list
                // esp
                
                std::this_thread::sleep_for( std::chrono::milliseconds( 300 ) );
            }

        }).detach( );
	
	}

}