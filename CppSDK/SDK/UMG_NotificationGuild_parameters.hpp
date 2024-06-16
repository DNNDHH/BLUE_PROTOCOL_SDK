#pragma once

 

// Package: UMG_NotificationGuild

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UMG_NotificationGuild.UMG_NotificationGuild_C.ExecuteUbergraph_UMG_NotificationGuild
// 0x0298 (0x0298 - 0x0000)
struct UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CD9[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CDA[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0080(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0098(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x00C0(0x0018)()
	TArray<class FText>                           K2Node_MakeArray_Array;                            // 0x00D8(0x0010)(ConstParm, ReferenceParm)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Result;                         // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CDB[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Request_InviteData_ReturnValue;           // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanOpenNotificationPartyDialog_ReturnValue; // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ENotificationDialogStatus                     K2Node_CustomEvent_DialogStatus;                   // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x010B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsAccept;                       // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CDC[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_MultipleSelectDialog_C*            CallFunc_Create_ReturnValue;                       // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CDD[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CDE[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue_1;          // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasEntries_ReturnValue;                   // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CDF[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue_2;          // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuildEntryData>                CallFunc_GetGuildEntryList_ReturnValue;            // 0x0150(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CE0[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildEntryData                        CallFunc_Array_Get_Item;                           // 0x0168(0x00E0)()
	TDelegate<void(int32 Result)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x0248(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_CanInterruptNotification_Result;          // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CE1[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CE2[0x3];                                     // 0x0269(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x026C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4CE3[0x4];                                     // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0280(0x0008)(NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_1;             // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild) == 0x000008, "Wrong alignment on UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild");
static_assert(sizeof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild) == 0x000298, "Wrong size on UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, EntryPoint) == 0x000000, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, K2Node_Event_Animation) == 0x000008, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, Temp_int_Variable) == 0x000010, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000028, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_GetTextFromAsset_ReturnValue) == 0x000038, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000060, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000070, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000080, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000098, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x0000B0, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0000C0, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, K2Node_MakeArray_Array) == 0x0000D8, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_PlayAnimation_ReturnValue) == 0x0000E8, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, K2Node_CustomEvent_Result) == 0x0000F0, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, K2Node_SwitchInteger_CmpSuccess) == 0x0000F4, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000F8, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_GetGuildComponent_ReturnValue) == 0x000100, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_Request_InviteData_ReturnValue) == 0x000108, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_Request_InviteData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_CanOpenNotificationPartyDialog_ReturnValue) == 0x000109, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_CanOpenNotificationPartyDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, K2Node_CustomEvent_DialogStatus) == 0x00010A, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::K2Node_CustomEvent_DialogStatus' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_IsValid_ReturnValue) == 0x00010B, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, K2Node_CustomEvent_IsAccept) == 0x00010C, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::K2Node_CustomEvent_IsAccept' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_Create_ReturnValue) == 0x000110, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_GetOwningPlayer_ReturnValue) == 0x000118, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_IsValid_ReturnValue_1) == 0x000120, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, K2Node_DynamicCast_AsSBPlayer_State) == 0x000128, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, K2Node_DynamicCast_bSuccess_1) == 0x000130, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_GetGuildComponent_ReturnValue_1) == 0x000138, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_GetGuildComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_HasEntries_ReturnValue) == 0x000140, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_HasEntries_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_GetGuildComponent_ReturnValue_2) == 0x000148, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_GetGuildComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_GetGuildEntryList_ReturnValue) == 0x000150, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_GetGuildEntryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_Array_LastIndex_ReturnValue) == 0x000160, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_Array_Get_Item) == 0x000168, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, K2Node_CreateDelegate_OutputDelegate) == 0x000248, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_CanInterruptNotification_Result) == 0x000258, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_CanInterruptNotification_Result' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000260, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_IsValid_ReturnValue_2) == 0x000268, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, K2Node_CreateDelegate_OutputDelegate_1) == 0x00026C, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000280, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, K2Node_DynamicCast_AsSBPlayer_State_1) == 0x000288, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::K2Node_DynamicCast_AsSBPlayer_State_1' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild, K2Node_DynamicCast_bSuccess_2) == 0x000290, "Member 'UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function UMG_NotificationGuild.UMG_NotificationGuild_C.OnGuildInviteResponse
// 0x0001 (0x0001 - 0x0000)
struct UMG_NotificationGuild_C_OnGuildInviteResponse final
{
public:
	bool                                          IsAccept;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_NotificationGuild_C_OnGuildInviteResponse) == 0x000001, "Wrong alignment on UMG_NotificationGuild_C_OnGuildInviteResponse");
static_assert(sizeof(UMG_NotificationGuild_C_OnGuildInviteResponse) == 0x000001, "Wrong size on UMG_NotificationGuild_C_OnGuildInviteResponse");
static_assert(offsetof(UMG_NotificationGuild_C_OnGuildInviteResponse, IsAccept) == 0x000000, "Member 'UMG_NotificationGuild_C_OnGuildInviteResponse::IsAccept' has a wrong offset!");

// Function UMG_NotificationGuild.UMG_NotificationGuild_C.CloseDialog
// 0x0001 (0x0001 - 0x0000)
struct UMG_NotificationGuild_C_CloseDialog final
{
public:
	ENotificationDialogStatus                     DialogStatus;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_NotificationGuild_C_CloseDialog) == 0x000001, "Wrong alignment on UMG_NotificationGuild_C_CloseDialog");
static_assert(sizeof(UMG_NotificationGuild_C_CloseDialog) == 0x000001, "Wrong size on UMG_NotificationGuild_C_CloseDialog");
static_assert(offsetof(UMG_NotificationGuild_C_CloseDialog, DialogStatus) == 0x000000, "Member 'UMG_NotificationGuild_C_CloseDialog::DialogStatus' has a wrong offset!");

// Function UMG_NotificationGuild.UMG_NotificationGuild_C.GetResultMultipleDialog
// 0x0004 (0x0004 - 0x0000)
struct UMG_NotificationGuild_C_GetResultMultipleDialog final
{
public:
	int32                                         Result;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_NotificationGuild_C_GetResultMultipleDialog) == 0x000004, "Wrong alignment on UMG_NotificationGuild_C_GetResultMultipleDialog");
static_assert(sizeof(UMG_NotificationGuild_C_GetResultMultipleDialog) == 0x000004, "Wrong size on UMG_NotificationGuild_C_GetResultMultipleDialog");
static_assert(offsetof(UMG_NotificationGuild_C_GetResultMultipleDialog, Result) == 0x000000, "Member 'UMG_NotificationGuild_C_GetResultMultipleDialog::Result' has a wrong offset!");

// Function UMG_NotificationGuild.UMG_NotificationGuild_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct UMG_NotificationGuild_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_NotificationGuild_C_OnAnimationFinished) == 0x000008, "Wrong alignment on UMG_NotificationGuild_C_OnAnimationFinished");
static_assert(sizeof(UMG_NotificationGuild_C_OnAnimationFinished) == 0x000008, "Wrong size on UMG_NotificationGuild_C_OnAnimationFinished");
static_assert(offsetof(UMG_NotificationGuild_C_OnAnimationFinished, Animation) == 0x000000, "Member 'UMG_NotificationGuild_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function UMG_NotificationGuild.UMG_NotificationGuild_C.GetInviteGuildName
// 0x01F0 (0x01F0 - 0x0000)
struct UMG_NotificationGuild_C_GetInviteGuildName final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CE4[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0030(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CE5[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuildEntryData>                CallFunc_GetGuildEntryList_ReturnValue;            // 0x0058(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CE6[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildEntryData                        CallFunc_Array_Get_Item;                           // 0x0070(0x00E0)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0150(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0168(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsUGC;           // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsRestrict;      // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CE7[0x6];                                     // 0x01AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01B0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01C0(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x01D8(0x0018)()
};
static_assert(alignof(UMG_NotificationGuild_C_GetInviteGuildName) == 0x000008, "Wrong alignment on UMG_NotificationGuild_C_GetInviteGuildName");
static_assert(sizeof(UMG_NotificationGuild_C_GetInviteGuildName) == 0x0001F0, "Wrong size on UMG_NotificationGuild_C_GetInviteGuildName");
static_assert(offsetof(UMG_NotificationGuild_C_GetInviteGuildName, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'UMG_NotificationGuild_C_GetInviteGuildName::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_GetInviteGuildName, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'UMG_NotificationGuild_C_GetInviteGuildName::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_GetInviteGuildName, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'UMG_NotificationGuild_C_GetInviteGuildName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_GetInviteGuildName, CallFunc_GetRestrictText_ReturnValue) == 0x000030, "Member 'UMG_NotificationGuild_C_GetInviteGuildName::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_GetInviteGuildName, Temp_bool_Variable) == 0x000048, "Member 'UMG_NotificationGuild_C_GetInviteGuildName::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_GetInviteGuildName, CallFunc_GetGuildComponent_ReturnValue) == 0x000050, "Member 'UMG_NotificationGuild_C_GetInviteGuildName::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_GetInviteGuildName, CallFunc_GetGuildEntryList_ReturnValue) == 0x000058, "Member 'UMG_NotificationGuild_C_GetInviteGuildName::CallFunc_GetGuildEntryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_GetInviteGuildName, CallFunc_Array_LastIndex_ReturnValue) == 0x000068, "Member 'UMG_NotificationGuild_C_GetInviteGuildName::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_GetInviteGuildName, CallFunc_Array_Get_Item) == 0x000070, "Member 'UMG_NotificationGuild_C_GetInviteGuildName::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_GetInviteGuildName, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000150, "Member 'UMG_NotificationGuild_C_GetInviteGuildName::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_GetInviteGuildName, K2Node_MakeStruct_FormatArgumentData) == 0x000168, "Member 'UMG_NotificationGuild_C_GetInviteGuildName::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_GetInviteGuildName, CallFunc_CheckXboxPrivacyTypePure_IsUGC) == 0x0001A8, "Member 'UMG_NotificationGuild_C_GetInviteGuildName::CallFunc_CheckXboxPrivacyTypePure_IsUGC' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_GetInviteGuildName, CallFunc_CheckXboxPrivacyTypePure_IsRestrict) == 0x0001A9, "Member 'UMG_NotificationGuild_C_GetInviteGuildName::CallFunc_CheckXboxPrivacyTypePure_IsRestrict' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_GetInviteGuildName, K2Node_MakeArray_Array) == 0x0001B0, "Member 'UMG_NotificationGuild_C_GetInviteGuildName::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_GetInviteGuildName, CallFunc_Format_ReturnValue) == 0x0001C0, "Member 'UMG_NotificationGuild_C_GetInviteGuildName::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_NotificationGuild_C_GetInviteGuildName, K2Node_Select_Default) == 0x0001D8, "Member 'UMG_NotificationGuild_C_GetInviteGuildName::K2Node_Select_Default' has a wrong offset!");

}

