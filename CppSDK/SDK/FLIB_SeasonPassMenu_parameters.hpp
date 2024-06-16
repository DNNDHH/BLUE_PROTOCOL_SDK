#pragma once

 

// Package: FLIB_SeasonPassMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.GetSeasonPassComponentPure
// 0x0020 (0x0020 - 0x0000)
struct FLIB_SeasonPassMenu_C_GetSeasonPassComponentPure final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_SeasonPassMenu_C_GetSeasonPassComponentPure) == 0x000008, "Wrong alignment on FLIB_SeasonPassMenu_C_GetSeasonPassComponentPure");
static_assert(sizeof(FLIB_SeasonPassMenu_C_GetSeasonPassComponentPure) == 0x000020, "Wrong size on FLIB_SeasonPassMenu_C_GetSeasonPassComponentPure");
static_assert(offsetof(FLIB_SeasonPassMenu_C_GetSeasonPassComponentPure, __WorldContext) == 0x000000, "Member 'FLIB_SeasonPassMenu_C_GetSeasonPassComponentPure::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_GetSeasonPassComponentPure, ReturnValue) == 0x000008, "Member 'FLIB_SeasonPassMenu_C_GetSeasonPassComponentPure::ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_GetSeasonPassComponentPure, CallFunc_GetSBPlayerController_ReturnValue) == 0x000010, "Member 'FLIB_SeasonPassMenu_C_GetSeasonPassComponentPure::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_GetSeasonPassComponentPure, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x000018, "Member 'FLIB_SeasonPassMenu_C_GetSeasonPassComponentPure::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");

// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.GetSeasonPassComponent
// 0x0020 (0x0020 - 0x0000)
struct FLIB_SeasonPassMenu_C_GetSeasonPassComponent final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_SeasonPassMenu_C_GetSeasonPassComponent) == 0x000008, "Wrong alignment on FLIB_SeasonPassMenu_C_GetSeasonPassComponent");
static_assert(sizeof(FLIB_SeasonPassMenu_C_GetSeasonPassComponent) == 0x000020, "Wrong size on FLIB_SeasonPassMenu_C_GetSeasonPassComponent");
static_assert(offsetof(FLIB_SeasonPassMenu_C_GetSeasonPassComponent, __WorldContext) == 0x000000, "Member 'FLIB_SeasonPassMenu_C_GetSeasonPassComponent::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_GetSeasonPassComponent, ReturnValue) == 0x000008, "Member 'FLIB_SeasonPassMenu_C_GetSeasonPassComponent::ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_GetSeasonPassComponent, CallFunc_GetSBPlayerController_ReturnValue) == 0x000010, "Member 'FLIB_SeasonPassMenu_C_GetSeasonPassComponent::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_GetSeasonPassComponent, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x000018, "Member 'FLIB_SeasonPassMenu_C_GetSeasonPassComponent::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");

// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsNearlyStartCurrentSeason
// 0x0048 (0x0048 - 0x0000)
struct FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bResult;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E74[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_SBUtcNow_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E75[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetCurrentSeasonStartDate_ReturnValue;    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_Add_DateTimeTimespan_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSeasonValid_ReturnValue;                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_DateTimeDateTime_ReturnValue;        // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason) == 0x000008, "Wrong alignment on FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason");
static_assert(sizeof(FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason) == 0x000048, "Wrong size on FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason, __WorldContext) == 0x000000, "Member 'FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason, bResult) == 0x000008, "Member 'FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason::bResult' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason, CallFunc_MakeTimespan_ReturnValue) == 0x000010, "Member 'FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason::CallFunc_MakeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason, CallFunc_SBUtcNow_ReturnValue) == 0x000018, "Member 'FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason::CallFunc_SBUtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x000020, "Member 'FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason, CallFunc_GetCurrentSeasonStartDate_ReturnValue) == 0x000030, "Member 'FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason::CallFunc_GetCurrentSeasonStartDate_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason, CallFunc_Add_DateTimeTimespan_ReturnValue) == 0x000038, "Member 'FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason::CallFunc_Add_DateTimeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason, CallFunc_IsSeasonValid_ReturnValue) == 0x000040, "Member 'FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason::CallFunc_IsSeasonValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason, CallFunc_Less_DateTimeDateTime_ReturnValue) == 0x000041, "Member 'FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason::CallFunc_Less_DateTimeDateTime_ReturnValue' has a wrong offset!");

// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsNearlyEndCurrentSeasonProgress
// 0x0048 (0x0048 - 0x0000)
struct FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bResult;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E76[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_SBUtcNow_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E77[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetCurrentSeasonProgressEndDate_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_Subtract_DateTimeTimespan_ReturnValue;    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSeasonValid_ReturnValue;                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue; // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress) == 0x000008, "Wrong alignment on FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress");
static_assert(sizeof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress) == 0x000048, "Wrong size on FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress, __WorldContext) == 0x000000, "Member 'FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress, bResult) == 0x000008, "Member 'FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress::bResult' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress, CallFunc_MakeTimespan_ReturnValue) == 0x000010, "Member 'FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress::CallFunc_MakeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress, CallFunc_SBUtcNow_ReturnValue) == 0x000018, "Member 'FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress::CallFunc_SBUtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x000020, "Member 'FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress, CallFunc_GetCurrentSeasonProgressEndDate_ReturnValue) == 0x000030, "Member 'FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress::CallFunc_GetCurrentSeasonProgressEndDate_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress, CallFunc_Subtract_DateTimeTimespan_ReturnValue) == 0x000038, "Member 'FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress::CallFunc_Subtract_DateTimeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress, CallFunc_IsSeasonValid_ReturnValue) == 0x000040, "Member 'FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress::CallFunc_IsSeasonValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress, CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue) == 0x000041, "Member 'FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress::CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");

// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsNearlyEndCurrentSeason
// 0x0048 (0x0048 - 0x0000)
struct FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bResult;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E78[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_SBUtcNow_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E79[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetCurrentSeasonEndDate_ReturnValue;      // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_Subtract_DateTimeTimespan_ReturnValue;    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSeasonValid_ReturnValue;                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue; // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason) == 0x000008, "Wrong alignment on FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason");
static_assert(sizeof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason) == 0x000048, "Wrong size on FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason, __WorldContext) == 0x000000, "Member 'FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason, bResult) == 0x000008, "Member 'FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason::bResult' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason, CallFunc_MakeTimespan_ReturnValue) == 0x000010, "Member 'FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason::CallFunc_MakeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason, CallFunc_SBUtcNow_ReturnValue) == 0x000018, "Member 'FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason::CallFunc_SBUtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x000020, "Member 'FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason, CallFunc_GetCurrentSeasonEndDate_ReturnValue) == 0x000030, "Member 'FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason::CallFunc_GetCurrentSeasonEndDate_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason, CallFunc_Subtract_DateTimeTimespan_ReturnValue) == 0x000038, "Member 'FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason::CallFunc_Subtract_DateTimeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason, CallFunc_IsSeasonValid_ReturnValue) == 0x000040, "Member 'FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason::CallFunc_IsSeasonValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason, CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue) == 0x000041, "Member 'FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason::CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");

// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsEnableSeasonPassPurchaseMenu
// 0x0020 (0x0020 - 0x0000)
struct FLIB_SeasonPassMenu_C_IsEnableSeasonPassPurchaseMenu final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bResult;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E7A[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPaidPlanSubscribed_ReturnValue;         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSeasonProgressValid_ReturnValue;        // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_SeasonPassMenu_C_IsEnableSeasonPassPurchaseMenu) == 0x000008, "Wrong alignment on FLIB_SeasonPassMenu_C_IsEnableSeasonPassPurchaseMenu");
static_assert(sizeof(FLIB_SeasonPassMenu_C_IsEnableSeasonPassPurchaseMenu) == 0x000020, "Wrong size on FLIB_SeasonPassMenu_C_IsEnableSeasonPassPurchaseMenu");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsEnableSeasonPassPurchaseMenu, __WorldContext) == 0x000000, "Member 'FLIB_SeasonPassMenu_C_IsEnableSeasonPassPurchaseMenu::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsEnableSeasonPassPurchaseMenu, bResult) == 0x000008, "Member 'FLIB_SeasonPassMenu_C_IsEnableSeasonPassPurchaseMenu::bResult' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsEnableSeasonPassPurchaseMenu, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x000010, "Member 'FLIB_SeasonPassMenu_C_IsEnableSeasonPassPurchaseMenu::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsEnableSeasonPassPurchaseMenu, CallFunc_IsPaidPlanSubscribed_ReturnValue) == 0x000018, "Member 'FLIB_SeasonPassMenu_C_IsEnableSeasonPassPurchaseMenu::CallFunc_IsPaidPlanSubscribed_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsEnableSeasonPassPurchaseMenu, CallFunc_IsSeasonProgressValid_ReturnValue) == 0x000019, "Member 'FLIB_SeasonPassMenu_C_IsEnableSeasonPassPurchaseMenu::CallFunc_IsSeasonProgressValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsEnableSeasonPassPurchaseMenu, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'FLIB_SeasonPassMenu_C_IsEnableSeasonPassPurchaseMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsEnableSeasonPassPurchaseMenu, CallFunc_BooleanAND_ReturnValue) == 0x00001B, "Member 'FLIB_SeasonPassMenu_C_IsEnableSeasonPassPurchaseMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsEnableSeasonPassRankPurchaseMenu
// 0x0020 (0x0020 - 0x0000)
struct FLIB_SeasonPassMenu_C_IsEnableSeasonPassRankPurchaseMenu final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bResult;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E7B[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSeasonProgressValid_ReturnValue;        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMaxRank_ReturnValue;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_SeasonPassMenu_C_IsEnableSeasonPassRankPurchaseMenu) == 0x000008, "Wrong alignment on FLIB_SeasonPassMenu_C_IsEnableSeasonPassRankPurchaseMenu");
static_assert(sizeof(FLIB_SeasonPassMenu_C_IsEnableSeasonPassRankPurchaseMenu) == 0x000020, "Wrong size on FLIB_SeasonPassMenu_C_IsEnableSeasonPassRankPurchaseMenu");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsEnableSeasonPassRankPurchaseMenu, __WorldContext) == 0x000000, "Member 'FLIB_SeasonPassMenu_C_IsEnableSeasonPassRankPurchaseMenu::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsEnableSeasonPassRankPurchaseMenu, bResult) == 0x000008, "Member 'FLIB_SeasonPassMenu_C_IsEnableSeasonPassRankPurchaseMenu::bResult' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsEnableSeasonPassRankPurchaseMenu, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x000010, "Member 'FLIB_SeasonPassMenu_C_IsEnableSeasonPassRankPurchaseMenu::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsEnableSeasonPassRankPurchaseMenu, CallFunc_IsSeasonProgressValid_ReturnValue) == 0x000018, "Member 'FLIB_SeasonPassMenu_C_IsEnableSeasonPassRankPurchaseMenu::CallFunc_IsSeasonProgressValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsEnableSeasonPassRankPurchaseMenu, CallFunc_IsMaxRank_ReturnValue) == 0x000019, "Member 'FLIB_SeasonPassMenu_C_IsEnableSeasonPassRankPurchaseMenu::CallFunc_IsMaxRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsEnableSeasonPassRankPurchaseMenu, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'FLIB_SeasonPassMenu_C_IsEnableSeasonPassRankPurchaseMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsEnableSeasonPassRankPurchaseMenu, CallFunc_BooleanAND_ReturnValue) == 0x00001B, "Member 'FLIB_SeasonPassMenu_C_IsEnableSeasonPassRankPurchaseMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsUnreadedSeasonPassFlag
// 0x0088 (0x0088 - 0x0000)
struct FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag final
{
public:
	ENewMarkContentType                           InCategory;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E7C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bResult;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E7D[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsUnreadedSeasonPassFlagSub_bResult;      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E7E[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnreadedSeasonPassFlagSub_bResult_1;    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E7F[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearlyEndCurrentSeason_bResult;         // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSeasonProgressValid_ReturnValue;        // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E80[0x1];                                     // 0x0063(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSeasonId_ReturnValue;                  // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReadedIdByInt_bIsValid;                 // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadedIdByInt_ReturnValue;              // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadedIdByInt_bIsValid_1;               // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadedIdByInt_ReturnValue_1;            // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadedIdByInt_bIsValid_2;               // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadedIdByInt_ReturnValue_2;            // 0x006F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSeasonValid_ReturnValue;                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNearlyEndCurrentSeasonProgress_bResult; // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0077(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x007E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x007F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_8;        // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_5;                  // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_9;        // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_6;                  // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_10;       // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag) == 0x000008, "Wrong alignment on FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag");
static_assert(sizeof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag) == 0x000088, "Wrong size on FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, InCategory) == 0x000000, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::InCategory' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, __WorldContext) == 0x000008, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, bResult) == 0x000010, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::bResult' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, K2Node_MakeArray_Array) == 0x000018, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_IsUnreadedSeasonPassFlagSub_bResult) == 0x000028, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_IsUnreadedSeasonPassFlagSub_bResult' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_Array_Get_Item) == 0x000030, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000038, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_IsUnreadedSeasonPassFlagSub_bResult_1) == 0x000040, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_IsUnreadedSeasonPassFlagSub_bResult_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_GetDisplayName_ReturnValue) == 0x000048, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x000058, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_IsNearlyEndCurrentSeason_bResult) == 0x000060, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_IsNearlyEndCurrentSeason_bResult' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_IsValid_ReturnValue) == 0x000061, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_IsSeasonProgressValid_ReturnValue) == 0x000062, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_IsSeasonProgressValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_GetSeasonId_ReturnValue) == 0x000064, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_GetSeasonId_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_IsReadedIdByInt_bIsValid) == 0x000068, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_IsReadedIdByInt_bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_IsReadedIdByInt_ReturnValue) == 0x000069, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_IsReadedIdByInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_IsReadedIdByInt_bIsValid_1) == 0x00006A, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_IsReadedIdByInt_bIsValid_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_IsReadedIdByInt_ReturnValue_1) == 0x00006B, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_IsReadedIdByInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_Not_PreBool_ReturnValue) == 0x00006C, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_Not_PreBool_ReturnValue_1) == 0x00006D, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_IsReadedIdByInt_bIsValid_2) == 0x00006E, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_IsReadedIdByInt_bIsValid_2' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_IsReadedIdByInt_ReturnValue_2) == 0x00006F, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_IsReadedIdByInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_IsSeasonValid_ReturnValue) == 0x000070, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_IsSeasonValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_Not_PreBool_ReturnValue_2) == 0x000071, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_IsNearlyEndCurrentSeasonProgress_bResult) == 0x000072, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_IsNearlyEndCurrentSeasonProgress_bResult' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000073, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000074, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000075, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_BooleanOR_ReturnValue) == 0x000076, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000077, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_BooleanOR_ReturnValue_1) == 0x000078, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000079, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_BooleanOR_ReturnValue_2) == 0x00007A, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x00007B, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_BooleanOR_ReturnValue_3) == 0x00007C, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x00007D, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x00007E, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_BooleanOR_ReturnValue_4) == 0x00007F, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_EqualEqual_ByteByte_ReturnValue_8) == 0x000080, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_EqualEqual_ByteByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_BooleanOR_ReturnValue_5) == 0x000081, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_BooleanOR_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_EqualEqual_ByteByte_ReturnValue_9) == 0x000082, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_EqualEqual_ByteByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_BooleanOR_ReturnValue_6) == 0x000083, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_BooleanOR_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_EqualEqual_ByteByte_ReturnValue_10) == 0x000084, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_EqualEqual_ByteByte_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag, CallFunc_IsEmpty_ReturnValue) == 0x000085, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");

// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsUnreadedSeasonPassFlagSub
// 0x0020 (0x0020 - 0x0000)
struct FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub final
{
public:
	ENewMarkContentType                           InCategory;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E81[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bResult;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnableSeasonPassRankPurchaseMenu_bResult; // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnableSeasonPassPurchaseMenu_bResult;   // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub) == 0x000008, "Wrong alignment on FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub");
static_assert(sizeof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub) == 0x000020, "Wrong size on FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub, InCategory) == 0x000000, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub::InCategory' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub, __WorldContext) == 0x000008, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub, bResult) == 0x000010, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub::bResult' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub, CallFunc_IsEnableSeasonPassRankPurchaseMenu_bResult) == 0x000011, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub::CallFunc_IsEnableSeasonPassRankPurchaseMenu_bResult' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub, CallFunc_IsEnableSeasonPassPurchaseMenu_bResult) == 0x000012, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub::CallFunc_IsEnableSeasonPassPurchaseMenu_bResult' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000013, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000014, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000015, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000016, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub, CallFunc_BooleanOR_ReturnValue) == 0x000017, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub, CallFunc_BooleanOR_ReturnValue_1) == 0x000018, "Member 'FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.GetSeasonPassTiming
// 0x0018 (0x0018 - 0x0000)
struct FLIB_SeasonPassMenu_C_GetSeasonPassTiming final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bValid;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E82[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Flag;                                              // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearlyStartCurrentSeason_bResult;       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNearlyEndCurrentSeasonProgress_bResult; // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNearlyEndCurrentSeason_bResult;         // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_SeasonPassMenu_C_GetSeasonPassTiming) == 0x000008, "Wrong alignment on FLIB_SeasonPassMenu_C_GetSeasonPassTiming");
static_assert(sizeof(FLIB_SeasonPassMenu_C_GetSeasonPassTiming) == 0x000018, "Wrong size on FLIB_SeasonPassMenu_C_GetSeasonPassTiming");
static_assert(offsetof(FLIB_SeasonPassMenu_C_GetSeasonPassTiming, __WorldContext) == 0x000000, "Member 'FLIB_SeasonPassMenu_C_GetSeasonPassTiming::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_GetSeasonPassTiming, bValid) == 0x000008, "Member 'FLIB_SeasonPassMenu_C_GetSeasonPassTiming::bValid' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_GetSeasonPassTiming, Flag) == 0x00000C, "Member 'FLIB_SeasonPassMenu_C_GetSeasonPassTiming::Flag' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_GetSeasonPassTiming, CallFunc_IsNearlyStartCurrentSeason_bResult) == 0x000010, "Member 'FLIB_SeasonPassMenu_C_GetSeasonPassTiming::CallFunc_IsNearlyStartCurrentSeason_bResult' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_GetSeasonPassTiming, CallFunc_IsNearlyEndCurrentSeasonProgress_bResult) == 0x000011, "Member 'FLIB_SeasonPassMenu_C_GetSeasonPassTiming::CallFunc_IsNearlyEndCurrentSeasonProgress_bResult' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_GetSeasonPassTiming, CallFunc_IsNearlyEndCurrentSeason_bResult) == 0x000012, "Member 'FLIB_SeasonPassMenu_C_GetSeasonPassTiming::CallFunc_IsNearlyEndCurrentSeason_bResult' has a wrong offset!");

// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.RegistReadedSeasonPassFlag
// 0x0060 (0x0060 - 0x0000)
struct FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag final
{
public:
	ENewMarkContentType                           NewFlag;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENewMarkContentType                           EndFlag;                                           // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENewMarkContentType                           ReceiveEndFlag;                                    // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E83[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSeasonId_ReturnValue;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E84[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RegistReadedIdByInt_bIsValid;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E85[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_RegistReadedIdByInt_bIsValid_1;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RegistReadedIdByInt_bIsValid_2;           // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNearlyEndCurrentSeasonProgress_bResult; // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNearlyEndCurrentSeason_bResult;         // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x005E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x005F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag) == 0x000008, "Wrong alignment on FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag");
static_assert(sizeof(FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag) == 0x000060, "Wrong size on FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag");
static_assert(offsetof(FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag, NewFlag) == 0x000000, "Member 'FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag::NewFlag' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag, EndFlag) == 0x000001, "Member 'FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag::EndFlag' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag, ReceiveEndFlag) == 0x000002, "Member 'FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag::ReceiveEndFlag' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag, __WorldContext) == 0x000008, "Member 'FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag, K2Node_MakeArray_Array) == 0x000010, "Member 'FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x000020, "Member 'FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag, CallFunc_Array_Get_Item) == 0x000028, "Member 'FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag, CallFunc_GetSeasonId_ReturnValue) == 0x000030, "Member 'FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag::CallFunc_GetSeasonId_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000038, "Member 'FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag, CallFunc_RegistReadedIdByInt_bIsValid) == 0x000040, "Member 'FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag::CallFunc_RegistReadedIdByInt_bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag, CallFunc_GetDisplayName_ReturnValue) == 0x000048, "Member 'FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag, CallFunc_RegistReadedIdByInt_bIsValid_1) == 0x000058, "Member 'FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag::CallFunc_RegistReadedIdByInt_bIsValid_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag, CallFunc_RegistReadedIdByInt_bIsValid_2) == 0x000059, "Member 'FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag::CallFunc_RegistReadedIdByInt_bIsValid_2' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag, CallFunc_IsNearlyEndCurrentSeasonProgress_bResult) == 0x00005A, "Member 'FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag::CallFunc_IsNearlyEndCurrentSeasonProgress_bResult' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag, CallFunc_IsNearlyEndCurrentSeason_bResult) == 0x00005B, "Member 'FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag::CallFunc_IsNearlyEndCurrentSeason_bResult' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00005C, "Member 'FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x00005D, "Member 'FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x00005E, "Member 'FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag, CallFunc_IsEmpty_ReturnValue) == 0x00005F, "Member 'FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");

// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.SetSeasonPassQuestListItem
// 0x0470 (0x0470 - 0x0000)
struct FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem final
{
public:
	struct FSBSeasonPassQuestItemData             SBSeasonPassQuestItemData;                         // 0x0000(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBSeasonPassQuestCycleType                   Cycle;                                             // 0x00D8(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E86[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             QuestName;                                         // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Progress;                                          // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Cleared;                                           // 0x00F0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UQuestRewardIcon_C*>             ItemIconArray;                                     // 0x00F8(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UWidgetSwitcher*                        Switcher_RewardBtn;                                // 0x0108(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Button_Clear;                                      // 0x0110(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Button_Clear_Arrow;                                // 0x0118(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             RankPoint;                                         // 0x0120(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_SeasonPassQuestRibbon_C*           PassRibbon;                                        // 0x0128(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Notsubscribed;                                     // 0x0130(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsGetRewardItem;                                   // 0x0138(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E87[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0140(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Local_QuestRankPoint;                              // 0x0148(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RewardItemSwap;                                    // 0x014C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E88[0x3];                                     // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UQuestRewardIcon_C*>             RewardIconList;                                    // 0x0150(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         LocalIconIndex;                                    // 0x0160(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Local_ItemEnable;                                  // 0x0164(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E89[0x3];                                     // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalRequiredCount;                                // 0x0168(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalProgressCount;                                // 0x016C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSeasonPassQuestCycleType                   CycleData;                                         // 0x0170(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E8A[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSeasonPassQuestItemData             ItemData;                                          // 0x0178(0x00D8)(Edit, BlueprintVisible)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0252(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0253(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0255(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0256(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0257(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0259(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x025A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x025B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E8B[0x4];                                     // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0268(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0278(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0290(0x0040)(HasGetValueTypeHash)
	TArray<struct FSBMasterReward>                CallFunc_GetMasterRewardData_OutRewardList;        // 0x02D0(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x02E0(0x0010)(ReferenceParm)
	struct FSBMasterReward                        CallFunc_Array_Get_Item;                           // 0x02F0(0x0014)(NoDestructor)
	uint8                                         Pad_8E8C[0x4];                                     // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0308(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x032C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0331(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0332(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0333(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0334(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E8D[0x3];                                     // 0x0335(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0338(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x033C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x033D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x033E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E8E[0x1];                                     // 0x033F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     CallFunc_Array_Get_Item_1;                         // 0x0340(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E8F[0x4];                                     // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMasterReward>                CallFunc_GetMasterRewardData_OutRewardList_1;      // 0x0350(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0360(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterReward                        CallFunc_Array_Get_Item_2;                         // 0x0364(0x0014)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x037C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x037D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E90[0x2];                                     // 0x037E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0384(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0385(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E91[0x2];                                     // 0x0386(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x038C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E92[0x3];                                     // 0x038D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     CallFunc_Array_Get_Item_3;                         // 0x0390(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0399(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E93[0x2];                                     // 0x039A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x039C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x03A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E94[0x2];                                     // 0x03A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x03A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E95[0x3];                                     // 0x03A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x03AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x03B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCompleteCount_ReturnValue;             // 0x03B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMissionPlayCondition_ReturnValue;       // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E96[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x03C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x03D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E97[0x2];                                     // 0x03D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetProgressCount_ReturnValue;             // 0x03D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E98[0x7];                                     // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x03E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x03F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E99[0x7];                                     // 0x0401(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0408(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0418(0x0018)()
	bool                                          Temp_bool_Variable_2;                              // 0x0430(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E9A[0x7];                                     // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetAutoDeliveryQuestDesc_OutMessage;      // 0x0438(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_2;                           // 0x0448(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E9B[0x4];                                     // 0x044C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0450(0x0018)()
	bool                                          CallFunc_SetAmount2VisibilityByAmount_bVisible;    // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem) == 0x000008, "Wrong alignment on FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem");
static_assert(sizeof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem) == 0x000470, "Wrong size on FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, SBSeasonPassQuestItemData) == 0x000000, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::SBSeasonPassQuestItemData' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, Cycle) == 0x0000D8, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::Cycle' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, QuestName) == 0x0000E0, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::QuestName' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, Progress) == 0x0000E8, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::Progress' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, Cleared) == 0x0000F0, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::Cleared' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, ItemIconArray) == 0x0000F8, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::ItemIconArray' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, Switcher_RewardBtn) == 0x000108, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::Switcher_RewardBtn' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, Button_Clear) == 0x000110, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::Button_Clear' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, Button_Clear_Arrow) == 0x000118, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::Button_Clear_Arrow' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, RankPoint) == 0x000120, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::RankPoint' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, PassRibbon) == 0x000128, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::PassRibbon' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, Notsubscribed) == 0x000130, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::Notsubscribed' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, IsGetRewardItem) == 0x000138, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::IsGetRewardItem' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, __WorldContext) == 0x000140, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, Local_QuestRankPoint) == 0x000148, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::Local_QuestRankPoint' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, RewardItemSwap) == 0x00014C, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::RewardItemSwap' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, RewardIconList) == 0x000150, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::RewardIconList' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, LocalIconIndex) == 0x000160, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::LocalIconIndex' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, Local_ItemEnable) == 0x000164, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::Local_ItemEnable' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, LocalRequiredCount) == 0x000168, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::LocalRequiredCount' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, LocalProgressCount) == 0x00016C, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::LocalProgressCount' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CycleData) == 0x000170, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CycleData' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, ItemData) == 0x000178, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::ItemData' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x000250, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_IsValid_ReturnValue) == 0x000251, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_IsValid_ReturnValue_1) == 0x000252, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_IsValid_ReturnValue_2) == 0x000253, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_IsValid_ReturnValue_3) == 0x000254, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_IsValid_ReturnValue_4) == 0x000255, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_IsValid_ReturnValue_5) == 0x000256, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_IsValid_ReturnValue_6) == 0x000257, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_IsValid_ReturnValue_7) == 0x000258, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_IsValid_ReturnValue_8) == 0x000259, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, Temp_bool_Variable) == 0x00025A, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00025B, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, Temp_int_Array_Index_Variable) == 0x00025C, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, Temp_int_Array_Index_Variable_1) == 0x000260, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000268, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000278, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, K2Node_MakeStruct_FormatArgumentData) == 0x000290, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_GetMasterRewardData_OutRewardList) == 0x0002D0, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_GetMasterRewardData_OutRewardList' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, K2Node_MakeArray_Array) == 0x0002E0, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Array_Get_Item) == 0x0002F0, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Format_ReturnValue) == 0x000308, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Array_Length_ReturnValue) == 0x000320, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Add_IntInt_ReturnValue) == 0x000324, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, Temp_int_Loop_Counter_Variable) == 0x000328, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Add_IntInt_ReturnValue_1) == 0x00032C, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, Temp_bool_Variable_1) == 0x000330, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000331, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000332, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Not_PreBool_ReturnValue) == 0x000333, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, K2Node_SwitchEnum_CmpSuccess) == 0x000334, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, Temp_int_Array_Index_Variable_2) == 0x000338, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Not_PreBool_ReturnValue_1) == 0x00033C, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x00033D, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_BooleanAND_ReturnValue) == 0x00033E, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Array_Get_Item_1) == 0x000340, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Array_Length_ReturnValue_1) == 0x000348, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_GetMasterRewardData_OutRewardList_1) == 0x000350, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_GetMasterRewardData_OutRewardList_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Add_IntInt_ReturnValue_2) == 0x000360, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Array_Get_Item_2) == 0x000364, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Array_Length_ReturnValue_2) == 0x000378, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Less_IntInt_ReturnValue) == 0x00037C, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00037D, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, Temp_int_Loop_Counter_Variable_1) == 0x000380, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000384, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Less_IntInt_ReturnValue_1) == 0x000385, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Add_IntInt_ReturnValue_3) == 0x000388, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x00038C, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Array_Get_Item_3) == 0x000390, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000398, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_IsValid_ReturnValue_9) == 0x000399, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, Temp_int_Variable) == 0x00039C, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x0003A0, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, K2Node_Select_Default) == 0x0003A1, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, Temp_int_Loop_Counter_Variable_2) == 0x0003A4, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Less_IntInt_ReturnValue_2) == 0x0003A8, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Add_IntInt_ReturnValue_4) == 0x0003AC, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, Temp_int_Variable_1) == 0x0003B0, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_GetCompleteCount_ReturnValue) == 0x0003B4, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_GetCompleteCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_IsMissionPlayCondition_ReturnValue) == 0x0003B8, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_IsMissionPlayCondition_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Conv_IntToString_ReturnValue) == 0x0003C0, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Not_PreBool_ReturnValue_2) == 0x0003D0, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Greater_IntInt_ReturnValue) == 0x0003D1, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_GetProgressCount_ReturnValue) == 0x0003D4, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_GetProgressCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_BooleanAND_ReturnValue_1) == 0x0003D8, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0003E0, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Concat_StrStr_ReturnValue) == 0x0003F0, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, K2Node_Select_Default_1) == 0x000400, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000408, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000418, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, Temp_bool_Variable_2) == 0x000430, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_GetAutoDeliveryQuestDesc_OutMessage) == 0x000438, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_GetAutoDeliveryQuestDesc_OutMessage' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, K2Node_Select_Default_2) == 0x000448, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000450, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem, CallFunc_SetAmount2VisibilityByAmount_bVisible) == 0x000468, "Member 'FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem::CallFunc_SetAmount2VisibilityByAmount_bVisible' has a wrong offset!");

// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.UpdateSubMenuExclamation
// 0x0018 (0x0018 - 0x0000)
struct FLIB_SeasonPassMenu_C_UpdateSubMenuExclamation final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_SeasonPassMenu_C_UpdateSubMenuExclamation) == 0x000008, "Wrong alignment on FLIB_SeasonPassMenu_C_UpdateSubMenuExclamation");
static_assert(sizeof(FLIB_SeasonPassMenu_C_UpdateSubMenuExclamation) == 0x000018, "Wrong size on FLIB_SeasonPassMenu_C_UpdateSubMenuExclamation");
static_assert(offsetof(FLIB_SeasonPassMenu_C_UpdateSubMenuExclamation, Sender) == 0x000000, "Member 'FLIB_SeasonPassMenu_C_UpdateSubMenuExclamation::Sender' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_UpdateSubMenuExclamation, __WorldContext) == 0x000008, "Member 'FLIB_SeasonPassMenu_C_UpdateSubMenuExclamation::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_SeasonPassMenu_C_UpdateSubMenuExclamation, CallFunc_GetEventExecutor_ReturnValue) == 0x000010, "Member 'FLIB_SeasonPassMenu_C_UpdateSubMenuExclamation::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");

}

