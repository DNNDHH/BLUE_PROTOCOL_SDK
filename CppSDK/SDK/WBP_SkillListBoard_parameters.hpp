#pragma once

 

// Package: WBP_SkillListBoard

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WBP_SkillListBoard.WBP_SkillListBoard_C.OnSubMenuChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_SkillListBoard_C_OnSubMenuChanged__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillListBoard_C_OnSubMenuChanged__DelegateSignature) == 0x000004, "Wrong alignment on WBP_SkillListBoard_C_OnSubMenuChanged__DelegateSignature");
static_assert(sizeof(WBP_SkillListBoard_C_OnSubMenuChanged__DelegateSignature) == 0x000004, "Wrong size on WBP_SkillListBoard_C_OnSubMenuChanged__DelegateSignature");
static_assert(offsetof(WBP_SkillListBoard_C_OnSubMenuChanged__DelegateSignature, Param_Index) == 0x000000, "Member 'WBP_SkillListBoard_C_OnSubMenuChanged__DelegateSignature::Param_Index' has a wrong offset!");

// Function WBP_SkillListBoard.WBP_SkillListBoard_C.ExecuteUbergraph_WBP_SkillListBoard
// 0x0148 (0x0148 - 0x0000)
struct WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7640[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 K2Node_CustomEvent_Skill;                          // 0x0018(0x0058)()
	ESBClassType                                  CallFunc_Get_Now_Select_Class_Output;              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType;             // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7641[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBClassType>                          CallFunc_GetSortedPlayerClassList_ReturnValue;     // 0x0078(0x0010)(ReferenceParm)
	ESBClassType                                  K2Node_CustomEvent_Typr;                           // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7642[0x6];                                     // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType_1;           // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7643[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7644[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBClassType Typr)>            K2Node_CreateDelegate_OutputDelegate_1;            // 0x00AC(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_Result;                         // 0x00BC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x00C0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7645[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D8(0x0018)()
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_2;            // 0x00F8(0x0010)(ZeroConstructor, NoDestructor)
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue; // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1; // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_3;            // 0x0120(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_2; // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RequestCharaSkillMasteryOthers_ReturnValue; // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard) == 0x000008, "Wrong alignment on WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard");
static_assert(sizeof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard) == 0x000148, "Wrong size on WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, EntryPoint) == 0x000000, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, K2Node_CustomEvent_Skill) == 0x000018, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::K2Node_CustomEvent_Skill' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, CallFunc_Get_Now_Select_Class_Output) == 0x000070, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::CallFunc_Get_Now_Select_Class_Output' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, CallFunc_GetPlayerClassType_ClassType) == 0x000071, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::CallFunc_GetPlayerClassType_ClassType' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, CallFunc_GetSortedPlayerClassList_ReturnValue) == 0x000078, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::CallFunc_GetSortedPlayerClassList_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, K2Node_CustomEvent_Typr) == 0x000088, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::K2Node_CustomEvent_Typr' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, CallFunc_IsValid_ReturnValue) == 0x000089, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, CallFunc_PlayAnimation_ReturnValue) == 0x000090, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, CallFunc_GetPlayerClassType_ClassType_1) == 0x000098, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::CallFunc_GetPlayerClassType_ClassType_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000A0, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000A8, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000AC, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, K2Node_CustomEvent_Result) == 0x0000BC, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, CallFunc_GetSBRetMessage_ReturnValue) == 0x0000C0, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000D0, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D8, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000F0, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000F8, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue) == 0x000108, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000110, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1) == 0x000118, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, K2Node_CreateDelegate_OutputDelegate_3) == 0x000120, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x000130, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_2) == 0x000138, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard, CallFunc_RequestCharaSkillMasteryOthers_ReturnValue) == 0x000140, "Member 'WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard::CallFunc_RequestCharaSkillMasteryOthers_ReturnValue' has a wrong offset!");

// Function WBP_SkillListBoard.WBP_SkillListBoard_C.OnCharaSkillMasteryOthersComplete
// 0x0004 (0x0004 - 0x0000)
struct WBP_SkillListBoard_C_OnCharaSkillMasteryOthersComplete final
{
public:
	int32                                         Result;                                            // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillListBoard_C_OnCharaSkillMasteryOthersComplete) == 0x000004, "Wrong alignment on WBP_SkillListBoard_C_OnCharaSkillMasteryOthersComplete");
static_assert(sizeof(WBP_SkillListBoard_C_OnCharaSkillMasteryOthersComplete) == 0x000004, "Wrong size on WBP_SkillListBoard_C_OnCharaSkillMasteryOthersComplete");
static_assert(offsetof(WBP_SkillListBoard_C_OnCharaSkillMasteryOthersComplete, Result) == 0x000000, "Member 'WBP_SkillListBoard_C_OnCharaSkillMasteryOthersComplete::Result' has a wrong offset!");

// Function WBP_SkillListBoard.WBP_SkillListBoard_C.CustomEvent_0
// 0x0001 (0x0001 - 0x0000)
struct WBP_SkillListBoard_C_CustomEvent_0 final
{
public:
	ESBClassType                                  Typr;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillListBoard_C_CustomEvent_0) == 0x000001, "Wrong alignment on WBP_SkillListBoard_C_CustomEvent_0");
static_assert(sizeof(WBP_SkillListBoard_C_CustomEvent_0) == 0x000001, "Wrong size on WBP_SkillListBoard_C_CustomEvent_0");
static_assert(offsetof(WBP_SkillListBoard_C_CustomEvent_0, Typr) == 0x000000, "Member 'WBP_SkillListBoard_C_CustomEvent_0::Typr' has a wrong offset!");

// Function WBP_SkillListBoard.WBP_SkillListBoard_C.OpenSkillTree
// 0x0058 (0x0058 - 0x0000)
struct WBP_SkillListBoard_C_OpenSkillTree final
{
public:
	struct FSBSkillDataMasterData                 Skill;                                             // 0x0000(0x0058)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_SkillListBoard_C_OpenSkillTree) == 0x000008, "Wrong alignment on WBP_SkillListBoard_C_OpenSkillTree");
static_assert(sizeof(WBP_SkillListBoard_C_OpenSkillTree) == 0x000058, "Wrong size on WBP_SkillListBoard_C_OpenSkillTree");
static_assert(offsetof(WBP_SkillListBoard_C_OpenSkillTree, Skill) == 0x000000, "Member 'WBP_SkillListBoard_C_OpenSkillTree::Skill' has a wrong offset!");

// Function WBP_SkillListBoard.WBP_SkillListBoard_C.Get Now Select Class
// 0x0001 (0x0001 - 0x0000)
struct WBP_SkillListBoard_C_Get_Now_Select_Class final
{
public:
	ESBClassType                                  Output;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillListBoard_C_Get_Now_Select_Class) == 0x000001, "Wrong alignment on WBP_SkillListBoard_C_Get_Now_Select_Class");
static_assert(sizeof(WBP_SkillListBoard_C_Get_Now_Select_Class) == 0x000001, "Wrong size on WBP_SkillListBoard_C_Get_Now_Select_Class");
static_assert(offsetof(WBP_SkillListBoard_C_Get_Now_Select_Class, Output) == 0x000000, "Member 'WBP_SkillListBoard_C_Get_Now_Select_Class::Output' has a wrong offset!");

// Function WBP_SkillListBoard.WBP_SkillListBoard_C.Skill List Setting
// 0x0670 (0x0670 - 0x0000)
struct WBP_SkillListBoard_C_Skill_List_Setting final
{
public:
	struct FSBSkillDataMasterData                 Master;                                            // 0x0000(0x0058)(Edit, BlueprintVisible)
	struct FSBPlayerSkillData                     Skill;                                             // 0x0058(0x0180)(Edit, BlueprintVisible)
	TArray<struct FSBPlayerSkillData>             TmpSKillData;                                      // 0x01D8(0x0010)(Edit, BlueprintVisible)
	class UPanelWidget*                           Temp_object_Variable;                              // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                           Temp_object_Variable_1;                            // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                           Temp_object_Variable_2;                            // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                           Temp_object_Variable_3;                            // 0x0200(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                           Temp_object_Variable_4;                            // 0x0208(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                           Temp_object_Variable_5;                            // 0x0210(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                           Temp_object_Variable_6;                            // 0x0218(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                           Temp_object_Variable_7;                            // 0x0220(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_SkillListItem_C*                   CallFunc_Create_ReturnValue;                       // 0x0228(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                           Temp_object_Variable_8;                            // 0x0230(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0244(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                           Temp_object_Variable_9;                            // 0x0248(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FSBSkillDataMasterData& SkillId)> K2Node_CreateDelegate_OutputDelegate;              // 0x0250(0x0010)(ZeroConstructor, NoDestructor)
	class UPanelWidget*                           Temp_object_Variable_10;                           // 0x0260(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                           Temp_object_Variable_11;                           // 0x0268(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillType                                  Temp_byte_Variable;                                // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7646[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelWidget*                           Temp_object_Variable_12;                           // 0x0278(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerSkillData                     CallFunc_Array_Get_Item;                           // 0x0280(0x0180)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0400(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0404(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7647[0x3];                                     // 0x0405(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0408(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSkillMasteryParam_IsExists;            // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7648[0x3];                                     // 0x0411(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillMasteryParam                   CallFunc_GetSkillMasteryParam_ReturnValue;         // 0x0414(0x0008)(NoDestructor)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x041C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7649[0x3];                                     // 0x041D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x0420(0x0058)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0478(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0479(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_Get_Now_Select_Class_Output;              // 0x047A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_764A[0x5];                                     // 0x047B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelWidget*                           Temp_object_Variable_13;                           // 0x0480(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0488(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_764B[0x4];                                     // 0x048C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelWidget*                           K2Node_Select_Default;                             // 0x0490(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_764C[0x7];                                     // 0x0499(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x04A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x04A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_764D[0x4];                                     // 0x04AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x04B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             CallFunc_GetSkillDataTable_ReturnValue;            // 0x04B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x04C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_764E[0x7];                                     // 0x04C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x04C8(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x04D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x04E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_764F[0x4];                                     // 0x04E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerSkillData                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x04E8(0x0180)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0668(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0669(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7650[0x2];                                     // 0x066A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x066C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillListBoard_C_Skill_List_Setting) == 0x000008, "Wrong alignment on WBP_SkillListBoard_C_Skill_List_Setting");
static_assert(sizeof(WBP_SkillListBoard_C_Skill_List_Setting) == 0x000670, "Wrong size on WBP_SkillListBoard_C_Skill_List_Setting");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, Master) == 0x000000, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::Master' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, Skill) == 0x000058, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::Skill' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, TmpSKillData) == 0x0001D8, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::TmpSKillData' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, Temp_object_Variable) == 0x0001E8, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, Temp_object_Variable_1) == 0x0001F0, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, Temp_object_Variable_2) == 0x0001F8, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, Temp_object_Variable_3) == 0x000200, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, Temp_object_Variable_4) == 0x000208, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, Temp_object_Variable_5) == 0x000210, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, Temp_object_Variable_6) == 0x000218, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, Temp_object_Variable_7) == 0x000220, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_Create_ReturnValue) == 0x000228, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, Temp_object_Variable_8) == 0x000230, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, Temp_int_Array_Index_Variable) == 0x000238, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, Temp_int_Loop_Counter_Variable) == 0x00023C, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_Add_IntInt_ReturnValue) == 0x000240, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, Temp_int_Array_Index_Variable_1) == 0x000244, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, Temp_object_Variable_9) == 0x000248, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::Temp_object_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, K2Node_CreateDelegate_OutputDelegate) == 0x000250, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, Temp_object_Variable_10) == 0x000260, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::Temp_object_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, Temp_object_Variable_11) == 0x000268, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::Temp_object_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, Temp_byte_Variable) == 0x000270, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, Temp_object_Variable_12) == 0x000278, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::Temp_object_Variable_12' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_Array_Get_Item) == 0x000280, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_Array_Length_ReturnValue) == 0x000400, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_GetMasterDataManager_IsValid) == 0x000404, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_GetMasterDataManager_ReturnValue) == 0x000408, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_GetSkillMasteryParam_IsExists) == 0x000410, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_GetSkillMasteryParam_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_GetSkillMasteryParam_ReturnValue) == 0x000414, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_GetSkillMasteryParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x00041C, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x000420, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_BooleanAND_ReturnValue) == 0x000478, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, K2Node_SwitchEnum_CmpSuccess) == 0x000479, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_Get_Now_Select_Class_Output) == 0x00047A, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_Get_Now_Select_Class_Output' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, Temp_object_Variable_13) == 0x000480, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::Temp_object_Variable_13' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, Temp_int_Loop_Counter_Variable_1) == 0x000488, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, K2Node_Select_Default) == 0x000490, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_Less_IntInt_ReturnValue) == 0x000498, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_AddChild_ReturnValue) == 0x0004A0, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_Add_IntInt_ReturnValue_1) == 0x0004A8, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_GetPlayerManager_ReturnValue) == 0x0004B0, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_GetSkillDataTable_ReturnValue) == 0x0004B8, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_GetSkillDataTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_IsValid_ReturnValue) == 0x0004C0, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_GetDataTableRowNames_OutRowNames) == 0x0004C8, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_Array_Get_Item_1) == 0x0004D8, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_Array_Length_ReturnValue_1) == 0x0004E0, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_GetDataTableRowFromName_OutRow) == 0x0004E8, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000668, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_Less_IntInt_ReturnValue_1) == 0x000669, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_Skill_List_Setting, CallFunc_Array_Add_ReturnValue) == 0x00066C, "Member 'WBP_SkillListBoard_C_Skill_List_Setting::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WBP_SkillListBoard.WBP_SkillListBoard_C.PassiveSkillListSetting
// 0x0310 (0x0310 - 0x0000)
struct WBP_SkillListBoard_C_PassiveSkillListSetting final
{
public:
	struct FSBSkillDataMasterData                 Master;                                            // 0x0000(0x0058)(Edit, BlueprintVisible)
	int32                                         Cnt_ClassSkill;                                    // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7651[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBPlayerPassiveSkillData>      TmpSKillData;                                      // 0x0060(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7652[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FSBSkillDataMasterData& SkillId)> K2Node_CreateDelegate_OutputDelegate;              // 0x0084(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FSBSkillDataMasterData& SkillId)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7653[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_SkillListItem_C*                   CallFunc_Create_ReturnValue;                       // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_SkillListItem_C*                   CallFunc_Create_ReturnValue_1;                     // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7654[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillAbilityType                           Temp_byte_Variable;                                // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_Get_Now_Select_Class_Output;              // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x00D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x00D7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBPlayerPassiveSkillData              CallFunc_Array_Get_Item;                           // 0x00D8(0x00B8)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableConditionSkill_Enable;            // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0195(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7655[0x2];                                     // 0x0196(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSkillMasteryParam_IsExists;            // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7656[0x3];                                     // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillMasteryParam                   CallFunc_GetSkillMasteryParam_ReturnValue;         // 0x01A4(0x0008)(NoDestructor)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7657[0x3];                                     // 0x01AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x01B0(0x0058)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7658[0x1];                                     // 0x020B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7659[0x2];                                     // 0x0212(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             CallFunc_GetPassiveSkillDataTable_ReturnValue;     // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_765A[0x7];                                     // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0230(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_765B[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPassiveSkillData              CallFunc_GetDataTableRowFromName_OutRow;           // 0x0250(0x00B8)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0309(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_765C[0x2];                                     // 0x030A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillListBoard_C_PassiveSkillListSetting) == 0x000008, "Wrong alignment on WBP_SkillListBoard_C_PassiveSkillListSetting");
static_assert(sizeof(WBP_SkillListBoard_C_PassiveSkillListSetting) == 0x000310, "Wrong size on WBP_SkillListBoard_C_PassiveSkillListSetting");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, Master) == 0x000000, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::Master' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, Cnt_ClassSkill) == 0x000058, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::Cnt_ClassSkill' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, TmpSKillData) == 0x000060, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::TmpSKillData' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, Temp_int_Array_Index_Variable) == 0x000070, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, Temp_int_Loop_Counter_Variable) == 0x000074, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, Temp_int_Array_Index_Variable_1) == 0x00007C, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, Temp_bool_Variable) == 0x000080, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, K2Node_CreateDelegate_OutputDelegate) == 0x000084, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, K2Node_CreateDelegate_OutputDelegate_1) == 0x000094, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_Create_ReturnValue) == 0x0000A8, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_AddChild_ReturnValue) == 0x0000B0, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_Create_ReturnValue_1) == 0x0000B8, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, Temp_bool_Variable_1) == 0x0000C0, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_AddChild_ReturnValue_1) == 0x0000C8, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, Temp_byte_Variable) == 0x0000D0, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_Get_Now_Select_Class_Output) == 0x0000D1, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_Get_Now_Select_Class_Output' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000D2, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_Not_PreBool_ReturnValue) == 0x0000D3, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000D4, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000D5, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, Temp_bool_Variable_2) == 0x0000D6, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, Temp_bool_Variable_3) == 0x0000D7, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_Array_Length_ReturnValue) == 0x000190, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_IsEnableConditionSkill_Enable) == 0x000194, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_IsEnableConditionSkill_Enable' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_GetMasterDataManager_IsValid) == 0x000195, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_GetMasterDataManager_ReturnValue) == 0x000198, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_GetSkillMasteryParam_IsExists) == 0x0001A0, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_GetSkillMasteryParam_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_GetSkillMasteryParam_ReturnValue) == 0x0001A4, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_GetSkillMasteryParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x0001AC, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x0001B0, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_BooleanAND_ReturnValue) == 0x000208, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_BooleanAND_ReturnValue_1) == 0x000209, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, Temp_bool_Variable_4) == 0x00020A, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, Temp_int_Loop_Counter_Variable_1) == 0x00020C, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, K2Node_Select_Default) == 0x000210, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_Less_IntInt_ReturnValue) == 0x000211, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_Add_IntInt_ReturnValue_1) == 0x000214, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_GetPlayerManager_ReturnValue) == 0x000218, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_GetPassiveSkillDataTable_ReturnValue) == 0x000220, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_GetPassiveSkillDataTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_IsValid_ReturnValue) == 0x000228, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000230, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_Array_Get_Item_1) == 0x000240, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_Array_Length_ReturnValue_1) == 0x000248, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_GetDataTableRowFromName_OutRow) == 0x000250, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000308, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_Less_IntInt_ReturnValue_1) == 0x000309, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillListBoard_C_PassiveSkillListSetting, CallFunc_Array_Add_ReturnValue) == 0x00030C, "Member 'WBP_SkillListBoard_C_PassiveSkillListSetting::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}

