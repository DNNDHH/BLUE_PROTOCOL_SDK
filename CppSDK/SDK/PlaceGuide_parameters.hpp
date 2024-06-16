#pragma once

 

// Package: PlaceGuide

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function PlaceGuide.PlaceGuide_C.ExecuteUbergraph_PlaceGuide
// 0x0090 (0x0090 - 0x0000)
struct PlaceGuide_C_ExecuteUbergraph_PlaceGuide final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E72[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlaceGuideContent_C*                   CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E73[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_InLocationId;                   // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E74[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSubLocationName_ReturnValue;           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetLocationName_ReturnValue;              // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0068(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E75[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue;            // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlaceGuide_C_ExecuteUbergraph_PlaceGuide) == 0x000008, "Wrong alignment on PlaceGuide_C_ExecuteUbergraph_PlaceGuide");
static_assert(sizeof(PlaceGuide_C_ExecuteUbergraph_PlaceGuide) == 0x000090, "Wrong size on PlaceGuide_C_ExecuteUbergraph_PlaceGuide");
static_assert(offsetof(PlaceGuide_C_ExecuteUbergraph_PlaceGuide, EntryPoint) == 0x000000, "Member 'PlaceGuide_C_ExecuteUbergraph_PlaceGuide::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ExecuteUbergraph_PlaceGuide, CallFunc_Create_ReturnValue) == 0x000008, "Member 'PlaceGuide_C_ExecuteUbergraph_PlaceGuide::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ExecuteUbergraph_PlaceGuide, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'PlaceGuide_C_ExecuteUbergraph_PlaceGuide::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ExecuteUbergraph_PlaceGuide, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'PlaceGuide_C_ExecuteUbergraph_PlaceGuide::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ExecuteUbergraph_PlaceGuide, K2Node_CustomEvent_InLocationId) == 0x000024, "Member 'PlaceGuide_C_ExecuteUbergraph_PlaceGuide::K2Node_CustomEvent_InLocationId' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ExecuteUbergraph_PlaceGuide, CallFunc_GetSubLocationName_ReturnValue) == 0x000030, "Member 'PlaceGuide_C_ExecuteUbergraph_PlaceGuide::CallFunc_GetSubLocationName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ExecuteUbergraph_PlaceGuide, CallFunc_GetLocationName_ReturnValue) == 0x000040, "Member 'PlaceGuide_C_ExecuteUbergraph_PlaceGuide::CallFunc_GetLocationName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ExecuteUbergraph_PlaceGuide, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'PlaceGuide_C_ExecuteUbergraph_PlaceGuide::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ExecuteUbergraph_PlaceGuide, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000068, "Member 'PlaceGuide_C_ExecuteUbergraph_PlaceGuide::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ExecuteUbergraph_PlaceGuide, CallFunc_MakeLiteralByte_ReturnValue) == 0x000080, "Member 'PlaceGuide_C_ExecuteUbergraph_PlaceGuide::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ExecuteUbergraph_PlaceGuide, CallFunc_AddChildToOverlay_ReturnValue) == 0x000088, "Member 'PlaceGuide_C_ExecuteUbergraph_PlaceGuide::CallFunc_AddChildToOverlay_ReturnValue' has a wrong offset!");

// Function PlaceGuide.PlaceGuide_C.ShowRequestDemo
// 0x0008 (0x0008 - 0x0000)
struct PlaceGuide_C_ShowRequestDemo final
{
public:
	class FName                                   InLocationID;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlaceGuide_C_ShowRequestDemo) == 0x000004, "Wrong alignment on PlaceGuide_C_ShowRequestDemo");
static_assert(sizeof(PlaceGuide_C_ShowRequestDemo) == 0x000008, "Wrong size on PlaceGuide_C_ShowRequestDemo");
static_assert(offsetof(PlaceGuide_C_ShowRequestDemo, InLocationID) == 0x000000, "Member 'PlaceGuide_C_ShowRequestDemo::InLocationID' has a wrong offset!");

