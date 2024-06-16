#pragma once

 

// Package: ClassAbilityInfoForBattleCordeEdit

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.OnClassAbilityIconClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ClassAbilityInfoForBattleCordeEdit_C_OnClassAbilityIconClicked__DelegateSignature final
{
public:
	int32                                         InSkillSlotId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ClassAbilityInfoForBattleCordeEdit_C_OnClassAbilityIconClicked__DelegateSignature) == 0x000004, "Wrong alignment on ClassAbilityInfoForBattleCordeEdit_C_OnClassAbilityIconClicked__DelegateSignature");
static_assert(sizeof(ClassAbilityInfoForBattleCordeEdit_C_OnClassAbilityIconClicked__DelegateSignature) == 0x000008, "Wrong size on ClassAbilityInfoForBattleCordeEdit_C_OnClassAbilityIconClicked__DelegateSignature");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_OnClassAbilityIconClicked__DelegateSignature, InSkillSlotId) == 0x000000, "Member 'ClassAbilityInfoForBattleCordeEdit_C_OnClassAbilityIconClicked__DelegateSignature::InSkillSlotId' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_OnClassAbilityIconClicked__DelegateSignature, InSkillId) == 0x000004, "Member 'ClassAbilityInfoForBattleCordeEdit_C_OnClassAbilityIconClicked__DelegateSignature::InSkillId' has a wrong offset!");

// Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.ExecuteUbergraph_ClassAbilityInfoForBattleCordeEdit
// 0x0008 (0x0008 - 0x0000)
struct ClassAbilityInfoForBattleCordeEdit_C_ExecuteUbergraph_ClassAbilityInfoForBattleCordeEdit final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ClassAbilityInfoForBattleCordeEdit_C_ExecuteUbergraph_ClassAbilityInfoForBattleCordeEdit) == 0x000004, "Wrong alignment on ClassAbilityInfoForBattleCordeEdit_C_ExecuteUbergraph_ClassAbilityInfoForBattleCordeEdit");
static_assert(sizeof(ClassAbilityInfoForBattleCordeEdit_C_ExecuteUbergraph_ClassAbilityInfoForBattleCordeEdit) == 0x000008, "Wrong size on ClassAbilityInfoForBattleCordeEdit_C_ExecuteUbergraph_ClassAbilityInfoForBattleCordeEdit");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_ExecuteUbergraph_ClassAbilityInfoForBattleCordeEdit, EntryPoint) == 0x000000, "Member 'ClassAbilityInfoForBattleCordeEdit_C_ExecuteUbergraph_ClassAbilityInfoForBattleCordeEdit::EntryPoint' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_ExecuteUbergraph_ClassAbilityInfoForBattleCordeEdit, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ClassAbilityInfoForBattleCordeEdit_C_ExecuteUbergraph_ClassAbilityInfoForBattleCordeEdit::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ClassAbilityInfoForBattleCordeEdit_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ClassAbilityInfoForBattleCordeEdit_C_PreConstruct) == 0x000001, "Wrong alignment on ClassAbilityInfoForBattleCordeEdit_C_PreConstruct");
static_assert(sizeof(ClassAbilityInfoForBattleCordeEdit_C_PreConstruct) == 0x000001, "Wrong size on ClassAbilityInfoForBattleCordeEdit_C_PreConstruct");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ClassAbilityInfoForBattleCordeEdit_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.Const
// 0x0038 (0x0038 - 0x0000)
struct ClassAbilityInfoForBattleCordeEdit_C_Const final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_206C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C* CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_206D[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_206E[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_206F[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C*> K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(ClassAbilityInfoForBattleCordeEdit_C_Const) == 0x000008, "Wrong alignment on ClassAbilityInfoForBattleCordeEdit_C_Const");
static_assert(sizeof(ClassAbilityInfoForBattleCordeEdit_C_Const) == 0x000038, "Wrong size on ClassAbilityInfoForBattleCordeEdit_C_Const");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Const, Temp_int_Array_Index_Variable) == 0x000000, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Const::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Const, CallFunc_Array_Get_Item) == 0x000008, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Const::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Const, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Const::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Const, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Const::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Const, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Const::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Const, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Const::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Const, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Const::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Const, K2Node_MakeArray_Array) == 0x000028, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Const::K2Node_MakeArray_Array' has a wrong offset!");

// Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.Setup
// 0x01B0 (0x01B0 - 0x0000)
struct ClassAbilityInfoForBattleCordeEdit_C_Setup final
{
public:
	TArray<int32>                                 InClassAbilitySkillIds;                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          InSetupByCurrEquip;                                // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  InClassType;                                       // 0x0011(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2070[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 LocalSkillDataMasterData;                          // 0x0018(0x0058)(Edit, BlueprintVisible)
	int32                                         LocalClassSharedAbilityUsableSlotNum;              // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2071[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C* LocalIconBtn;                                      // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSkillLevel;                                   // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2072[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   LocalMasterDataManager;                            // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSkillIconCnt;                                 // 0x0090(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSkillId;                                      // 0x0094(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalClassAbilityIconMaxNum;                       // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalClassLevel;                                   // 0x009C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  LocalClassType;                                    // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalSetupByCurrEquip;                             // 0x00A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2073[0x2];                                     // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevelFromClassType_ReturnValue;   // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillDataMaster_bIsValid;             // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2074[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataMaster_SkillDataMaster;      // 0x00C8(0x0058)()
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSkillLevelFromClassLevel_bIsValid;     // 0x0122(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2075[0x1];                                     // 0x0123(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSkillLevelFromClassLevel_OutSkillLevel; // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassSharedAbilitySlotUsableLevel_ReturnValue; // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassSharedAbilitySlotUsableLevel_ReturnValue_1; // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2076[0x2];                                     // 0x0132(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetClassSharedAbilityUsableSlotNum_ReturnValue; // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2077[0x2];                                     // 0x013A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEquipedArtsId_ReturnValue;             // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEquipedArtsId_ReturnValue_1;           // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEquipedArtsId_ReturnValue_2;           // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEquipedArtsId_ReturnValue_3;           // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevelFromClassType_ReturnValue_1; // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableConditionSkill_Enable;            // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2078[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0163(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2079[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_207A[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C* CallFunc_Array_Get_Item_1;                         // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x018D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x018E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_207B[0x1];                                     // 0x018F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C* CallFunc_Array_Get_Item_2;                         // 0x0190(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_207C[0x3];                                     // 0x019D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_207D[0x3];                                     // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x01AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ClassAbilityInfoForBattleCordeEdit_C_Setup) == 0x000008, "Wrong alignment on ClassAbilityInfoForBattleCordeEdit_C_Setup");
static_assert(sizeof(ClassAbilityInfoForBattleCordeEdit_C_Setup) == 0x0001B0, "Wrong size on ClassAbilityInfoForBattleCordeEdit_C_Setup");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, InClassAbilitySkillIds) == 0x000000, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::InClassAbilitySkillIds' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, InSetupByCurrEquip) == 0x000010, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::InSetupByCurrEquip' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, InClassType) == 0x000011, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::InClassType' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, LocalSkillDataMasterData) == 0x000018, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::LocalSkillDataMasterData' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, LocalClassSharedAbilityUsableSlotNum) == 0x000070, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::LocalClassSharedAbilityUsableSlotNum' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, LocalIconBtn) == 0x000078, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::LocalIconBtn' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, LocalSkillLevel) == 0x000080, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::LocalSkillLevel' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, LocalMasterDataManager) == 0x000088, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::LocalMasterDataManager' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, LocalSkillIconCnt) == 0x000090, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::LocalSkillIconCnt' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, LocalSkillId) == 0x000094, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::LocalSkillId' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, LocalClassAbilityIconMaxNum) == 0x000098, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::LocalClassAbilityIconMaxNum' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, LocalClassLevel) == 0x00009C, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::LocalClassLevel' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, LocalClassType) == 0x0000A0, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::LocalClassType' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, LocalSetupByCurrEquip) == 0x0000A1, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::LocalSetupByCurrEquip' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, Temp_int_Array_Index_Variable) == 0x0000A4, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, Temp_int_Loop_Counter_Variable) == 0x0000A8, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Add_IntInt_ReturnValue) == 0x0000AC, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, Temp_int_Array_Index_Variable_1) == 0x0000B0, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, Temp_int_Loop_Counter_Variable_1) == 0x0000B4, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000B8, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, Temp_int_Array_Index_Variable_2) == 0x0000BC, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_GetClassLevelFromClassType_ReturnValue) == 0x0000C0, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_GetClassLevelFromClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_FindSkillDataMaster_bIsValid) == 0x0000C4, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_FindSkillDataMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_FindSkillDataMaster_SkillDataMaster) == 0x0000C8, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_FindSkillDataMaster_SkillDataMaster' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, Temp_bool_True_if_break_was_hit_Variable) == 0x000120, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Not_PreBool_ReturnValue) == 0x000121, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_GetSkillLevelFromClassLevel_bIsValid) == 0x000122, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_GetSkillLevelFromClassLevel_bIsValid' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_GetSkillLevelFromClassLevel_OutSkillLevel) == 0x000124, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_GetSkillLevelFromClassLevel_OutSkillLevel' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_GetClassSharedAbilitySlotUsableLevel_ReturnValue) == 0x000128, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_GetClassSharedAbilitySlotUsableLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_GetClassSharedAbilitySlotUsableLevel_ReturnValue_1) == 0x00012C, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_GetClassSharedAbilitySlotUsableLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Less_IntInt_ReturnValue) == 0x000130, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Less_IntInt_ReturnValue_1) == 0x000131, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_GetClassSharedAbilityUsableSlotNum_ReturnValue) == 0x000134, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_GetClassSharedAbilityUsableSlotNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000138, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x000139, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Array_Add_ReturnValue) == 0x00013C, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_GetEquipedArtsId_ReturnValue) == 0x000140, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_GetEquipedArtsId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_GetEquipedArtsId_ReturnValue_1) == 0x000144, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_GetEquipedArtsId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_GetEquipedArtsId_ReturnValue_2) == 0x000148, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_GetEquipedArtsId_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_GetEquipedArtsId_ReturnValue_3) == 0x00014C, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_GetEquipedArtsId_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_GetClassLevelFromClassType_ReturnValue_1) == 0x000150, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_GetClassLevelFromClassType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_IsEnableConditionSkill_Enable) == 0x000154, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_IsEnableConditionSkill_Enable' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, Temp_int_Loop_Counter_Variable_2) == 0x000158, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Add_IntInt_ReturnValue_2) == 0x00015C, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Not_PreBool_ReturnValue_1) == 0x000160, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000161, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Greater_IntInt_ReturnValue) == 0x000162, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_GetMasterDataManager_IsValid) == 0x000163, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_GetMasterDataManager_ReturnValue) == 0x000168, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Array_Get_Item) == 0x000170, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Array_Length_ReturnValue) == 0x000174, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Less_IntInt_ReturnValue_2) == 0x000178, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Array_Get_Item_1) == 0x000180, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Array_Length_ReturnValue_1) == 0x000188, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_IsValid_ReturnValue_2) == 0x00018C, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Less_IntInt_ReturnValue_3) == 0x00018D, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_BooleanAND_ReturnValue) == 0x00018E, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Array_Get_Item_2) == 0x000190, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Array_Length_ReturnValue_2) == 0x000198, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_IsValid_ReturnValue_3) == 0x00019C, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Array_Length_ReturnValue_3) == 0x0001A0, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Less_IntInt_ReturnValue_4) == 0x0001A4, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Array_Length_ReturnValue_4) == 0x0001A8, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0001AC, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ClassAbilityInfoForBattleCordeEdit_C_Setup, CallFunc_Less_IntInt_ReturnValue_5) == 0x0001AD, "Member 'ClassAbilityInfoForBattleCordeEdit_C_Setup::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");

}

