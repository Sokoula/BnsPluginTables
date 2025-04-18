/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct skill_arcane_info_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef skill3;
int skill3_tableId() const {return 342;};
__int16 arcane_score;
char Pad0[2];
__int32 reference_value_arcane_score[6];
__int32 reference_value_arcane_score_Size() const {return 6;};
signed char reference_value_arcane_score_total_count;
char Pad1[3];
BnsTables::Shared::TableRef apply_skill_modifys[6];
__int32 apply_skill_modifys_Size() const {return 6;};
int apply_skill_modifys_tableId() const {return 359;};
BnsTables::Shared::TableRef apply_skill_modify_per_arcane_score[6];
__int32 apply_skill_modify_per_arcane_score_Size() const {return 6;};
int apply_skill_modify_per_arcane_score_tableId() const {return 359;};
signed char apply_skill_modify_per_arcane_score_total_count;
char Pad2[3];
__int32 per_arcane_score_section[6];
__int32 per_arcane_score_section_Size() const {return 6;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 1); }
		static __int16 TableId() { return 344; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_arcane_info_RecordPtr // : DrRecordPtr
	{
		skill_arcane_info_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}