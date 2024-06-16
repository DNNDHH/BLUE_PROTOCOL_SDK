#pragma once

 

// Package: EventIconToolTip

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function EventIconToolTip.EventIconToolTip_C.SetInfo
// 0x00E0 (0x00E0 - 0x0000)
struct EventIconToolTip_C_SetInfo final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUnidentified;                                     // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Unidentified;                                      // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B50[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        MasterData;                                        // 0x0008(0x00D0)(Edit, BlueprintVisible)
	bool                                          NewLocalVar_0;                                     // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventIconToolTip_C_SetInfo) == 0x000008, "Wrong alignment on EventIconToolTip_C_SetInfo");
static_assert(sizeof(EventIconToolTip_C_SetInfo) == 0x0000E0, "Wrong size on EventIconToolTip_C_SetInfo");
static_assert(offsetof(EventIconToolTip_C_SetInfo, InItemIndex) == 0x000000, "Member 'EventIconToolTip_C_SetInfo::InItemIndex' has a wrong offset!");
static_assert(offsetof(EventIconToolTip_C_SetInfo, bUnidentified) == 0x000004, "Member 'EventIconToolTip_C_SetInfo::bUnidentified' has a wrong offset!");
static_assert(offsetof(EventIconToolTip_C_SetInfo, Unidentified) == 0x000005, "Member 'EventIconToolTip_C_SetInfo::Unidentified' has a wrong offset!");
static_assert(offsetof(EventIconToolTip_C_SetInfo, MasterData) == 0x000008, "Member 'EventIconToolTip_C_SetInfo::MasterData' has a wrong offset!");
static_assert(offsetof(EventIconToolTip_C_SetInfo, NewLocalVar_0) == 0x0000D8, "Member 'EventIconToolTip_C_SetInfo::NewLocalVar_0' has a wrong offset!");

}

