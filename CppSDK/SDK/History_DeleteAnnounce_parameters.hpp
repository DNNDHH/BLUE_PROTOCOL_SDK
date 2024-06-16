#pragma once

 

// Package: History_DeleteAnnounce

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function History_DeleteAnnounce.History_DeleteAnnounce_C.ExecuteUbergraph_History_DeleteAnnounce
// 0x00C8 (0x00C8 - 0x0000)
struct History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBHistoryType                                K2Node_CustomEvent_Type;                           // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5595[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Paid;                           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Free;                           // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              K2Node_CustomEvent_Time;                           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5596[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5597[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCountryConfigMasterData             CallFunc_BP_GetCountryConfigMasterById_ReturnValue; // 0x0040(0x0048)()
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5598[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5599[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result; // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue; // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce) == 0x000008, "Wrong alignment on History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce");
static_assert(sizeof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce) == 0x0000C8, "Wrong size on History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, EntryPoint) == 0x000000, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::EntryPoint' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, K2Node_CustomEvent_Type) == 0x000005, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, K2Node_CustomEvent_Paid) == 0x000008, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::K2Node_CustomEvent_Paid' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, K2Node_CustomEvent_Free) == 0x00000C, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::K2Node_CustomEvent_Free' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, K2Node_CustomEvent_Time) == 0x000010, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::K2Node_CustomEvent_Time' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, K2Node_SwitchEnum_CmpSuccess) == 0x00001C, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, CallFunc_GetMasterDataManager_IsValid) == 0x000030, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, CallFunc_GetMasterDataManager_ReturnValue) == 0x000038, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, CallFunc_BP_GetCountryConfigMasterById_ReturnValue) == 0x000040, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::CallFunc_BP_GetCountryConfigMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, CallFunc_Conv_IntToBool_ReturnValue) == 0x000088, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, CallFunc_SelectInt_ReturnValue) == 0x00008C, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, K2Node_CreateDelegate_OutputDelegate_1) == 0x000090, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000A0, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, Temp_bool_Variable) == 0x0000A1, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, CallFunc_SetDateTime_ReturnValue) == 0x0000A2, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, K2Node_Select_Default) == 0x0000A3, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, CallFunc_PlayAnimation_ReturnValue) == 0x0000A8, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result) == 0x0000B0, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue) == 0x0000B8, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce, CallFunc_IsValid_ReturnValue) == 0x0000C0, "Member 'History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function History_DeleteAnnounce.History_DeleteAnnounce_C.SetInfo
// 0x0018 (0x0018 - 0x0000)
struct History_DeleteAnnounce_C_SetInfo final
{
public:
	ESBHistoryType                                Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_559A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Paid;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Free;                                              // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_559B[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              Time;                                              // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(History_DeleteAnnounce_C_SetInfo) == 0x000008, "Wrong alignment on History_DeleteAnnounce_C_SetInfo");
static_assert(sizeof(History_DeleteAnnounce_C_SetInfo) == 0x000018, "Wrong size on History_DeleteAnnounce_C_SetInfo");
static_assert(offsetof(History_DeleteAnnounce_C_SetInfo, Type) == 0x000000, "Member 'History_DeleteAnnounce_C_SetInfo::Type' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_SetInfo, Paid) == 0x000004, "Member 'History_DeleteAnnounce_C_SetInfo::Paid' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_SetInfo, Free) == 0x000008, "Member 'History_DeleteAnnounce_C_SetInfo::Free' has a wrong offset!");
static_assert(offsetof(History_DeleteAnnounce_C_SetInfo, Time) == 0x000010, "Member 'History_DeleteAnnounce_C_SetInfo::Time' has a wrong offset!");

}

