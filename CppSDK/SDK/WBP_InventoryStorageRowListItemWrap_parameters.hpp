#pragma once

 

// Package: WBP_InventoryStorageRowListItemWrap

#include "Basic.hpp"

#include "InventoryData_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.OnItemClick__DelegateSignature
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_InventoryStorageRowListItemWrap_C_OnItemClick__DelegateSignature final
{
public:
	struct FInventoryData                         ItemData;                                          // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWBP_InventoryStorageRowListItem_C*     UpdetaListItem;                                    // 0x0098(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryStorageRowListItemWrap_C_OnItemClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_InventoryStorageRowListItemWrap_C_OnItemClick__DelegateSignature");
static_assert(sizeof(WBP_InventoryStorageRowListItemWrap_C_OnItemClick__DelegateSignature) == 0x0000A0, "Wrong size on WBP_InventoryStorageRowListItemWrap_C_OnItemClick__DelegateSignature");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_OnItemClick__DelegateSignature, ItemData) == 0x000000, "Member 'WBP_InventoryStorageRowListItemWrap_C_OnItemClick__DelegateSignature::ItemData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_OnItemClick__DelegateSignature, UpdetaListItem) == 0x000098, "Member 'WBP_InventoryStorageRowListItemWrap_C_OnItemClick__DelegateSignature::UpdetaListItem' has a wrong offset!");

// Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.OnItemClickRight__DelegateSignature
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_InventoryStorageRowListItemWrap_C_OnItemClickRight__DelegateSignature final
{
public:
	struct FInventoryData                         ItemData;                                          // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWBP_InventoryStorageRowListItem_C*     UpdetaListItem;                                    // 0x0098(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryStorageRowListItemWrap_C_OnItemClickRight__DelegateSignature) == 0x000008, "Wrong alignment on WBP_InventoryStorageRowListItemWrap_C_OnItemClickRight__DelegateSignature");
static_assert(sizeof(WBP_InventoryStorageRowListItemWrap_C_OnItemClickRight__DelegateSignature) == 0x0000A0, "Wrong size on WBP_InventoryStorageRowListItemWrap_C_OnItemClickRight__DelegateSignature");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_OnItemClickRight__DelegateSignature, ItemData) == 0x000000, "Member 'WBP_InventoryStorageRowListItemWrap_C_OnItemClickRight__DelegateSignature::ItemData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_OnItemClickRight__DelegateSignature, UpdetaListItem) == 0x000098, "Member 'WBP_InventoryStorageRowListItemWrap_C_OnItemClickRight__DelegateSignature::UpdetaListItem' has a wrong offset!");

// Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap
// 0x0230 (0x0230 - 0x0000)
struct WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EE7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_InventoryStorageRowListItem_C*     CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FInventoryData& ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FInventoryData& ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EE8[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InItemIndex;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_StorageAmount;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EE9[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         K2Node_CustomEvent_InventoryData;                  // 0x0040(0x0098)(HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EEA[0x6];                                     // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         K2Node_CustomEvent_ItemData_1;                     // 0x00E0(0x0098)(HasGetValueTypeHash)
	class UWBP_InventoryStorageRowListItem_C*     K2Node_CustomEvent_UpdetaListItem_1;               // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         K2Node_CustomEvent_ItemData;                       // 0x0188(0x0098)(HasGetValueTypeHash)
	class UWBP_InventoryStorageRowListItem_C*     K2Node_CustomEvent_UpdetaListItem;                 // 0x0220(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsSelected;                     // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x022A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1EEB[0x1];                                     // 0x022B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap) == 0x000008, "Wrong alignment on WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap");
static_assert(sizeof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap) == 0x000230, "Wrong size on WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap, EntryPoint) == 0x000000, "Member 'WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap, CallFunc_Create_ReturnValue) == 0x000008, "Member 'WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap, CallFunc_MakeLiteralByte_ReturnValue) == 0x000030, "Member 'WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000031, "Member 'WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap, K2Node_CustomEvent_InItemIndex) == 0x000034, "Member 'WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap::K2Node_CustomEvent_InItemIndex' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap, K2Node_CustomEvent_StorageAmount) == 0x000038, "Member 'WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap::K2Node_CustomEvent_StorageAmount' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap, K2Node_CustomEvent_InventoryData) == 0x000040, "Member 'WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap::K2Node_CustomEvent_InventoryData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap, Temp_bool_Variable) == 0x0000D8, "Member 'WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap, K2Node_Select_Default) == 0x0000D9, "Member 'WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap, K2Node_CustomEvent_ItemData_1) == 0x0000E0, "Member 'WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap::K2Node_CustomEvent_ItemData_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap, K2Node_CustomEvent_UpdetaListItem_1) == 0x000178, "Member 'WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap::K2Node_CustomEvent_UpdetaListItem_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap, CallFunc_AddChildToCanvas_ReturnValue) == 0x000180, "Member 'WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap, K2Node_CustomEvent_ItemData) == 0x000188, "Member 'WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap::K2Node_CustomEvent_ItemData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap, K2Node_CustomEvent_UpdetaListItem) == 0x000220, "Member 'WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap::K2Node_CustomEvent_UpdetaListItem' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap, K2Node_CustomEvent_IsSelected) == 0x000228, "Member 'WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap::K2Node_CustomEvent_IsSelected' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap, CallFunc_IsValid_ReturnValue) == 0x000229, "Member 'WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap, CallFunc_IsValid_ReturnValue_1) == 0x00022A, "Member 'WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap, CallFunc_Multiply_IntFloat_ReturnValue) == 0x00022C, "Member 'WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");

// Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.Set Icon Selected
// 0x0001 (0x0001 - 0x0000)
struct WBP_InventoryStorageRowListItemWrap_C_Set_Icon_Selected final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryStorageRowListItemWrap_C_Set_Icon_Selected) == 0x000001, "Wrong alignment on WBP_InventoryStorageRowListItemWrap_C_Set_Icon_Selected");
static_assert(sizeof(WBP_InventoryStorageRowListItemWrap_C_Set_Icon_Selected) == 0x000001, "Wrong size on WBP_InventoryStorageRowListItemWrap_C_Set_Icon_Selected");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_Set_Icon_Selected, IsSelected) == 0x000000, "Member 'WBP_InventoryStorageRowListItemWrap_C_Set_Icon_Selected::IsSelected' has a wrong offset!");

// Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.CustomEvent_1
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_InventoryStorageRowListItemWrap_C_CustomEvent_1 final
{
public:
	struct FInventoryData                         ItemData;                                          // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWBP_InventoryStorageRowListItem_C*     UpdetaListItem;                                    // 0x0098(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryStorageRowListItemWrap_C_CustomEvent_1) == 0x000008, "Wrong alignment on WBP_InventoryStorageRowListItemWrap_C_CustomEvent_1");
static_assert(sizeof(WBP_InventoryStorageRowListItemWrap_C_CustomEvent_1) == 0x0000A0, "Wrong size on WBP_InventoryStorageRowListItemWrap_C_CustomEvent_1");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_CustomEvent_1, ItemData) == 0x000000, "Member 'WBP_InventoryStorageRowListItemWrap_C_CustomEvent_1::ItemData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_CustomEvent_1, UpdetaListItem) == 0x000098, "Member 'WBP_InventoryStorageRowListItemWrap_C_CustomEvent_1::UpdetaListItem' has a wrong offset!");

// Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.CustomEvent_0
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_InventoryStorageRowListItemWrap_C_CustomEvent_0 final
{
public:
	struct FInventoryData                         ItemData;                                          // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWBP_InventoryStorageRowListItem_C*     UpdetaListItem;                                    // 0x0098(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryStorageRowListItemWrap_C_CustomEvent_0) == 0x000008, "Wrong alignment on WBP_InventoryStorageRowListItemWrap_C_CustomEvent_0");
static_assert(sizeof(WBP_InventoryStorageRowListItemWrap_C_CustomEvent_0) == 0x0000A0, "Wrong size on WBP_InventoryStorageRowListItemWrap_C_CustomEvent_0");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_CustomEvent_0, ItemData) == 0x000000, "Member 'WBP_InventoryStorageRowListItemWrap_C_CustomEvent_0::ItemData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_CustomEvent_0, UpdetaListItem) == 0x000098, "Member 'WBP_InventoryStorageRowListItemWrap_C_CustomEvent_0::UpdetaListItem' has a wrong offset!");

// Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.InitializeItemData
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_InventoryStorageRowListItemWrap_C_InitializeItemData final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StorageAmount;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         InventoryData;                                     // 0x0008(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryStorageRowListItemWrap_C_InitializeItemData) == 0x000008, "Wrong alignment on WBP_InventoryStorageRowListItemWrap_C_InitializeItemData");
static_assert(sizeof(WBP_InventoryStorageRowListItemWrap_C_InitializeItemData) == 0x0000A0, "Wrong size on WBP_InventoryStorageRowListItemWrap_C_InitializeItemData");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_InitializeItemData, InItemIndex) == 0x000000, "Member 'WBP_InventoryStorageRowListItemWrap_C_InitializeItemData::InItemIndex' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_InitializeItemData, StorageAmount) == 0x000004, "Member 'WBP_InventoryStorageRowListItemWrap_C_InitializeItemData::StorageAmount' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_InitializeItemData, InventoryData) == 0x000008, "Member 'WBP_InventoryStorageRowListItemWrap_C_InitializeItemData::InventoryData' has a wrong offset!");

// Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.SetScrollVisible
// 0x0020 (0x0020 - 0x0000)
struct WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible final
{
public:
	float                                         Offset;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalPos;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1EEC[0x1];                                     // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible) == 0x000004, "Wrong alignment on WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible");
static_assert(sizeof(WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible) == 0x000020, "Wrong size on WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible, Offset) == 0x000000, "Member 'WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible::Offset' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible, LocalPos) == 0x000004, "Member 'WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible::LocalPos' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible, CallFunc_MakeLiteralByte_ReturnValue) == 0x000008, "Member 'WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible, Temp_bool_Variable) == 0x000009, "Member 'WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible, CallFunc_IsValid_ReturnValue) == 0x00000A, "Member 'WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible, CallFunc_GetVisibility_ReturnValue) == 0x00000B, "Member 'WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00000C, "Member 'WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000010, "Member 'WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible, K2Node_Select_Default) == 0x000011, "Member 'WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000012, "Member 'WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible, CallFunc_Add_FloatFloat_ReturnValue) == 0x000014, "Member 'WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000018, "Member 'WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00001C, "Member 'WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible, CallFunc_Less_FloatFloat_ReturnValue) == 0x00001D, "Member 'WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

}

