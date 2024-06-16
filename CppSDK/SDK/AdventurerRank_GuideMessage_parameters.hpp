#pragma once

 

// Package: AdventurerRank_GuideMessage

#include "Basic.hpp"


namespace SDK::Params
{

// Function AdventurerRank_GuideMessage.AdventurerRank_GuideMessage_C.SetAdventureBoardName
// 0x0018 (0x0018 - 0x0000)
struct AdventurerRank_GuideMessage_C_SetAdventureBoardName final
{
public:
	class FText                                   AdventureBoardName;                                // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(AdventurerRank_GuideMessage_C_SetAdventureBoardName) == 0x000008, "Wrong alignment on AdventurerRank_GuideMessage_C_SetAdventureBoardName");
static_assert(sizeof(AdventurerRank_GuideMessage_C_SetAdventureBoardName) == 0x000018, "Wrong size on AdventurerRank_GuideMessage_C_SetAdventureBoardName");
static_assert(offsetof(AdventurerRank_GuideMessage_C_SetAdventureBoardName, AdventureBoardName) == 0x000000, "Member 'AdventurerRank_GuideMessage_C_SetAdventureBoardName::AdventureBoardName' has a wrong offset!");

}

