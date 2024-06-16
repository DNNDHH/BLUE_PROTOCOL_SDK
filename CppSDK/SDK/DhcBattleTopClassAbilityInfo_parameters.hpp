#pragma once

 

// Package: DhcBattleTopClassAbilityInfo

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C.OnClassAbilityIconClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct DhcBattleTopClassAbilityInfo_C_OnClassAbilityIconClicked__DelegateSignature final
{
public:
	int32                                         InSkillSlotId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DhcBattleTopClassAbilityInfo_C_OnClassAbilityIconClicked__DelegateSignature) == 0x000004, "Wrong alignment on DhcBattleTopClassAbilityInfo_C_OnClassAbilityIconClicked__DelegateSignature");
static_assert(sizeof(DhcBattleTopClassAbilityInfo_C_OnClassAbilityIconClicked__DelegateSignature) == 0x000008, "Wrong size on DhcBattleTopClassAbilityInfo_C_OnClassAbilityIconClicked__DelegateSignature");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_OnClassAbilityIconClicked__DelegateSignature, InSkillSlotId) == 0x000000, "Member 'DhcBattleTopClassAbilityInfo_C_OnClassAbilityIconClicked__DelegateSignature::InSkillSlotId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_OnClassAbilityIconClicked__DelegateSignature, InSkillId) == 0x000004, "Member 'DhcBattleTopClassAbilityInfo_C_OnClassAbilityIconClicked__DelegateSignature::InSkillId' has a wrong offset!");

// Function DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C.ExecuteUbergraph_DhcBattleTopClassAbilityInfo
// 0x0030 (0x0030 - 0x0000)
struct DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C* CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6325[0x1];                                     // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C*> K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo) == 0x000008, "Wrong alignment on DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo");
static_assert(sizeof(DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo) == 0x000030, "Wrong size on DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo, EntryPoint) == 0x000000, "Member 'DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo, Temp_int_Array_Index_Variable) == 0x000008, "Member 'DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo, CallFunc_Array_Get_Item) == 0x000010, "Member 'DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo, CallFunc_IsValid_ReturnValue) == 0x00001D, "Member 'DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo, K2Node_Event_IsDesignTime) == 0x00001E, "Member 'DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo, K2Node_MakeArray_Array) == 0x000020, "Member 'DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo::K2Node_MakeArray_Array' has a wrong offset!");

