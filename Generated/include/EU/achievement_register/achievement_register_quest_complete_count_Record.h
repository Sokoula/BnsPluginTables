/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct achievement_register_quest_complete_count_Record : achievement_register_Record
	{
	public:
		signed char reset_type;
signed char reset_by_acquire_time;

		static __int32 SubType() { return 16; }
	};
#pragma pack(pop)
}