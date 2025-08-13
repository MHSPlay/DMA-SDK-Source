#pragma once

namespace ESP 
{

	inline auto OnRender( ) -> void 
	{
	
		g_render->filled_rect( 200, 200, 100, 100, ImGui::ColorConvertFloat4ToU32( ImVec4( 1.0f, 1.0f, 1.0f, 1.0f ) ), 5, 0 );

        g_render->text( vec2_t( 600, 600 ), ImGui::ColorConvertFloat4ToU32( ImVec4( 1.0f, 1.0f, 1.0f, 1.0f ) ), 0, "Hello World!", g_render->fonts( ).m_esp );

	}

}