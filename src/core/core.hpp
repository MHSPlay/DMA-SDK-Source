#pragma once

namespace core 
{
    inline const char* processName = "gameName.exe";
    inline uint64_t baseAddr = 0x0;
    inline uint64_t baseSize = 0x0;

	inline auto Thread( ) 
	{

        if ( !TargetProcess->Init( processName ) )
        {
            LOG( "Failed to initialize process.\n" );
            return FALSE;
        }

        baseAddr = TargetProcess->GetBaseAddress( processName );
        baseSize = TargetProcess->GetBaseSize( processName );

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