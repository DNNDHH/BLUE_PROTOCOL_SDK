#pragma once

 

// Package: OptionVFXVisibleSelector

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "VFXOptionSkipSet_structs.hpp"


namespace SDK::Params
{

// Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.IsSkipTableRegisted
// 0x0038 (0x0038 - 0x0000)
struct OptionVFXVisibleSelector_C_IsSkipTableRegisted final
{
public:
	ESBBattleEffectVisibleCategory                Category;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBBattleEffectVisibleType                    Param_Type;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRegisted;                                        // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DDD[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0010(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVFXOptionSkipSet                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x002C(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionVFXVisibleSelector_C_IsSkipTableRegisted) == 0x000008, "Wrong alignment on OptionVFXVisibleSelector_C_IsSkipTableRegisted");
static_assert(sizeof(OptionVFXVisibleSelector_C_IsSkipTableRegisted) == 0x000038, "Wrong size on OptionVFXVisibleSelector_C_IsSkipTableRegisted");
static_assert(offsetof(OptionVFXVisibleSelector_C_IsSkipTableRegisted, Category) == 0x000000, "Member 'OptionVFXVisibleSelector_C_IsSkipTableRegisted::Category' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_IsSkipTableRegisted, Param_Type) == 0x000001, "Member 'OptionVFXVisibleSelector_C_IsSkipTableRegisted::Param_Type' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_IsSkipTableRegisted, IsRegisted) == 0x000002, "Member 'OptionVFXVisibleSelector_C_IsSkipTableRegisted::IsRegisted' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_IsSkipTableRegisted, Temp_int_Array_Index_Variable) == 0x000004, "Member 'OptionVFXVisibleSelector_C_IsSkipTableRegisted::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_IsSkipTableRegisted, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'OptionVFXVisibleSelector_C_IsSkipTableRegisted::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_IsSkipTableRegisted, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'OptionVFXVisibleSelector_C_IsSkipTableRegisted::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_IsSkipTableRegisted, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000010, "Member 'OptionVFXVisibleSelector_C_IsSkipTableRegisted::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_IsSkipTableRegisted, CallFunc_Array_Get_Item) == 0x000020, "Member 'OptionVFXVisibleSelector_C_IsSkipTableRegisted::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_IsSkipTableRegisted, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'OptionVFXVisibleSelector_C_IsSkipTableRegisted::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_IsSkipTableRegisted, CallFunc_GetDataTableRowFromName_OutRow) == 0x00002C, "Member 'OptionVFXVisibleSelector_C_IsSkipTableRegisted::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_IsSkipTableRegisted, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x00002E, "Member 'OptionVFXVisibleSelector_C_IsSkipTableRegisted::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_IsSkipTableRegisted, CallFunc_Less_IntInt_ReturnValue) == 0x00002F, "Member 'OptionVFXVisibleSelector_C_IsSkipTableRegisted::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_IsSkipTableRegisted, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000030, "Member 'OptionVFXVisibleSelector_C_IsSkipTableRegisted::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_IsSkipTableRegisted, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000031, "Member 'OptionVFXVisibleSelector_C_IsSkipTableRegisted::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_IsSkipTableRegisted, CallFunc_BooleanAND_ReturnValue) == 0x000032, "Member 'OptionVFXVisibleSelector_C_IsSkipTableRegisted::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct OptionVFXVisibleSelector_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionVFXVisibleSelector_C_PreConstruct) == 0x000001, "Wrong alignment on OptionVFXVisibleSelector_C_PreConstruct");
static_assert(sizeof(OptionVFXVisibleSelector_C_PreConstruct) == 0x000001, "Wrong size on OptionVFXVisibleSelector_C_PreConstruct");
static_assert(offsetof(OptionVFXVisibleSelector_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'OptionVFXVisibleSelector_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.UpdateVisible
// 0x0003 (0x0003 - 0x0000)
struct OptionVFXVisibleSelector_C_UpdateVisible final
{
public:
	ESBBattleEffectVisibleCategory                Category;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBBattleEffectVisibleType                    Param_Type;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Vidsible;                                          // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionVFXVisibleSelector_C_UpdateVisible) == 0x000001, "Wrong alignment on OptionVFXVisibleSelector_C_UpdateVisible");
static_assert(sizeof(OptionVFXVisibleSelector_C_UpdateVisible) == 0x000003, "Wrong size on OptionVFXVisibleSelector_C_UpdateVisible");
static_assert(offsetof(OptionVFXVisibleSelector_C_UpdateVisible, Category) == 0x000000, "Member 'OptionVFXVisibleSelector_C_UpdateVisible::Category' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_UpdateVisible, Param_Type) == 0x000001, "Member 'OptionVFXVisibleSelector_C_UpdateVisible::Param_Type' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_UpdateVisible, Vidsible) == 0x000002, "Member 'OptionVFXVisibleSelector_C_UpdateVisible::Vidsible' has a wrong offset!");

// Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.BndEvt__CB_AllVisible_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct OptionVFXVisibleSelector_C_BndEvt__CB_AllVisible_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionVFXVisibleSelector_C_BndEvt__CB_AllVisible_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on OptionVFXVisibleSelector_C_BndEvt__CB_AllVisible_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(OptionVFXVisibleSelector_C_BndEvt__CB_AllVisible_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on OptionVFXVisibleSelector_C_BndEvt__CB_AllVisible_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(OptionVFXVisibleSelector_C_BndEvt__CB_AllVisible_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'OptionVFXVisibleSelector_C_BndEvt__CB_AllVisible_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.BndEvt__CB_CustomSetting_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct OptionVFXVisibleSelector_C_BndEvt__CB_CustomSetting_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionVFXVisibleSelector_C_BndEvt__CB_CustomSetting_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on OptionVFXVisibleSelector_C_BndEvt__CB_CustomSetting_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(OptionVFXVisibleSelector_C_BndEvt__CB_CustomSetting_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on OptionVFXVisibleSelector_C_BndEvt__CB_CustomSetting_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(OptionVFXVisibleSelector_C_BndEvt__CB_CustomSetting_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'OptionVFXVisibleSelector_C_BndEvt__CB_CustomSetting_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.ExecuteUbergraph_OptionVFXVisibleSelector
// 0x00D0 (0x00D0 - 0x0000)
struct OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DDE[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOptionVFXSelectorItem_C*               CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBBattleEffectVisibleCategory Category, ESBBattleEffectVisibleType Type, bool Vidsible)> K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable_2;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DDF[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_1;              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_3;             // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1; // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSkipTableRegisted_IsRegisted;           // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DE0[0x1];                                     // 0x0057(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DE1[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DE2[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBBattleEffectVisibleCategory                K2Node_CustomEvent_Category;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBBattleEffectVisibleType                    K2Node_CustomEvent_Type;                           // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Vidsible;                       // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DE3[0x2];                                     // 0x0076(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DE4[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DE5[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_2;           // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DE6[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_2;       // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyGraphicsVFXSaveData_ReturnValue;  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_SaveGraphicsVFXSaveData_ReturnValue;      // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_3;           // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DE7[0x5];                                     // 0x00BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_3;       // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetVFXCustomSetting_ReturnValue;          // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector) == 0x000008, "Wrong alignment on OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector");
static_assert(sizeof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector) == 0x0000D0, "Wrong size on OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, EntryPoint) == 0x000000, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::EntryPoint' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, Temp_int_Variable) == 0x000008, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, Temp_int_Variable_1) == 0x00000C, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_Conv_IntToByte_ReturnValue) == 0x000010, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_GetValidValue_ReturnValue) == 0x000018, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000019, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, K2Node_SwitchEnum_CmpSuccess) == 0x00001A, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00001B, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00001C, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_Create_ReturnValue) == 0x000020, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, Temp_int_Variable_2) == 0x000038, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, Temp_int_Variable_3) == 0x00003C, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_Conv_IntToByte_ReturnValue_2) == 0x000040, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_Conv_IntToByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_Add_IntInt_ReturnValue_1) == 0x000044, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_GetValidValue_ReturnValue_1) == 0x000048, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_GetValidValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_Conv_IntToByte_ReturnValue_3) == 0x000049, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_Conv_IntToByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1) == 0x00004A, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_IsSkipTableRegisted_IsRegisted) == 0x00004B, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_IsSkipTableRegisted_IsRegisted' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x00004C, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, K2Node_SwitchEnum_CmpSuccess_1) == 0x000050, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, Temp_bool_Variable) == 0x000051, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, Temp_byte_Variable) == 0x000052, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, Temp_byte_Variable_1) == 0x000053, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, Temp_bool_Variable_1) == 0x000054, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, Temp_byte_Variable_2) == 0x000055, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, Temp_byte_Variable_3) == 0x000056, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_PlaySE_ReturnValue_1) == 0x000058, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, K2Node_Event_IsDesignTime) == 0x00005C, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_MakeLiteralInt_ReturnValue) == 0x000060, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000068, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, K2Node_CustomEvent_Category) == 0x000070, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::K2Node_CustomEvent_Category' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, K2Node_CustomEvent_Type) == 0x000071, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, K2Node_CustomEvent_Vidsible) == 0x000072, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::K2Node_CustomEvent_Vidsible' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, K2Node_ComponentBoundEvent_bIsChecked_1) == 0x000073, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::K2Node_ComponentBoundEvent_bIsChecked_1' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, K2Node_ComponentBoundEvent_bIsChecked) == 0x000074, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_GetConfigSaveManager_IsValid) == 0x000075, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000078, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x000080, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_Less_IntInt_ReturnValue_1) == 0x000084, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_GetPlayerId_ReturnValue) == 0x000088, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000098, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x0000A0, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_GetConfigSaveManager_IsValid_2) == 0x0000A8, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_GetConfigSaveManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_GetConfigSaveManager_ReturnValue_2) == 0x0000B0, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_GetConfigSaveManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_IsModifyGraphicsVFXSaveData_ReturnValue) == 0x0000B8, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_IsModifyGraphicsVFXSaveData_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_SaveGraphicsVFXSaveData_ReturnValue) == 0x0000B9, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_SaveGraphicsVFXSaveData_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_GetConfigSaveManager_IsValid_3) == 0x0000BA, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_GetConfigSaveManager_IsValid_3' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_GetConfigSaveManager_ReturnValue_3) == 0x0000C0, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_GetConfigSaveManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_GetVFXCustomSetting_ReturnValue) == 0x0000C8, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_GetVFXCustomSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, K2Node_Select_Default) == 0x0000C9, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, K2Node_Select_Default_1) == 0x0000CA, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector, CallFunc_Not_PreBool_ReturnValue) == 0x0000CB, "Member 'OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

