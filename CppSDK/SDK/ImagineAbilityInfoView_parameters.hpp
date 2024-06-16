#pragma once

 

// Package: ImagineAbilityInfoView

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.ExecuteUbergraph_ImagineAbilityInfoView
// 0x0018 (0x0018 - 0x0000)
struct ImagineAbilityInfoView_C_ExecuteUbergraph_ImagineAbilityInfoView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D0D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineAbilityInfoView_C_ExecuteUbergraph_ImagineAbilityInfoView) == 0x000008, "Wrong alignment on ImagineAbilityInfoView_C_ExecuteUbergraph_ImagineAbilityInfoView");
static_assert(sizeof(ImagineAbilityInfoView_C_ExecuteUbergraph_ImagineAbilityInfoView) == 0x000018, "Wrong size on ImagineAbilityInfoView_C_ExecuteUbergraph_ImagineAbilityInfoView");
static_assert(offsetof(ImagineAbilityInfoView_C_ExecuteUbergraph_ImagineAbilityInfoView, EntryPoint) == 0x000000, "Member 'ImagineAbilityInfoView_C_ExecuteUbergraph_ImagineAbilityInfoView::EntryPoint' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_ExecuteUbergraph_ImagineAbilityInfoView, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ImagineAbilityInfoView_C_ExecuteUbergraph_ImagineAbilityInfoView::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_ExecuteUbergraph_ImagineAbilityInfoView, CallFunc_MakeVector2D_ReturnValue) == 0x000008, "Member 'ImagineAbilityInfoView_C_ExecuteUbergraph_ImagineAbilityInfoView::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_ExecuteUbergraph_ImagineAbilityInfoView, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'ImagineAbilityInfoView_C_ExecuteUbergraph_ImagineAbilityInfoView::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ImagineAbilityInfoView_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineAbilityInfoView_C_PreConstruct) == 0x000001, "Wrong alignment on ImagineAbilityInfoView_C_PreConstruct");
static_assert(sizeof(ImagineAbilityInfoView_C_PreConstruct) == 0x000001, "Wrong size on ImagineAbilityInfoView_C_PreConstruct");
static_assert(offsetof(ImagineAbilityInfoView_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ImagineAbilityInfoView_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.CreateEfficacyInfoItemList
// 0x0038 (0x0038 - 0x0000)
struct ImagineAbilityInfoView_C_CreateEfficacyInfoItemList final
{
public:
	int32                                         LocalLoopId;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D0E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImagineAbilityEfficacyInfoItem_C*      LocalInfoItem;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D0F[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImagineAbilityEfficacyInfoItem_C*      CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D10[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineAbilityInfoView_C_CreateEfficacyInfoItemList) == 0x000008, "Wrong alignment on ImagineAbilityInfoView_C_CreateEfficacyInfoItemList");
static_assert(sizeof(ImagineAbilityInfoView_C_CreateEfficacyInfoItemList) == 0x000038, "Wrong size on ImagineAbilityInfoView_C_CreateEfficacyInfoItemList");
static_assert(offsetof(ImagineAbilityInfoView_C_CreateEfficacyInfoItemList, LocalLoopId) == 0x000000, "Member 'ImagineAbilityInfoView_C_CreateEfficacyInfoItemList::LocalLoopId' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_CreateEfficacyInfoItemList, LocalInfoItem) == 0x000008, "Member 'ImagineAbilityInfoView_C_CreateEfficacyInfoItemList::LocalInfoItem' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_CreateEfficacyInfoItemList, Temp_int_Variable) == 0x000010, "Member 'ImagineAbilityInfoView_C_CreateEfficacyInfoItemList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_CreateEfficacyInfoItemList, Temp_int_Variable_1) == 0x000014, "Member 'ImagineAbilityInfoView_C_CreateEfficacyInfoItemList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_CreateEfficacyInfoItemList, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'ImagineAbilityInfoView_C_CreateEfficacyInfoItemList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_CreateEfficacyInfoItemList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000019, "Member 'ImagineAbilityInfoView_C_CreateEfficacyInfoItemList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_CreateEfficacyInfoItemList, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'ImagineAbilityInfoView_C_CreateEfficacyInfoItemList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_CreateEfficacyInfoItemList, CallFunc_Create_ReturnValue) == 0x000020, "Member 'ImagineAbilityInfoView_C_CreateEfficacyInfoItemList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_CreateEfficacyInfoItemList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000028, "Member 'ImagineAbilityInfoView_C_CreateEfficacyInfoItemList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_CreateEfficacyInfoItemList, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'ImagineAbilityInfoView_C_CreateEfficacyInfoItemList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_CreateEfficacyInfoItemList, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000030, "Member 'ImagineAbilityInfoView_C_CreateEfficacyInfoItemList::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

// Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.SetupAbilityInfo
// 0x0420 (0x0420 - 0x0000)
struct ImagineAbilityInfoView_C_SetupAbilityInfo final
{
public:
	int32                                         InAbilityEffectId;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D11[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityConfig                       LocalEmptyAbilityConfig;                           // 0x0008(0x0038)(Edit, BlueprintVisible)
	TArray<struct FSBAbilityConfig>               LocalAbilityConfigs;                               // 0x0040(0x0010)(Edit, BlueprintVisible)
	TArray<bool>                                  LocalIsAttributeResist;                            // 0x0050(0x0010)(Edit, BlueprintVisible)
	class UImagineAbilityEfficacyInfoItem_C*      LocalInfoItemLast;                                 // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImagineAbilityEfficacyInfoItem_C*      LocalInfoItem;                                     // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalAbilityPartsDescTextArrayElementCnt;          // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalArrayId;                                      // 0x0074(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   LocalPartsDescText;                                // 0x0078(0x0018)(Edit, BlueprintVisible)
	int32                                         LocalLoopCnt;                                      // 0x0090(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsAbilityEffectMasterDataValid;               // 0x0094(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D12[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 LocalAbilityPartsValueArray;                       // 0x0098(0x0010)(Edit, BlueprintVisible)
	TArray<class FText>                           LocalAbilityPartsDescTextArray;                    // 0x00A8(0x0010)(Edit, BlueprintVisible)
	class FText                                   LocalAbilityDesc;                                  // 0x00B8(0x0018)(Edit, BlueprintVisible)
	int32                                         LocalAbilityEffectId;                              // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable;                                // 0x00E0(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D13[0x6];                                     // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityConfig                       CallFunc_Array_Get_Item;                           // 0x0100(0x0038)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D14[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityConfig                       K2Node_Select_Default;                             // 0x0140(0x0038)()
	bool                                          Temp_bool_Variable_2;                              // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D15[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D16[0x1];                                     // 0x0183(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D17[0x3];                                     // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D18[0x6];                                     // 0x019A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x01A0(0x0018)()
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x01BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D19[0x2];                                     // 0x01BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D1A[0x4];                                     // 0x01D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D1B[0x3];                                     // 0x01F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UImagineAbilityEfficacyInfoItem_C*      K2Node_DynamicCast_AsImagine_Ability_Efficacy_Info_Item; // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D1C[0x2];                                     // 0x0202(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_3;             // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D1D[0x6];                                     // 0x020A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Array_Get_Item_2;                         // 0x0210(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D1E[0x3];                                     // 0x022D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D1F[0x3];                                     // 0x0235(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0240(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D20[0x3];                                     // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0255(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0256(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindAbilityEffectMaster_bIsValid;         // 0x0257(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBAbilityEffectMasterData             CallFunc_FindAbilityEffectMaster_AbilityEffectMaster; // 0x0258(0x0024)(NoDestructor)
	int32                                         K2Node_Select_Default_2;                           // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_3;                           // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D21[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x0290(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x02A0(0x0018)()
	class FText                                   K2Node_Select_Default_4;                           // 0x02B8(0x0018)()
	bool                                          CallFunc_FindAbilityMaster_bIsValid;               // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D22[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   CallFunc_FindAbilityMaster_AbilityMaster;          // 0x02D8(0x0048)()
	class FString                                 CallFunc_GetPerkName_ReturnValue;                  // 0x0320(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid; // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D23[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityConfig                       CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig; // 0x0338(0x0038)()
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D24[0x4];                                     // 0x037C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0380(0x0018)()
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x039C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D25[0x3];                                     // 0x039D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPerkName_ReturnValue_1;                // 0x03A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x03B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid_1; // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D26[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityConfig                       CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig_1; // 0x03C0(0x0038)()
	class FText                                   CallFunc_Conv_NameToText_ReturnValue_1;            // 0x03F8(0x0018)()
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x0410(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_5;                  // 0x0414(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineAbilityInfoView_C_SetupAbilityInfo) == 0x000008, "Wrong alignment on ImagineAbilityInfoView_C_SetupAbilityInfo");
static_assert(sizeof(ImagineAbilityInfoView_C_SetupAbilityInfo) == 0x000420, "Wrong size on ImagineAbilityInfoView_C_SetupAbilityInfo");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, InAbilityEffectId) == 0x000000, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::InAbilityEffectId' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, LocalEmptyAbilityConfig) == 0x000008, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::LocalEmptyAbilityConfig' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, LocalAbilityConfigs) == 0x000040, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::LocalAbilityConfigs' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, LocalIsAttributeResist) == 0x000050, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::LocalIsAttributeResist' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, LocalInfoItemLast) == 0x000060, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::LocalInfoItemLast' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, LocalInfoItem) == 0x000068, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::LocalInfoItem' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, LocalAbilityPartsDescTextArrayElementCnt) == 0x000070, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::LocalAbilityPartsDescTextArrayElementCnt' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, LocalArrayId) == 0x000074, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::LocalArrayId' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, LocalPartsDescText) == 0x000078, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::LocalPartsDescText' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, LocalLoopCnt) == 0x000090, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::LocalLoopCnt' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, LocalIsAbilityEffectMasterDataValid) == 0x000094, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::LocalIsAbilityEffectMasterDataValid' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, LocalAbilityPartsValueArray) == 0x000098, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::LocalAbilityPartsValueArray' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, LocalAbilityPartsDescTextArray) == 0x0000A8, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::LocalAbilityPartsDescTextArray' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, LocalAbilityDesc) == 0x0000B8, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::LocalAbilityDesc' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, LocalAbilityEffectId) == 0x0000D0, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::LocalAbilityEffectId' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, Temp_int_Loop_Counter_Variable) == 0x0000D4, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Add_IntInt_ReturnValue) == 0x0000D8, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, Temp_int_Array_Index_Variable) == 0x0000DC, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, Temp_text_Variable) == 0x0000E0, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, Temp_bool_Variable) == 0x0000F8, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, Temp_bool_Variable_1) == 0x0000F9, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Array_Get_Item) == 0x000100, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Array_Length_ReturnValue) == 0x000138, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Less_IntInt_ReturnValue) == 0x00013C, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, K2Node_Select_Default) == 0x000140, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, Temp_bool_Variable_2) == 0x000178, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, Temp_int_Variable) == 0x00017C, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_IsValid_ReturnValue) == 0x000180, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x000181, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000182, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Array_Length_ReturnValue_1) == 0x000184, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, Temp_int_Variable_1) == 0x000188, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, Temp_int_Variable_2) == 0x00018C, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000190, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Add_IntInt_ReturnValue_1) == 0x000194, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_IsValid_ReturnValue_1) == 0x000198, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_IsValid_ReturnValue_2) == 0x000199, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_MakeLiteralText_ReturnValue) == 0x0001A0, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Array_Get_Item_1) == 0x0001B8, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_NotEqual_TextText_ReturnValue) == 0x0001BC, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, Temp_bool_Variable_3) == 0x0001BD, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Conv_IntToString_ReturnValue) == 0x0001C0, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Add_IntInt_ReturnValue_2) == 0x0001D0, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Concat_StrStr_ReturnValue) == 0x0001D8, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_GetChildAt_ReturnValue) == 0x0001E8, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, Temp_int_Variable_3) == 0x0001F0, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_IsValid_ReturnValue_3) == 0x0001F4, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, K2Node_DynamicCast_AsImagine_Ability_Efficacy_Info_Item) == 0x0001F8, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::K2Node_DynamicCast_AsImagine_Ability_Efficacy_Info_Item' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, K2Node_DynamicCast_bSuccess) == 0x000200, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_IsValid_ReturnValue_4) == 0x000201, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Array_Length_ReturnValue_2) == 0x000204, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, Temp_bool_Variable_4) == 0x000208, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Greater_IntInt_ReturnValue_3) == 0x000209, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Greater_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Array_Get_Item_2) == 0x000210, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Array_Length_ReturnValue_3) == 0x000228, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Less_IntInt_ReturnValue_1) == 0x00022C, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Array_Length_ReturnValue_4) == 0x000230, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Less_IntInt_ReturnValue_2) == 0x000234, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, K2Node_Select_Default_1) == 0x000238, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, Temp_int_Variable_4) == 0x00023C, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_GetChildAt_ReturnValue_1) == 0x000240, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_GetChildrenCount_ReturnValue) == 0x000248, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_IsValid_ReturnValue_5) == 0x00024C, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Subtract_IntInt_ReturnValue) == 0x000250, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000254, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_IsValid_ReturnValue_6) == 0x000255, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_IsValid_ReturnValue_7) == 0x000256, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_FindAbilityEffectMaster_bIsValid) == 0x000257, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_FindAbilityEffectMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_FindAbilityEffectMaster_AbilityEffectMaster) == 0x000258, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_FindAbilityEffectMaster_AbilityEffectMaster' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, K2Node_Select_Default_2) == 0x00027C, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, K2Node_Select_Default_3) == 0x000280, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Array_Add_ReturnValue) == 0x000284, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Array_Add_ReturnValue_1) == 0x000288, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_GetWeaponPerkText_ReturnValue) == 0x000290, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x0002A0, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, K2Node_Select_Default_4) == 0x0002B8, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_FindAbilityMaster_bIsValid) == 0x0002D0, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_FindAbilityMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_FindAbilityMaster_AbilityMaster) == 0x0002D8, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_FindAbilityMaster_AbilityMaster' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_GetPerkName_ReturnValue) == 0x000320, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_GetPerkName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid) == 0x000330, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig) == 0x000338, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Conv_StringToName_ReturnValue) == 0x000370, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Array_Add_ReturnValue_2) == 0x000378, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Conv_NameToText_ReturnValue) == 0x000380, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Array_Add_ReturnValue_3) == 0x000398, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_NotEqual_NameName_ReturnValue) == 0x00039C, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_GetPerkName_ReturnValue_1) == 0x0003A0, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_GetPerkName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Conv_StringToName_ReturnValue_1) == 0x0003B0, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid_1) == 0x0003B8, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig_1) == 0x0003C0, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Conv_NameToText_ReturnValue_1) == 0x0003F8, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Conv_NameToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Array_Add_ReturnValue_4) == 0x000410, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_Array_Add_ReturnValue_5) == 0x000414, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_Array_Add_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_SetupAbilityInfo, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x000418, "Member 'ImagineAbilityInfoView_C_SetupAbilityInfo::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");

// Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.GetAbilityPartsValueText
// 0x00E8 (0x00E8 - 0x0000)
struct ImagineAbilityInfoView_C_GetAbilityPartsValueText final
{
public:
	int32                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D27[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   OutText;                                           // 0x0008(0x0018)(Parm, OutParm)
	int32                                         LocalValue;                                        // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D28[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0028(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D29[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D2A[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D2B[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B8(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x00D0(0x0018)()
};
static_assert(alignof(ImagineAbilityInfoView_C_GetAbilityPartsValueText) == 0x000008, "Wrong alignment on ImagineAbilityInfoView_C_GetAbilityPartsValueText");
static_assert(sizeof(ImagineAbilityInfoView_C_GetAbilityPartsValueText) == 0x0000E8, "Wrong size on ImagineAbilityInfoView_C_GetAbilityPartsValueText");
static_assert(offsetof(ImagineAbilityInfoView_C_GetAbilityPartsValueText, InValue) == 0x000000, "Member 'ImagineAbilityInfoView_C_GetAbilityPartsValueText::InValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_GetAbilityPartsValueText, OutText) == 0x000008, "Member 'ImagineAbilityInfoView_C_GetAbilityPartsValueText::OutText' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_GetAbilityPartsValueText, LocalValue) == 0x000020, "Member 'ImagineAbilityInfoView_C_GetAbilityPartsValueText::LocalValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_GetAbilityPartsValueText, Temp_bool_Variable) == 0x000024, "Member 'ImagineAbilityInfoView_C_GetAbilityPartsValueText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_GetAbilityPartsValueText, Temp_text_Variable) == 0x000028, "Member 'ImagineAbilityInfoView_C_GetAbilityPartsValueText::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_GetAbilityPartsValueText, Temp_bool_Variable_1) == 0x000040, "Member 'ImagineAbilityInfoView_C_GetAbilityPartsValueText::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_GetAbilityPartsValueText, Temp_string_Variable) == 0x000048, "Member 'ImagineAbilityInfoView_C_GetAbilityPartsValueText::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_GetAbilityPartsValueText, Temp_string_Variable_1) == 0x000058, "Member 'ImagineAbilityInfoView_C_GetAbilityPartsValueText::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_GetAbilityPartsValueText, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000068, "Member 'ImagineAbilityInfoView_C_GetAbilityPartsValueText::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_GetAbilityPartsValueText, CallFunc_Conv_IntToString_ReturnValue) == 0x000070, "Member 'ImagineAbilityInfoView_C_GetAbilityPartsValueText::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_GetAbilityPartsValueText, CallFunc_Greater_IntInt_ReturnValue) == 0x000080, "Member 'ImagineAbilityInfoView_C_GetAbilityPartsValueText::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_GetAbilityPartsValueText, K2Node_Select_Default) == 0x000088, "Member 'ImagineAbilityInfoView_C_GetAbilityPartsValueText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_GetAbilityPartsValueText, CallFunc_Concat_StrStr_ReturnValue) == 0x000098, "Member 'ImagineAbilityInfoView_C_GetAbilityPartsValueText::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_GetAbilityPartsValueText, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000A8, "Member 'ImagineAbilityInfoView_C_GetAbilityPartsValueText::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_GetAbilityPartsValueText, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B8, "Member 'ImagineAbilityInfoView_C_GetAbilityPartsValueText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_GetAbilityPartsValueText, K2Node_Select_Default_1) == 0x0000D0, "Member 'ImagineAbilityInfoView_C_GetAbilityPartsValueText::K2Node_Select_Default_1' has a wrong offset!");

// Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.ShowChange
// 0x0005 (0x0005 - 0x0000)
struct ImagineAbilityInfoView_C_ShowChange final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineAbilityInfoView_C_ShowChange) == 0x000001, "Wrong alignment on ImagineAbilityInfoView_C_ShowChange");
static_assert(sizeof(ImagineAbilityInfoView_C_ShowChange) == 0x000005, "Wrong size on ImagineAbilityInfoView_C_ShowChange");
static_assert(offsetof(ImagineAbilityInfoView_C_ShowChange, bShow) == 0x000000, "Member 'ImagineAbilityInfoView_C_ShowChange::bShow' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_ShowChange, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'ImagineAbilityInfoView_C_ShowChange::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_ShowChange, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'ImagineAbilityInfoView_C_ShowChange::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_ShowChange, Temp_bool_Variable) == 0x000003, "Member 'ImagineAbilityInfoView_C_ShowChange::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAbilityInfoView_C_ShowChange, K2Node_Select_Default) == 0x000004, "Member 'ImagineAbilityInfoView_C_ShowChange::K2Node_Select_Default' has a wrong offset!");

}