// Function PlaceGuide.PlaceGuide_C.ShowRequest
// 0x0048 (0x0048 - 0x0000)
struct PlaceGuide_C_ShowRequest final
{
public:
	class FName                                   LocationId;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Priority;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E76[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSubLocationName_ReturnValue;           // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetLocationName_ReturnValue;              // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue_1;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E77[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIVisibleSetting_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlaceGuide_C_ShowRequest) == 0x000008, "Wrong alignment on PlaceGuide_C_ShowRequest");
static_assert(sizeof(PlaceGuide_C_ShowRequest) == 0x000048, "Wrong size on PlaceGuide_C_ShowRequest");
static_assert(offsetof(PlaceGuide_C_ShowRequest, LocationId) == 0x000000, "Member 'PlaceGuide_C_ShowRequest::LocationId' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ShowRequest, Param_Priority) == 0x000008, "Member 'PlaceGuide_C_ShowRequest::Param_Priority' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ShowRequest, CallFunc_GetSubLocationName_ReturnValue) == 0x000010, "Member 'PlaceGuide_C_ShowRequest::CallFunc_GetSubLocationName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ShowRequest, CallFunc_GetLocationName_ReturnValue) == 0x000020, "Member 'PlaceGuide_C_ShowRequest::CallFunc_GetLocationName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ShowRequest, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000030, "Member 'PlaceGuide_C_ShowRequest::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ShowRequest, CallFunc_NotEqual_StrStr_ReturnValue_1) == 0x000031, "Member 'PlaceGuide_C_ShowRequest::CallFunc_NotEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ShowRequest, CallFunc_BooleanAND_ReturnValue) == 0x000032, "Member 'PlaceGuide_C_ShowRequest::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ShowRequest, CallFunc_K2_SetTimer_ReturnValue) == 0x000038, "Member 'PlaceGuide_C_ShowRequest::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ShowRequest, CallFunc_GetUIVisibleSetting_ReturnValue) == 0x000040, "Member 'PlaceGuide_C_ShowRequest::CallFunc_GetUIVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ShowRequest, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000041, "Member 'PlaceGuide_C_ShowRequest::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ShowRequest, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000042, "Member 'PlaceGuide_C_ShowRequest::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ShowRequest, CallFunc_NotEqual_NameName_ReturnValue) == 0x000043, "Member 'PlaceGuide_C_ShowRequest::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ShowRequest, CallFunc_BooleanAND_ReturnValue_1) == 0x000044, "Member 'PlaceGuide_C_ShowRequest::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_ShowRequest, CallFunc_BooleanOR_ReturnValue) == 0x000045, "Member 'PlaceGuide_C_ShowRequest::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function PlaceGuide.PlaceGuide_C.CheckRequest
// 0x0080 (0x0080 - 0x0000)
struct PlaceGuide_C_CheckRequest final
{
public:
	bool                                          CallFunc_IsShowLoadingScreen_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E78[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSubLocationName_ReturnValue;           // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetLocationName_ReturnValue;              // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0048(0x0018)()
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E79[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInitialLoadCompleted_ReturnValue;       // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlaceGuide_C_CheckRequest) == 0x000008, "Wrong alignment on PlaceGuide_C_CheckRequest");
static_assert(sizeof(PlaceGuide_C_CheckRequest) == 0x000080, "Wrong size on PlaceGuide_C_CheckRequest");
static_assert(offsetof(PlaceGuide_C_CheckRequest, CallFunc_IsShowLoadingScreen_ReturnValue) == 0x000000, "Member 'PlaceGuide_C_CheckRequest::CallFunc_IsShowLoadingScreen_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_CheckRequest, CallFunc_NotEqual_NameName_ReturnValue) == 0x000001, "Member 'PlaceGuide_C_CheckRequest::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_CheckRequest, CallFunc_K2_SetTimer_ReturnValue) == 0x000008, "Member 'PlaceGuide_C_CheckRequest::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_CheckRequest, CallFunc_GetSubLocationName_ReturnValue) == 0x000010, "Member 'PlaceGuide_C_CheckRequest::CallFunc_GetSubLocationName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_CheckRequest, CallFunc_GetLocationName_ReturnValue) == 0x000020, "Member 'PlaceGuide_C_CheckRequest::CallFunc_GetLocationName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_CheckRequest, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'PlaceGuide_C_CheckRequest::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_CheckRequest, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000048, "Member 'PlaceGuide_C_CheckRequest::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_CheckRequest, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000060, "Member 'PlaceGuide_C_CheckRequest::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_CheckRequest, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'PlaceGuide_C_CheckRequest::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_CheckRequest, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000070, "Member 'PlaceGuide_C_CheckRequest::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_CheckRequest, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'PlaceGuide_C_CheckRequest::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlaceGuide_C_CheckRequest, CallFunc_IsInitialLoadCompleted_ReturnValue) == 0x000079, "Member 'PlaceGuide_C_CheckRequest::CallFunc_IsInitialLoadCompleted_ReturnValue' has a wrong offset!");

// Function PlaceGuide.PlaceGuide_C.HideRequestDemo
// 0x0001 (0x0001 - 0x0000)
struct PlaceGuide_C_HideRequestDemo final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlaceGuide_C_HideRequestDemo) == 0x000001, "Wrong alignment on PlaceGuide_C_HideRequestDemo");
static_assert(sizeof(PlaceGuide_C_HideRequestDemo) == 0x000001, "Wrong size on PlaceGuide_C_HideRequestDemo");
static_assert(offsetof(PlaceGuide_C_HideRequestDemo, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'PlaceGuide_C_HideRequestDemo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

