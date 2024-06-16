#pragma once

 

// Package: BP_DHC_ManagePortal

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "EN_DHC_InteractResult_structs.hpp"


namespace SDK::Params
{

// Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.DHC_Interacted__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_DHC_ManagePortal_C_DHC_Interacted__DelegateSignature final
{
public:
	class ASBPlayerCharacter*                     InteractedPlayer;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EN_DHC_InteractResult                         Result;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DHC_ManagePortal_C_DHC_Interacted__DelegateSignature) == 0x000008, "Wrong alignment on BP_DHC_ManagePortal_C_DHC_Interacted__DelegateSignature");
static_assert(sizeof(BP_DHC_ManagePortal_C_DHC_Interacted__DelegateSignature) == 0x000010, "Wrong size on BP_DHC_ManagePortal_C_DHC_Interacted__DelegateSignature");
static_assert(offsetof(BP_DHC_ManagePortal_C_DHC_Interacted__DelegateSignature, InteractedPlayer) == 0x000000, "Member 'BP_DHC_ManagePortal_C_DHC_Interacted__DelegateSignature::InteractedPlayer' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_DHC_Interacted__DelegateSignature, Result) == 0x000008, "Member 'BP_DHC_ManagePortal_C_DHC_Interacted__DelegateSignature::Result' has a wrong offset!");

// Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.ExecuteUbergraph_BP_DHC_ManagePortal
// 0x0150 (0x0150 - 0x0000)
struct BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_638D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	EN_DHC_InteractResult                         Temp_byte_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_638E[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_Other_Actor;                          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_Event_View_Rotation;                        // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_638F[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DHCMeasurer_C*                      CallFunc_GetFreeDHCMesasurer_VacantArea;           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckPartyMemberMenu_CanStart;            // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckPartyId_IsValid;                     // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6390[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6391[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DHCMeasurer_C*                      CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6392[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_CustomEvent_InteractedPlayer;               // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EN_DHC_InteractResult                         K2Node_CustomEvent_Result;                         // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6393[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6394[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00C8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00E0(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable;                                // 0x0108(0x0018)(ConstParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0120(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0138(0x0018)(ConstParm)
};
static_assert(alignof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal) == 0x000008, "Wrong alignment on BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal");
static_assert(sizeof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal) == 0x000150, "Wrong size on BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, EntryPoint) == 0x000000, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, Temp_byte_Variable) == 0x000030, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, K2Node_Event_Other_Actor) == 0x000038, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::K2Node_Event_Other_Actor' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, K2Node_Event_View_Rotation) == 0x000040, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::K2Node_Event_View_Rotation' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, CallFunc_GetFreeDHCMesasurer_VacantArea) == 0x000050, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::CallFunc_GetFreeDHCMesasurer_VacantArea' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000058, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, CallFunc_IsValid_ReturnValue) == 0x000061, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, CallFunc_CheckPartyMemberMenu_CanStart) == 0x000062, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::CallFunc_CheckPartyMemberMenu_CanStart' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, CallFunc_CheckPartyId_IsValid) == 0x000063, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::CallFunc_CheckPartyId_IsValid' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, CallFunc_IsValid_ReturnValue_1) == 0x000064, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, Temp_int_Loop_Counter_Variable) == 0x000068, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, Temp_int_Array_Index_Variable) == 0x00006C, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, CallFunc_Add_IntInt_ReturnValue) == 0x000070, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, CallFunc_Array_Get_Item) == 0x000078, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, CallFunc_Less_IntInt_ReturnValue) == 0x000084, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, K2Node_CustomEvent_InteractedPlayer) == 0x000088, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::K2Node_CustomEvent_InteractedPlayer' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, K2Node_CustomEvent_Result) == 0x000090, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000098, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, CallFunc_IsDedicatedServer_ReturnValue) == 0x0000A0, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000A1, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0000A8, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0000B8, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000C8, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000E0, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x0000F8, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, Temp_text_Variable) == 0x000108, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000120, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal, K2Node_Select_Default) == 0x000138, "Member 'BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal::K2Node_Select_Default' has a wrong offset!");

// Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.DHCInteractionResult
// 0x0010 (0x0010 - 0x0000)
struct BP_DHC_ManagePortal_C_DHCInteractionResult final
{
public:
	class ASBPlayerCharacter*                     InteractedPlayer;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EN_DHC_InteractResult                         Result;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DHC_ManagePortal_C_DHCInteractionResult) == 0x000008, "Wrong alignment on BP_DHC_ManagePortal_C_DHCInteractionResult");
static_assert(sizeof(BP_DHC_ManagePortal_C_DHCInteractionResult) == 0x000010, "Wrong size on BP_DHC_ManagePortal_C_DHCInteractionResult");
static_assert(offsetof(BP_DHC_ManagePortal_C_DHCInteractionResult, InteractedPlayer) == 0x000000, "Member 'BP_DHC_ManagePortal_C_DHCInteractionResult::InteractedPlayer' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_DHCInteractionResult, Result) == 0x000008, "Member 'BP_DHC_ManagePortal_C_DHCInteractionResult::Result' has a wrong offset!");

// Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.GetFreeDHCMesasurer
// 0x0040 (0x0040 - 0x0000)
struct BP_DHC_ManagePortal_C_GetFreeDHCMesasurer final
{
public:
	class ABP_DHCMeasurer_C*                      VacantArea;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DHCMeasurer_C*                      TmpArea;                                           // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6395[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6396[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DHCMeasurer_C*                      CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInUse_IsUse;                            // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DHC_ManagePortal_C_GetFreeDHCMesasurer) == 0x000008, "Wrong alignment on BP_DHC_ManagePortal_C_GetFreeDHCMesasurer");
static_assert(sizeof(BP_DHC_ManagePortal_C_GetFreeDHCMesasurer) == 0x000040, "Wrong size on BP_DHC_ManagePortal_C_GetFreeDHCMesasurer");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetFreeDHCMesasurer, VacantArea) == 0x000000, "Member 'BP_DHC_ManagePortal_C_GetFreeDHCMesasurer::VacantArea' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetFreeDHCMesasurer, TmpArea) == 0x000008, "Member 'BP_DHC_ManagePortal_C_GetFreeDHCMesasurer::TmpArea' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetFreeDHCMesasurer, Temp_bool_Variable) == 0x000010, "Member 'BP_DHC_ManagePortal_C_GetFreeDHCMesasurer::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetFreeDHCMesasurer, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_DHC_ManagePortal_C_GetFreeDHCMesasurer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetFreeDHCMesasurer, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'BP_DHC_ManagePortal_C_GetFreeDHCMesasurer::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetFreeDHCMesasurer, Temp_int_Variable) == 0x00001C, "Member 'BP_DHC_ManagePortal_C_GetFreeDHCMesasurer::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetFreeDHCMesasurer, CallFunc_Add_IntInt_ReturnValue_1) == 0x000020, "Member 'BP_DHC_ManagePortal_C_GetFreeDHCMesasurer::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetFreeDHCMesasurer, Temp_int_Variable_1) == 0x000024, "Member 'BP_DHC_ManagePortal_C_GetFreeDHCMesasurer::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetFreeDHCMesasurer, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_DHC_ManagePortal_C_GetFreeDHCMesasurer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetFreeDHCMesasurer, CallFunc_Percent_IntInt_ReturnValue) == 0x00002C, "Member 'BP_DHC_ManagePortal_C_GetFreeDHCMesasurer::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetFreeDHCMesasurer, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_DHC_ManagePortal_C_GetFreeDHCMesasurer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetFreeDHCMesasurer, CallFunc_Add_IntInt_ReturnValue_2) == 0x000038, "Member 'BP_DHC_ManagePortal_C_GetFreeDHCMesasurer::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetFreeDHCMesasurer, CallFunc_IsInUse_IsUse) == 0x00003C, "Member 'BP_DHC_ManagePortal_C_GetFreeDHCMesasurer::CallFunc_IsInUse_IsUse' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetFreeDHCMesasurer, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00003D, "Member 'BP_DHC_ManagePortal_C_GetFreeDHCMesasurer::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetFreeDHCMesasurer, CallFunc_BooleanAND_ReturnValue) == 0x00003E, "Member 'BP_DHC_ManagePortal_C_GetFreeDHCMesasurer::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.GetPlayerNowDHC
// 0x0048 (0x0048 - 0x0000)
struct BP_DHC_ManagePortal_C_GetPlayerNowDHC final
{
public:
	class APlayerController*                      Controller;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DHCMeasurer_C*                      NowDHC;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DHCMeasurer_C*                      TmpDHC;                                            // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6397[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6398[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DHCMeasurer_C*                      CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6399[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DHC_ManagePortal_C_GetPlayerNowDHC) == 0x000008, "Wrong alignment on BP_DHC_ManagePortal_C_GetPlayerNowDHC");
static_assert(sizeof(BP_DHC_ManagePortal_C_GetPlayerNowDHC) == 0x000048, "Wrong size on BP_DHC_ManagePortal_C_GetPlayerNowDHC");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetPlayerNowDHC, Controller) == 0x000000, "Member 'BP_DHC_ManagePortal_C_GetPlayerNowDHC::Controller' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetPlayerNowDHC, NowDHC) == 0x000008, "Member 'BP_DHC_ManagePortal_C_GetPlayerNowDHC::NowDHC' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetPlayerNowDHC, TmpDHC) == 0x000010, "Member 'BP_DHC_ManagePortal_C_GetPlayerNowDHC::TmpDHC' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetPlayerNowDHC, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_DHC_ManagePortal_C_GetPlayerNowDHC::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetPlayerNowDHC, Temp_bool_True_if_break_was_hit_Variable) == 0x00001C, "Member 'BP_DHC_ManagePortal_C_GetPlayerNowDHC::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetPlayerNowDHC, CallFunc_Not_PreBool_ReturnValue) == 0x00001D, "Member 'BP_DHC_ManagePortal_C_GetPlayerNowDHC::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetPlayerNowDHC, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'BP_DHC_ManagePortal_C_GetPlayerNowDHC::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetPlayerNowDHC, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_DHC_ManagePortal_C_GetPlayerNowDHC::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetPlayerNowDHC, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'BP_DHC_ManagePortal_C_GetPlayerNowDHC::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetPlayerNowDHC, CallFunc_Array_Find_ReturnValue) == 0x000034, "Member 'BP_DHC_ManagePortal_C_GetPlayerNowDHC::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetPlayerNowDHC, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000038, "Member 'BP_DHC_ManagePortal_C_GetPlayerNowDHC::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetPlayerNowDHC, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'BP_DHC_ManagePortal_C_GetPlayerNowDHC::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetPlayerNowDHC, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'BP_DHC_ManagePortal_C_GetPlayerNowDHC::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_GetPlayerNowDHC, CallFunc_BooleanAND_ReturnValue) == 0x000041, "Member 'BP_DHC_ManagePortal_C_GetPlayerNowDHC::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.CheckPartyId
// 0x0058 (0x0058 - 0x0000)
struct BP_DHC_ManagePortal_C_CheckPartyId final
{
public:
	class ASBPlayerCharacter*                     PlayerCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PartyJoined;                                       // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_639A[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartyId_ReturnValue;                   // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInParty_ReturnValue;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_639B[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_639C[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DHCMeasurer_C*                      CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCurrentPartyId_PartyId;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DHC_ManagePortal_C_CheckPartyId) == 0x000008, "Wrong alignment on BP_DHC_ManagePortal_C_CheckPartyId");
static_assert(sizeof(BP_DHC_ManagePortal_C_CheckPartyId) == 0x000058, "Wrong size on BP_DHC_ManagePortal_C_CheckPartyId");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyId, PlayerCharacter) == 0x000000, "Member 'BP_DHC_ManagePortal_C_CheckPartyId::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyId, IsValid) == 0x000008, "Member 'BP_DHC_ManagePortal_C_CheckPartyId::IsValid' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyId, PartyJoined) == 0x000009, "Member 'BP_DHC_ManagePortal_C_CheckPartyId::PartyJoined' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyId, CallFunc_GetPartyId_ReturnValue) == 0x000010, "Member 'BP_DHC_ManagePortal_C_CheckPartyId::CallFunc_GetPartyId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyId, CallFunc_IsInParty_ReturnValue) == 0x000020, "Member 'BP_DHC_ManagePortal_C_CheckPartyId::CallFunc_IsInParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyId, Temp_int_Array_Index_Variable) == 0x000024, "Member 'BP_DHC_ManagePortal_C_CheckPartyId::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyId, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'BP_DHC_ManagePortal_C_CheckPartyId::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyId, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'BP_DHC_ManagePortal_C_CheckPartyId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyId, CallFunc_Not_PreBool_ReturnValue) == 0x000030, "Member 'BP_DHC_ManagePortal_C_CheckPartyId::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyId, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_DHC_ManagePortal_C_CheckPartyId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyId, CallFunc_GetCurrentPartyId_PartyId) == 0x000040, "Member 'BP_DHC_ManagePortal_C_CheckPartyId::CallFunc_GetCurrentPartyId_PartyId' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyId, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_DHC_ManagePortal_C_CheckPartyId::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyId, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000054, "Member 'BP_DHC_ManagePortal_C_CheckPartyId::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyId, CallFunc_Less_IntInt_ReturnValue) == 0x000055, "Member 'BP_DHC_ManagePortal_C_CheckPartyId::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.CheckPartyMemberMenu
// 0x0080 (0x0080 - 0x0000)
struct BP_DHC_ManagePortal_C_CheckPartyMemberMenu final
{
public:
	class ASBPlayerCharacter*                     PlayerCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanStart;                                          // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          SomePlayerOpen;                                    // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_639D[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartyId_ReturnValue;                   // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInParty_ReturnValue;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_639E[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_639F[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63A0[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63A1[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63A2[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMainMenuOpen_ReturnValue;               // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63A3[0x5];                                     // 0x0063(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartyId_ReturnValue_1;                 // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu) == 0x000008, "Wrong alignment on BP_DHC_ManagePortal_C_CheckPartyMemberMenu");
static_assert(sizeof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu) == 0x000080, "Wrong size on BP_DHC_ManagePortal_C_CheckPartyMemberMenu");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, PlayerCharacter) == 0x000000, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, CanStart) == 0x000008, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::CanStart' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, SomePlayerOpen) == 0x000009, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::SomePlayerOpen' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, Temp_bool_True_if_break_was_hit_Variable) == 0x00000A, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, CallFunc_GetPartyId_ReturnValue) == 0x000010, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::CallFunc_GetPartyId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000020, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, CallFunc_IsInParty_ReturnValue) == 0x000021, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::CallFunc_IsInParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, Temp_int_Array_Index_Variable) == 0x000024, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, CallFunc_Not_PreBool_ReturnValue_1) == 0x00002C, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, CallFunc_GetGameState_ReturnValue) == 0x000038, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, CallFunc_Array_Get_Item) == 0x000048, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, K2Node_DynamicCast_AsSBPlayer_State) == 0x000058, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, CallFunc_BooleanAND_ReturnValue) == 0x000061, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, CallFunc_IsMainMenuOpen_ReturnValue) == 0x000062, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::CallFunc_IsMainMenuOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, CallFunc_GetPartyId_ReturnValue_1) == 0x000068, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::CallFunc_GetPartyId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000078, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_CheckPartyMemberMenu, CallFunc_BooleanAND_ReturnValue_1) == 0x000079, "Member 'BP_DHC_ManagePortal_C_CheckPartyMemberMenu::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.Interacted
// 0x0018 (0x0018 - 0x0000)
struct BP_DHC_ManagePortal_C_Interacted final
{
public:
	class AActor*                                 Other_Actor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               View_Rotation;                                     // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DHC_ManagePortal_C_Interacted) == 0x000008, "Wrong alignment on BP_DHC_ManagePortal_C_Interacted");
static_assert(sizeof(BP_DHC_ManagePortal_C_Interacted) == 0x000018, "Wrong size on BP_DHC_ManagePortal_C_Interacted");
static_assert(offsetof(BP_DHC_ManagePortal_C_Interacted, Other_Actor) == 0x000000, "Member 'BP_DHC_ManagePortal_C_Interacted::Other_Actor' has a wrong offset!");
static_assert(offsetof(BP_DHC_ManagePortal_C_Interacted, View_Rotation) == 0x000008, "Member 'BP_DHC_ManagePortal_C_Interacted::View_Rotation' has a wrong offset!");

}

