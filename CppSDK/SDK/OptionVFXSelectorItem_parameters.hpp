#pragma once

 

// Package: OptionVFXSelectorItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct OptionVFXSelectorItem_C_BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionVFXSelectorItem_C_BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on OptionVFXSelectorItem_C_BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(OptionVFXSelectorItem_C_BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on OptionVFXSelectorItem_C_BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(OptionVFXSelectorItem_C_BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'OptionVFXSelectorItem_C_BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.OnChange
// 0x0003 (0x0003 - 0x0000)
struct OptionVFXSelectorItem_C_OnChange final
{
public:
	ESBBattleEffectVisibleCategory                Category;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBBattleEffectVisibleType                    Type;                                              // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Visible;                                           // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionVFXSelectorItem_C_OnChange) == 0x000001, "Wrong alignment on OptionVFXSelectorItem_C_OnChange");
static_assert(sizeof(OptionVFXSelectorItem_C_OnChange) == 0x000003, "Wrong size on OptionVFXSelectorItem_C_OnChange");
static_assert(offsetof(OptionVFXSelectorItem_C_OnChange, Category) == 0x000000, "Member 'OptionVFXSelectorItem_C_OnChange::Category' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_OnChange, Type) == 0x000001, "Member 'OptionVFXSelectorItem_C_OnChange::Type' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_OnChange, Visible) == 0x000002, "Member 'OptionVFXSelectorItem_C_OnChange::Visible' has a wrong offset!");

// Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.OnCustomMode Change
// 0x0001 (0x0001 - 0x0000)
struct OptionVFXSelectorItem_C_OnCustomMode_Change final
{
public:
	bool                                          bCustom;                                           // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionVFXSelectorItem_C_OnCustomMode_Change) == 0x000001, "Wrong alignment on OptionVFXSelectorItem_C_OnCustomMode_Change");
static_assert(sizeof(OptionVFXSelectorItem_C_OnCustomMode_Change) == 0x000001, "Wrong size on OptionVFXSelectorItem_C_OnCustomMode_Change");
static_assert(offsetof(OptionVFXSelectorItem_C_OnCustomMode_Change, bCustom) == 0x000000, "Member 'OptionVFXSelectorItem_C_OnCustomMode_Change::bCustom' has a wrong offset!");

// Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct OptionVFXSelectorItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionVFXSelectorItem_C_PreConstruct) == 0x000001, "Wrong alignment on OptionVFXSelectorItem_C_PreConstruct");
static_assert(sizeof(OptionVFXSelectorItem_C_PreConstruct) == 0x000001, "Wrong size on OptionVFXSelectorItem_C_PreConstruct");
static_assert(offsetof(OptionVFXSelectorItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'OptionVFXSelectorItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.ExecuteUbergraph_OptionVFXSelectorItem
// 0x0100 (0x0100 - 0x0000)
struct OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_624D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(bool bCustom)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBBattleEffectVisibleCategory                K2Node_CustomEvent_Category;                       // 0x0029(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBBattleEffectVisibleType                    K2Node_CustomEvent_Type;                           // 0x002A(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Visible;                        // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_624E[0x1];                                     // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDebug_ReturnValue;                      // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_624F[0x1];                                     // 0x003B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6250[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bCustom;                        // 0x004D(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x004F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6251[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetVFXCustomSetting_ReturnValue;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6252[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_2;                           // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetVFXVisible_ReturnValue;                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6253[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B8(0x0018)()
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6254[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetVFXVisible_ReturnValue_1;              // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6255[0x2];                                     // 0x00E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBBattleEffectVisibleCategory Category, ESBBattleEffectVisibleType Type, bool Visible)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00E4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetVFXVisible_ReturnValue_2;              // 0x00F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00F6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00F7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem) == 0x000008, "Wrong alignment on OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem");
static_assert(sizeof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem) == 0x000100, "Wrong size on OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, EntryPoint) == 0x000000, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, Temp_string_Variable) == 0x000008, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, K2Node_ComponentBoundEvent_bIsChecked) == 0x000028, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, K2Node_CustomEvent_Category) == 0x000029, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::K2Node_CustomEvent_Category' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, K2Node_CustomEvent_Type) == 0x00002A, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, K2Node_CustomEvent_Visible) == 0x00002B, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::K2Node_CustomEvent_Visible' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00002C, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00002D, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, Temp_bool_Variable) == 0x00002E, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, Temp_int_Variable) == 0x000030, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000034, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, Temp_bool_Variable_1) == 0x000035, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_BooleanAND_ReturnValue) == 0x000036, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000037, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000038, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, Temp_byte_Variable) == 0x000039, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_IsDebug_ReturnValue) == 0x00003A, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_IsDebug_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00003C, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, Temp_byte_Variable_1) == 0x000044, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, K2Node_Select_Default) == 0x000048, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, Temp_bool_Variable_2) == 0x00004C, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, K2Node_CustomEvent_bCustom) == 0x00004D, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::K2Node_CustomEvent_bCustom' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, K2Node_Select_Default_1) == 0x00004E, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x00004F, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, K2Node_Event_IsDesignTime) == 0x000050, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_GetConfigSaveManager_IsValid) == 0x000051, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000058, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000060, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_Add_IntInt_ReturnValue_1) == 0x000064, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_GetVFXCustomSetting_ReturnValue) == 0x000068, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_GetVFXCustomSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_Conv_IntToString_ReturnValue) == 0x000070, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, K2Node_Select_Default_2) == 0x000080, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_GetTextFromAsset_ReturnValue) == 0x000090, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_GetVFXVisible_ReturnValue) == 0x0000A0, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_GetVFXVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_Concat_StrStr_ReturnValue) == 0x0000A8, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B8, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_GetConfigSaveManager_IsValid_1) == 0x0000D0, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x0000D8, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_GetVFXVisible_ReturnValue_1) == 0x0000E0, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_GetVFXVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x0000E1, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000E4, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0000F4, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_GetVFXVisible_ReturnValue_2) == 0x0000F5, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_GetVFXVisible_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_BooleanAND_ReturnValue_1) == 0x0000F6, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_BooleanOR_ReturnValue) == 0x0000F7, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem, CallFunc_BooleanAND_ReturnValue_2) == 0x0000F8, "Member 'OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

// Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.UpdateVisible__DelegateSignature
// 0x0003 (0x0003 - 0x0000)
struct OptionVFXSelectorItem_C_UpdateVisible__DelegateSignature final
{
public:
	ESBBattleEffectVisibleCategory                Category;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBBattleEffectVisibleType                    Type;                                              // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Vidsible;                                          // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionVFXSelectorItem_C_UpdateVisible__DelegateSignature) == 0x000001, "Wrong alignment on OptionVFXSelectorItem_C_UpdateVisible__DelegateSignature");
static_assert(sizeof(OptionVFXSelectorItem_C_UpdateVisible__DelegateSignature) == 0x000003, "Wrong size on OptionVFXSelectorItem_C_UpdateVisible__DelegateSignature");
static_assert(offsetof(OptionVFXSelectorItem_C_UpdateVisible__DelegateSignature, Category) == 0x000000, "Member 'OptionVFXSelectorItem_C_UpdateVisible__DelegateSignature::Category' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_UpdateVisible__DelegateSignature, Type) == 0x000001, "Member 'OptionVFXSelectorItem_C_UpdateVisible__DelegateSignature::Type' has a wrong offset!");
static_assert(offsetof(OptionVFXSelectorItem_C_UpdateVisible__DelegateSignature, Vidsible) == 0x000002, "Member 'OptionVFXSelectorItem_C_UpdateVisible__DelegateSignature::Vidsible' has a wrong offset!");

}

