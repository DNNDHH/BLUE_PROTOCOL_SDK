#pragma once

 

// Package: LibraryMenu_AchievementProgressIcon

#include "Basic.hpp"


namespace SDK::Params
{

// Function LibraryMenu_AchievementProgressIcon.LibraryMenu_AchievementProgressIcon_C.ExecuteUbergraph_LibraryMenu_AchievementProgressIcon
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_AchievementProgressIcon_C_ExecuteUbergraph_LibraryMenu_AchievementProgressIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementProgressIcon_C_ExecuteUbergraph_LibraryMenu_AchievementProgressIcon) == 0x000004, "Wrong alignment on LibraryMenu_AchievementProgressIcon_C_ExecuteUbergraph_LibraryMenu_AchievementProgressIcon");
static_assert(sizeof(LibraryMenu_AchievementProgressIcon_C_ExecuteUbergraph_LibraryMenu_AchievementProgressIcon) == 0x000008, "Wrong size on LibraryMenu_AchievementProgressIcon_C_ExecuteUbergraph_LibraryMenu_AchievementProgressIcon");
static_assert(offsetof(LibraryMenu_AchievementProgressIcon_C_ExecuteUbergraph_LibraryMenu_AchievementProgressIcon, EntryPoint) == 0x000000, "Member 'LibraryMenu_AchievementProgressIcon_C_ExecuteUbergraph_LibraryMenu_AchievementProgressIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementProgressIcon_C_ExecuteUbergraph_LibraryMenu_AchievementProgressIcon, K2Node_Event_IsDesignTime) == 0x000004, "Member 'LibraryMenu_AchievementProgressIcon_C_ExecuteUbergraph_LibraryMenu_AchievementProgressIcon::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function LibraryMenu_AchievementProgressIcon.LibraryMenu_AchievementProgressIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_AchievementProgressIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementProgressIcon_C_PreConstruct) == 0x000001, "Wrong alignment on LibraryMenu_AchievementProgressIcon_C_PreConstruct");
static_assert(sizeof(LibraryMenu_AchievementProgressIcon_C_PreConstruct) == 0x000001, "Wrong size on LibraryMenu_AchievementProgressIcon_C_PreConstruct");
static_assert(offsetof(LibraryMenu_AchievementProgressIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'LibraryMenu_AchievementProgressIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function LibraryMenu_AchievementProgressIcon.LibraryMenu_AchievementProgressIcon_C.SetParameter
// 0x0020 (0x0020 - 0x0000)
struct LibraryMenu_AchievementProgressIcon_C_SetParameter final
{
public:
	int32                                         GetCount;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A76[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(LibraryMenu_AchievementProgressIcon_C_SetParameter) == 0x000008, "Wrong alignment on LibraryMenu_AchievementProgressIcon_C_SetParameter");
static_assert(sizeof(LibraryMenu_AchievementProgressIcon_C_SetParameter) == 0x000020, "Wrong size on LibraryMenu_AchievementProgressIcon_C_SetParameter");
static_assert(offsetof(LibraryMenu_AchievementProgressIcon_C_SetParameter, GetCount) == 0x000000, "Member 'LibraryMenu_AchievementProgressIcon_C_SetParameter::GetCount' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementProgressIcon_C_SetParameter, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'LibraryMenu_AchievementProgressIcon_C_SetParameter::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

}

