#pragma once

 

// Package: LibraryMenu_BookmarkDetails

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_BookmarkDetails.LibraryMenu_BookmarkDetails_C.ExecuteUbergraph_LibraryMenu_BookmarkDetails
// 0x0040 (0x0040 - 0x0000)
struct LibraryMenu_BookmarkDetails_C_ExecuteUbergraph_LibraryMenu_BookmarkDetails final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_BookmarkDetails_C_ExecuteUbergraph_LibraryMenu_BookmarkDetails) == 0x000004, "Wrong alignment on LibraryMenu_BookmarkDetails_C_ExecuteUbergraph_LibraryMenu_BookmarkDetails");
static_assert(sizeof(LibraryMenu_BookmarkDetails_C_ExecuteUbergraph_LibraryMenu_BookmarkDetails) == 0x000040, "Wrong size on LibraryMenu_BookmarkDetails_C_ExecuteUbergraph_LibraryMenu_BookmarkDetails");
static_assert(offsetof(LibraryMenu_BookmarkDetails_C_ExecuteUbergraph_LibraryMenu_BookmarkDetails, EntryPoint) == 0x000000, "Member 'LibraryMenu_BookmarkDetails_C_ExecuteUbergraph_LibraryMenu_BookmarkDetails::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_BookmarkDetails_C_ExecuteUbergraph_LibraryMenu_BookmarkDetails, K2Node_Event_MyGeometry) == 0x000004, "Member 'LibraryMenu_BookmarkDetails_C_ExecuteUbergraph_LibraryMenu_BookmarkDetails::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(LibraryMenu_BookmarkDetails_C_ExecuteUbergraph_LibraryMenu_BookmarkDetails, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'LibraryMenu_BookmarkDetails_C_ExecuteUbergraph_LibraryMenu_BookmarkDetails::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function LibraryMenu_BookmarkDetails.LibraryMenu_BookmarkDetails_C.Tick
// 0x003C (0x003C - 0x0000)
struct LibraryMenu_BookmarkDetails_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_BookmarkDetails_C_Tick) == 0x000004, "Wrong alignment on LibraryMenu_BookmarkDetails_C_Tick");
static_assert(sizeof(LibraryMenu_BookmarkDetails_C_Tick) == 0x00003C, "Wrong size on LibraryMenu_BookmarkDetails_C_Tick");
static_assert(offsetof(LibraryMenu_BookmarkDetails_C_Tick, MyGeometry) == 0x000000, "Member 'LibraryMenu_BookmarkDetails_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(LibraryMenu_BookmarkDetails_C_Tick, InDeltaTime) == 0x000038, "Member 'LibraryMenu_BookmarkDetails_C_Tick::InDeltaTime' has a wrong offset!");

// Function LibraryMenu_BookmarkDetails.LibraryMenu_BookmarkDetails_C.SetDetailsVisibility
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_BookmarkDetails_C_SetDetailsVisibility final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AD5[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_BookmarkDetails_C_SetDetailsVisibility) == 0x000008, "Wrong alignment on LibraryMenu_BookmarkDetails_C_SetDetailsVisibility");
static_assert(sizeof(LibraryMenu_BookmarkDetails_C_SetDetailsVisibility) == 0x000018, "Wrong size on LibraryMenu_BookmarkDetails_C_SetDetailsVisibility");
static_assert(offsetof(LibraryMenu_BookmarkDetails_C_SetDetailsVisibility, bVisible) == 0x000000, "Member 'LibraryMenu_BookmarkDetails_C_SetDetailsVisibility::bVisible' has a wrong offset!");
static_assert(offsetof(LibraryMenu_BookmarkDetails_C_SetDetailsVisibility, CallFunc_GetVisibility_ReturnValue) == 0x000001, "Member 'LibraryMenu_BookmarkDetails_C_SetDetailsVisibility::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_BookmarkDetails_C_SetDetailsVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'LibraryMenu_BookmarkDetails_C_SetDetailsVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_BookmarkDetails_C_SetDetailsVisibility, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'LibraryMenu_BookmarkDetails_C_SetDetailsVisibility::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_BookmarkDetails_C_SetDetailsVisibility, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'LibraryMenu_BookmarkDetails_C_SetDetailsVisibility::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}