// Function DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct DhcBattleTopClassAbilityInfo_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopClassAbilityInfo_C_PreConstruct) == 0x000001, "Wrong alignment on DhcBattleTopClassAbilityInfo_C_PreConstruct");
static_assert(sizeof(DhcBattleTopClassAbilityInfo_C_PreConstruct) == 0x000001, "Wrong size on DhcBattleTopClassAbilityInfo_C_PreConstruct");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'DhcBattleTopClassAbilityInfo_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C.Setup
// 0x0220 (0x0220 - 0x0000)
struct DhcBattleTopClassAbilityInfo_C_Setup final
{
public:
	TArray<struct FSBDhcBattlePlayerEquipArtsInfo> InEquipArtsInfo;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBClassType                                  InClassType;                                       // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6326[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InClassLevel;                                      // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBSkillDataMasterData                 LocalSkillDataMasterData;                          // 0x0018(0x0058)(Edit, BlueprintVisible)
	int32                                         LocalCommonAbilitySlotStartId;                     // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSkillSlotMax;                                 // 0x0074(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSkillSlotId;                                  // 0x0078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalClassSharedAbilityUsableSlotNum;              // 0x007C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C* LocalIconBtn;                                      // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSkillLevel;                                   // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6327[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   LocalMasterDataManager;                            // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSkillIconCnt;                                 // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSkillId;                                      // 0x009C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalClassAbilityIconMaxNum;                       // 0x00A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalClassLevel;                                   // 0x00A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  LocalClassType;                                    // 0x00A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6328[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBDhcBattlePlayerEquipArtsInfo> LocalInfo;                                         // 0x00B0(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6329[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_632A[0x2];                                     // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindSkillDataMaster_bIsValid;             // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_632B[0x6];                                     // 0x0102(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataMaster_SkillDataMaster;      // 0x0108(0x0058)()
	bool                                          CallFunc_GetSkillLevelFromClassLevel_bIsValid;     // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_632C[0x3];                                     // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSkillLevelFromClassLevel_OutSkillLevel; // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_632D[0x2];                                     // 0x016A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_632E[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C* CallFunc_Array_Get_Item;                           // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_632F[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x018B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6330[0x1];                                     // 0x0193(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x019A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6331[0x1];                                     // 0x019B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6332[0x3];                                     // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x01AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x01AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6333[0x1];                                     // 0x01AF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6334[0x3];                                     // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDhcBattlePlayerEquipArtsInfo        CallFunc_Array_Get_Item_1;                         // 0x01B8(0x000C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6335[0x2];                                     // 0x01CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetClassSharedAbilitySlotUsableLevel_ReturnValue; // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassSharedAbilitySlotUsableLevel_ReturnValue_1; // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_6;                // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_7;                // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6336[0x2];                                     // 0x01DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetClassSharedAbilityUsableSlotNum_ReturnValue; // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x01E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6337[0x5];                                     // 0x01E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_2;                         // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_8;                // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6338[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C* CallFunc_Array_Get_Item_3;                         // 0x0200(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x020C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6339[0x3];                                     // 0x020D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_9;                // 0x0214(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_633A[0x3];                                     // 0x0215(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x021C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopClassAbilityInfo_C_Setup) == 0x000008, "Wrong alignment on DhcBattleTopClassAbilityInfo_C_Setup");
static_assert(sizeof(DhcBattleTopClassAbilityInfo_C_Setup) == 0x000220, "Wrong size on DhcBattleTopClassAbilityInfo_C_Setup");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, InEquipArtsInfo) == 0x000000, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::InEquipArtsInfo' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, InClassType) == 0x000010, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::InClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, InClassLevel) == 0x000014, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::InClassLevel' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, LocalSkillDataMasterData) == 0x000018, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::LocalSkillDataMasterData' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, LocalCommonAbilitySlotStartId) == 0x000070, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::LocalCommonAbilitySlotStartId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, LocalSkillSlotMax) == 0x000074, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::LocalSkillSlotMax' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, LocalSkillSlotId) == 0x000078, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::LocalSkillSlotId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, LocalClassSharedAbilityUsableSlotNum) == 0x00007C, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::LocalClassSharedAbilityUsableSlotNum' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, LocalIconBtn) == 0x000080, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::LocalIconBtn' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, LocalSkillLevel) == 0x000088, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::LocalSkillLevel' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, LocalMasterDataManager) == 0x000090, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::LocalMasterDataManager' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, LocalSkillIconCnt) == 0x000098, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::LocalSkillIconCnt' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, LocalSkillId) == 0x00009C, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::LocalSkillId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, LocalClassAbilityIconMaxNum) == 0x0000A0, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::LocalClassAbilityIconMaxNum' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, LocalClassLevel) == 0x0000A4, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::LocalClassLevel' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, LocalClassType) == 0x0000A8, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::LocalClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, LocalInfo) == 0x0000B0, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::LocalInfo' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, Temp_int_Loop_Counter_Variable) == 0x0000C0, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Add_IntInt_ReturnValue) == 0x0000C4, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, Temp_int_Array_Index_Variable) == 0x0000C8, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000CC, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0000D0, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, Temp_int_Array_Index_Variable_1) == 0x0000D4, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, Temp_int_Loop_Counter_Variable_1) == 0x0000D8, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000DC, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, Temp_int_Array_Index_Variable_2) == 0x0000E0, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_MakeLiteralInt_ReturnValue) == 0x0000E4, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, Temp_bool_True_if_break_was_hit_Variable) == 0x0000E8, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Not_PreBool_ReturnValue) == 0x0000E9, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, Temp_int_Loop_Counter_Variable_2) == 0x0000EC, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000F0, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, Temp_int_Array_Index_Variable_3) == 0x0000F4, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, Temp_int_Loop_Counter_Variable_3) == 0x0000F8, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000FC, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, Temp_bool_Variable) == 0x000100, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_FindSkillDataMaster_bIsValid) == 0x000101, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_FindSkillDataMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_FindSkillDataMaster_SkillDataMaster) == 0x000108, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_FindSkillDataMaster_SkillDataMaster' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_GetSkillLevelFromClassLevel_bIsValid) == 0x000160, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_GetSkillLevelFromClassLevel_bIsValid' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_GetSkillLevelFromClassLevel_OutSkillLevel) == 0x000164, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_GetSkillLevelFromClassLevel_OutSkillLevel' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000168, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Greater_IntInt_ReturnValue) == 0x000169, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, Temp_int_Variable) == 0x00016C, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Add_IntInt_ReturnValue_4) == 0x000170, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Array_Get_Item) == 0x000178, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000180, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Array_Length_ReturnValue) == 0x000184, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Conv_IntToByte_ReturnValue) == 0x000188, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Less_IntInt_ReturnValue) == 0x000189, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00018A, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_BooleanAND_ReturnValue) == 0x00018B, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x00018C, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Less_IntInt_ReturnValue_1) == 0x000190, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Less_IntInt_ReturnValue_2) == 0x000191, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Less_IntInt_ReturnValue_3) == 0x000192, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, Temp_int_Variable_1) == 0x000194, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000198, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_GetValidValue_ReturnValue) == 0x000199, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, K2Node_SwitchEnum_CmpSuccess) == 0x00019A, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Add_IntInt_ReturnValue_5) == 0x00019C, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0001A0, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Array_Length_ReturnValue_1) == 0x0001A4, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, K2Node_Select_Default) == 0x0001A8, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Less_IntInt_ReturnValue_4) == 0x0001AC, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x0001AD, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_BooleanAND_ReturnValue_1) == 0x0001AE, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Add_IntInt_ReturnValue_6) == 0x0001B0, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_MakeLiteralBool_ReturnValue) == 0x0001B4, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Array_Get_Item_1) == 0x0001B8, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Array_Length_ReturnValue_2) == 0x0001C4, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Less_IntInt_ReturnValue_5) == 0x0001C8, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, K2Node_SwitchInteger_CmpSuccess) == 0x0001C9, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_GetClassSharedAbilitySlotUsableLevel_ReturnValue) == 0x0001CC, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_GetClassSharedAbilitySlotUsableLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_GetClassSharedAbilitySlotUsableLevel_ReturnValue_1) == 0x0001D0, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_GetClassSharedAbilitySlotUsableLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, Temp_int_Variable_2) == 0x0001D4, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Less_IntInt_ReturnValue_6) == 0x0001D8, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Less_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Less_IntInt_ReturnValue_7) == 0x0001D9, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Less_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_GetClassSharedAbilityUsableSlotNum_ReturnValue) == 0x0001DC, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_GetClassSharedAbilityUsableSlotNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x0001E0, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_IsValid_ReturnValue_2) == 0x0001E1, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_GetMasterDataManager_IsValid) == 0x0001E2, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_GetMasterDataManager_ReturnValue) == 0x0001E8, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Array_Get_Item_2) == 0x0001F0, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Array_Length_ReturnValue_3) == 0x0001F4, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Less_IntInt_ReturnValue_8) == 0x0001F8, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Less_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Array_Get_Item_3) == 0x000200, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Array_Length_ReturnValue_4) == 0x000208, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_IsValid_ReturnValue_3) == 0x00020C, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Array_Length_ReturnValue_5) == 0x000210, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Less_IntInt_ReturnValue_9) == 0x000214, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Less_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Array_Length_ReturnValue_6) == 0x000218, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassAbilityInfo_C_Setup, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00021C, "Member 'DhcBattleTopClassAbilityInfo_C_Setup::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");

}

