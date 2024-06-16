#pragma once

 

// Package: LibraryMenu_AchievementFunctionLibrary

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.CheckLimitedTime
// 0x0100 (0x0100 - 0x0000)
struct LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime final
{
public:
	struct FAchievementMasterData                 AchievementMasterData;                             // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                __WorldContext;                                    // 0x0078(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0080(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4343[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              TmpNowDateTime;                                    // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_SBUtcNow_ReturnValue;                     // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4344[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAchievementPossession_ReturnValue;      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTermIdData_IsTermData;                  // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4345[0x6];                                     // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBEventTermsData>              CallFunc_IsTermIdData_Terms;                       // 0x00B0(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4346[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventTermsData                      CallFunc_Array_Get_Item;                           // 0x00C8(0x0030)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue; // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_DateTimeDateTime_ReturnValue;   // 0x00FE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00FF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime) == 0x000008, "Wrong alignment on LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime");
static_assert(sizeof(LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime) == 0x000100, "Wrong size on LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime, AchievementMasterData) == 0x000000, "Member 'LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime::AchievementMasterData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime, __WorldContext) == 0x000078, "Member 'LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime::__WorldContext' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime, Result) == 0x000080, "Member 'LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime::Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime, TmpNowDateTime) == 0x000088, "Member 'LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime::TmpNowDateTime' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime, CallFunc_SBUtcNow_ReturnValue) == 0x000090, "Member 'LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime::CallFunc_SBUtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime, CallFunc_GetNetworkDataCache_IsValid) == 0x000098, "Member 'LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0000A0, "Member 'LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime, CallFunc_IsAchievementPossession_ReturnValue) == 0x0000A8, "Member 'LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime::CallFunc_IsAchievementPossession_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime, CallFunc_IsTermIdData_IsTermData) == 0x0000A9, "Member 'LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime::CallFunc_IsTermIdData_IsTermData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime, CallFunc_IsTermIdData_Terms) == 0x0000B0, "Member 'LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime::CallFunc_IsTermIdData_Terms' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime, CallFunc_IsEventTermActive_ReturnValue) == 0x0000C0, "Member 'LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime, CallFunc_Array_Length_ReturnValue) == 0x0000F8, "Member 'LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime, CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue) == 0x0000FC, "Member 'LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime::CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime, CallFunc_Greater_IntInt_ReturnValue) == 0x0000FD, "Member 'LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime, CallFunc_LessEqual_DateTimeDateTime_ReturnValue) == 0x0000FE, "Member 'LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime::CallFunc_LessEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime, CallFunc_BooleanAND_ReturnValue) == 0x0000FF, "Member 'LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.IsTermIdData
// 0x0070 (0x0070 - 0x0000)
struct LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData final
{
public:
	class FString                                 InTermId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTermData;                                        // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4347[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBEventTermsData>              Terms;                                             // 0x0020(0x0010)(Parm, OutParm)
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4348[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventScheduler*                      CallFunc_GetEventScheduler_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBEventTermsMasterData                CallFunc_GetMasterDataBP_OutMaster;                // 0x0048(0x0020)()
	bool                                          CallFunc_GetMasterDataBP_ReturnValue;              // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData) == 0x000008, "Wrong alignment on LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData");
static_assert(sizeof(LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData) == 0x000070, "Wrong size on LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData, InTermId) == 0x000000, "Member 'LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData::InTermId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData, __WorldContext) == 0x000010, "Member 'LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData::__WorldContext' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData, IsTermData) == 0x000018, "Member 'LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData::IsTermData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData, Terms) == 0x000020, "Member 'LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData::Terms' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData, CallFunc_GetSBGameInstance_ReturnValue) == 0x000030, "Member 'LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData::CallFunc_GetSBGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000038, "Member 'LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData, CallFunc_GetEventScheduler_ReturnValue) == 0x000040, "Member 'LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData::CallFunc_GetEventScheduler_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData, CallFunc_GetMasterDataBP_OutMaster) == 0x000048, "Member 'LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData::CallFunc_GetMasterDataBP_OutMaster' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData, CallFunc_GetMasterDataBP_ReturnValue) == 0x000068, "Member 'LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData::CallFunc_GetMasterDataBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData, CallFunc_IsValid_ReturnValue_1) == 0x000069, "Member 'LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.SetLibraryAchievementCategory_Status
// 0x0030 (0x0030 - 0x0000)
struct LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Status final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4349[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Status) == 0x000008, "Wrong alignment on LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Status");
static_assert(sizeof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Status) == 0x000030, "Wrong size on LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Status");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Status, __WorldContext) == 0x000000, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Status::__WorldContext' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Status, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Status::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Status, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000010, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Status::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Status, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Status::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Status, CallFunc_GetPlayerAchievementComponent_ReturnValue) == 0x000020, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Status::CallFunc_GetPlayerAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Status, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Status::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.SetLibraryAchievementCategory_Class
// 0x0030 (0x0030 - 0x0000)
struct LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Class final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_434A[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Class) == 0x000008, "Wrong alignment on LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Class");
static_assert(sizeof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Class) == 0x000030, "Wrong size on LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Class");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Class, __WorldContext) == 0x000000, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Class::__WorldContext' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Class, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Class::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Class, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000010, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Class::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Class, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Class::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Class, CallFunc_GetPlayerAchievementComponent_ReturnValue) == 0x000020, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Class::CallFunc_GetPlayerAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Class, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Class::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.SetLibraryAchievementCategory_Quest
// 0x0030 (0x0030 - 0x0000)
struct LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Quest final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_434B[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Quest) == 0x000008, "Wrong alignment on LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Quest");
static_assert(sizeof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Quest) == 0x000030, "Wrong size on LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Quest");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Quest, __WorldContext) == 0x000000, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Quest::__WorldContext' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Quest, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Quest::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Quest, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000010, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Quest::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Quest, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Quest::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Quest, CallFunc_GetPlayerAchievementComponent_ReturnValue) == 0x000020, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Quest::CallFunc_GetPlayerAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Quest, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Quest::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.SetLibraryAchievementCategory_Communication
// 0x0030 (0x0030 - 0x0000)
struct LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Communication final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_434C[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Communication) == 0x000008, "Wrong alignment on LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Communication");
static_assert(sizeof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Communication) == 0x000030, "Wrong size on LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Communication");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Communication, __WorldContext) == 0x000000, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Communication::__WorldContext' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Communication, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Communication::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Communication, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000010, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Communication::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Communication, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Communication::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Communication, CallFunc_GetPlayerAchievementComponent_ReturnValue) == 0x000020, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Communication::CallFunc_GetPlayerAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Communication, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Communication::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.SetLibraryAchievementCategory_Life
// 0x0030 (0x0030 - 0x0000)
struct LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Life final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_434D[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Life) == 0x000008, "Wrong alignment on LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Life");
static_assert(sizeof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Life) == 0x000030, "Wrong size on LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Life");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Life, __WorldContext) == 0x000000, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Life::__WorldContext' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Life, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Life::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Life, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000010, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Life::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Life, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Life::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Life, CallFunc_GetPlayerAchievementComponent_ReturnValue) == 0x000020, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Life::CallFunc_GetPlayerAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Life, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Life::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.SetLibraryAchievementCategory_Assets
// 0x0030 (0x0030 - 0x0000)
struct LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Assets final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_434E[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Assets) == 0x000008, "Wrong alignment on LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Assets");
static_assert(sizeof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Assets) == 0x000030, "Wrong size on LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Assets");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Assets, __WorldContext) == 0x000000, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Assets::__WorldContext' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Assets, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Assets::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Assets, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000010, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Assets::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Assets, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Assets::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Assets, CallFunc_GetPlayerAchievementComponent_ReturnValue) == 0x000020, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Assets::CallFunc_GetPlayerAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Assets, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Assets::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.SetLibraryAchievementCategory_AdventureBoard
// 0x0030 (0x0030 - 0x0000)
struct LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_AdventureBoard final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_434F[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_AdventureBoard) == 0x000008, "Wrong alignment on LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_AdventureBoard");
static_assert(sizeof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_AdventureBoard) == 0x000030, "Wrong size on LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_AdventureBoard");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_AdventureBoard, __WorldContext) == 0x000000, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_AdventureBoard::__WorldContext' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_AdventureBoard, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_AdventureBoard::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_AdventureBoard, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000010, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_AdventureBoard::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_AdventureBoard, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_AdventureBoard::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_AdventureBoard, CallFunc_GetPlayerAchievementComponent_ReturnValue) == 0x000020, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_AdventureBoard::CallFunc_GetPlayerAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_AdventureBoard, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_AdventureBoard::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

