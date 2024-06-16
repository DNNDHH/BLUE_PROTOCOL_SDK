#pragma once

 

// Package: InventoryLimitGrp

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function InventoryLimitGrp.InventoryLimitGrp_C.ExecuteUbergraph_InventoryLimitGrp
// 0x0118 (0x0118 - 0x0000)
struct InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7679[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        K2Node_CustomEvent_ItemMasterData;                 // 0x0008(0x00D0)(ConstParm)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTimeText_ReturnValue;              // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_767A[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              K2Node_CustomEvent_InExpiryDateTime_3;             // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              K2Node_CustomEvent_InExpiryDateTime_2;             // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_767B[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InDurationMinutes_1;            // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTimeText_ReturnValue_1;            // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_767C[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InDurationMinutes;              // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              K2Node_CustomEvent_InExpiryDateTime_1;             // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              K2Node_CustomEvent_InExpiryDateTime;               // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp) == 0x000008, "Wrong alignment on InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp");
static_assert(sizeof(InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp) == 0x000118, "Wrong size on InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp");
static_assert(offsetof(InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp, EntryPoint) == 0x000000, "Member 'InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp::EntryPoint' has a wrong offset!");
static_assert(offsetof(InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp, K2Node_Event_IsDesignTime) == 0x000004, "Member 'InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp, K2Node_CustomEvent_ItemMasterData) == 0x000008, "Member 'InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp::K2Node_CustomEvent_ItemMasterData' has a wrong offset!");
static_assert(offsetof(InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp, CallFunc_SetDateTimeText_ReturnValue) == 0x0000D8, "Member 'InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp::CallFunc_SetDateTimeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp, K2Node_CustomEvent_InExpiryDateTime_3) == 0x0000E0, "Member 'InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp::K2Node_CustomEvent_InExpiryDateTime_3' has a wrong offset!");
static_assert(offsetof(InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp, K2Node_CustomEvent_InExpiryDateTime_2) == 0x0000E8, "Member 'InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp::K2Node_CustomEvent_InExpiryDateTime_2' has a wrong offset!");
static_assert(offsetof(InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp, CallFunc_GetEventTermEndTime_OutEndTime) == 0x0000F0, "Member 'InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp, CallFunc_GetEventTermEndTime_ReturnValue) == 0x0000F8, "Member 'InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp, K2Node_CustomEvent_InDurationMinutes_1) == 0x0000FC, "Member 'InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp::K2Node_CustomEvent_InDurationMinutes_1' has a wrong offset!");
static_assert(offsetof(InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp, CallFunc_SetDateTimeText_ReturnValue_1) == 0x000100, "Member 'InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp::CallFunc_SetDateTimeText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp, K2Node_CustomEvent_InDurationMinutes) == 0x000104, "Member 'InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp::K2Node_CustomEvent_InDurationMinutes' has a wrong offset!");
static_assert(offsetof(InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp, K2Node_CustomEvent_InExpiryDateTime_1) == 0x000108, "Member 'InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp::K2Node_CustomEvent_InExpiryDateTime_1' has a wrong offset!");
static_assert(offsetof(InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp, K2Node_CustomEvent_InExpiryDateTime) == 0x000110, "Member 'InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp::K2Node_CustomEvent_InExpiryDateTime' has a wrong offset!");

// Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForMountImagine
// 0x0008 (0x0008 - 0x0000)
struct InventoryLimitGrp_C_SetDataForMountImagine final
{
public:
	struct FDateTime                              InExpiryDateTime;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryLimitGrp_C_SetDataForMountImagine) == 0x000008, "Wrong alignment on InventoryLimitGrp_C_SetDataForMountImagine");
static_assert(sizeof(InventoryLimitGrp_C_SetDataForMountImagine) == 0x000008, "Wrong size on InventoryLimitGrp_C_SetDataForMountImagine");
static_assert(offsetof(InventoryLimitGrp_C_SetDataForMountImagine, InExpiryDateTime) == 0x000000, "Member 'InventoryLimitGrp_C_SetDataForMountImagine::InExpiryDateTime' has a wrong offset!");

// Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForImagine
// 0x0008 (0x0008 - 0x0000)
struct InventoryLimitGrp_C_SetDataForImagine final
{
public:
	struct FDateTime                              InExpiryDateTime;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryLimitGrp_C_SetDataForImagine) == 0x000008, "Wrong alignment on InventoryLimitGrp_C_SetDataForImagine");
static_assert(sizeof(InventoryLimitGrp_C_SetDataForImagine) == 0x000008, "Wrong size on InventoryLimitGrp_C_SetDataForImagine");
static_assert(offsetof(InventoryLimitGrp_C_SetDataForImagine, InExpiryDateTime) == 0x000000, "Member 'InventoryLimitGrp_C_SetDataForImagine::InExpiryDateTime' has a wrong offset!");

// Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForWeaponByDurationMinutes
// 0x0004 (0x0004 - 0x0000)
struct InventoryLimitGrp_C_SetDataForWeaponByDurationMinutes final
{
public:
	int32                                         InDurationMinutes;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryLimitGrp_C_SetDataForWeaponByDurationMinutes) == 0x000004, "Wrong alignment on InventoryLimitGrp_C_SetDataForWeaponByDurationMinutes");
static_assert(sizeof(InventoryLimitGrp_C_SetDataForWeaponByDurationMinutes) == 0x000004, "Wrong size on InventoryLimitGrp_C_SetDataForWeaponByDurationMinutes");
static_assert(offsetof(InventoryLimitGrp_C_SetDataForWeaponByDurationMinutes, InDurationMinutes) == 0x000000, "Member 'InventoryLimitGrp_C_SetDataForWeaponByDurationMinutes::InDurationMinutes' has a wrong offset!");

// Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForCostumeByDurationMinutes
// 0x0004 (0x0004 - 0x0000)
struct InventoryLimitGrp_C_SetDataForCostumeByDurationMinutes final
{
public:
	int32                                         InDurationMinutes;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryLimitGrp_C_SetDataForCostumeByDurationMinutes) == 0x000004, "Wrong alignment on InventoryLimitGrp_C_SetDataForCostumeByDurationMinutes");
static_assert(sizeof(InventoryLimitGrp_C_SetDataForCostumeByDurationMinutes) == 0x000004, "Wrong size on InventoryLimitGrp_C_SetDataForCostumeByDurationMinutes");
static_assert(offsetof(InventoryLimitGrp_C_SetDataForCostumeByDurationMinutes, InDurationMinutes) == 0x000000, "Member 'InventoryLimitGrp_C_SetDataForCostumeByDurationMinutes::InDurationMinutes' has a wrong offset!");

// Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForWeapon
// 0x0008 (0x0008 - 0x0000)
struct InventoryLimitGrp_C_SetDataForWeapon final
{
public:
	struct FDateTime                              InExpiryDateTime;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryLimitGrp_C_SetDataForWeapon) == 0x000008, "Wrong alignment on InventoryLimitGrp_C_SetDataForWeapon");
static_assert(sizeof(InventoryLimitGrp_C_SetDataForWeapon) == 0x000008, "Wrong size on InventoryLimitGrp_C_SetDataForWeapon");
static_assert(offsetof(InventoryLimitGrp_C_SetDataForWeapon, InExpiryDateTime) == 0x000000, "Member 'InventoryLimitGrp_C_SetDataForWeapon::InExpiryDateTime' has a wrong offset!");

// Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForCostume
// 0x0008 (0x0008 - 0x0000)
struct InventoryLimitGrp_C_SetDataForCostume final
{
public:
	struct FDateTime                              InExpiryDateTime;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryLimitGrp_C_SetDataForCostume) == 0x000008, "Wrong alignment on InventoryLimitGrp_C_SetDataForCostume");
static_assert(sizeof(InventoryLimitGrp_C_SetDataForCostume) == 0x000008, "Wrong size on InventoryLimitGrp_C_SetDataForCostume");
static_assert(offsetof(InventoryLimitGrp_C_SetDataForCostume, InExpiryDateTime) == 0x000000, "Member 'InventoryLimitGrp_C_SetDataForCostume::InExpiryDateTime' has a wrong offset!");

// Function InventoryLimitGrp.InventoryLimitGrp_C.SetData
// 0x00D0 (0x00D0 - 0x0000)
struct InventoryLimitGrp_C_SetData final
{
public:
	struct FItemMasterData                        Param_ItemMasterData;                              // 0x0000(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(InventoryLimitGrp_C_SetData) == 0x000008, "Wrong alignment on InventoryLimitGrp_C_SetData");
static_assert(sizeof(InventoryLimitGrp_C_SetData) == 0x0000D0, "Wrong size on InventoryLimitGrp_C_SetData");
static_assert(offsetof(InventoryLimitGrp_C_SetData, Param_ItemMasterData) == 0x000000, "Member 'InventoryLimitGrp_C_SetData::Param_ItemMasterData' has a wrong offset!");

// Function InventoryLimitGrp.InventoryLimitGrp_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct InventoryLimitGrp_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryLimitGrp_C_PreConstruct) == 0x000001, "Wrong alignment on InventoryLimitGrp_C_PreConstruct");
static_assert(sizeof(InventoryLimitGrp_C_PreConstruct) == 0x000001, "Wrong size on InventoryLimitGrp_C_PreConstruct");
static_assert(offsetof(InventoryLimitGrp_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'InventoryLimitGrp_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function InventoryLimitGrp.InventoryLimitGrp_C.SetDurationTimeFromMinutes
// 0x0010 (0x0010 - 0x0000)
struct InventoryLimitGrp_C_SetDurationTimeFromMinutes final
{
public:
	int32                                         InDurationMinutes;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_767D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryLimitGrp_C_SetDurationTimeFromMinutes) == 0x000008, "Wrong alignment on InventoryLimitGrp_C_SetDurationTimeFromMinutes");
static_assert(sizeof(InventoryLimitGrp_C_SetDurationTimeFromMinutes) == 0x000010, "Wrong size on InventoryLimitGrp_C_SetDurationTimeFromMinutes");
static_assert(offsetof(InventoryLimitGrp_C_SetDurationTimeFromMinutes, InDurationMinutes) == 0x000000, "Member 'InventoryLimitGrp_C_SetDurationTimeFromMinutes::InDurationMinutes' has a wrong offset!");
static_assert(offsetof(InventoryLimitGrp_C_SetDurationTimeFromMinutes, CallFunc_MakeTimespan_ReturnValue) == 0x000008, "Member 'InventoryLimitGrp_C_SetDurationTimeFromMinutes::CallFunc_MakeTimespan_ReturnValue' has a wrong offset!");

// Function InventoryLimitGrp.InventoryLimitGrp_C.SetIsForShopProduct
// 0x0001 (0x0001 - 0x0000)
struct InventoryLimitGrp_C_SetIsForShopProduct final
{
public:
	bool                                          InIsForShopProduct;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryLimitGrp_C_SetIsForShopProduct) == 0x000001, "Wrong alignment on InventoryLimitGrp_C_SetIsForShopProduct");
static_assert(sizeof(InventoryLimitGrp_C_SetIsForShopProduct) == 0x000001, "Wrong size on InventoryLimitGrp_C_SetIsForShopProduct");
static_assert(offsetof(InventoryLimitGrp_C_SetIsForShopProduct, InIsForShopProduct) == 0x000000, "Member 'InventoryLimitGrp_C_SetIsForShopProduct::InIsForShopProduct' has a wrong offset!");

// Function InventoryLimitGrp.InventoryLimitGrp_C.SetDateTimeText
// 0x0010 (0x0010 - 0x0000)
struct InventoryLimitGrp_C_SetDateTimeText final
{
public:
	struct FDateTime                              InDateTime;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryLimitGrp_C_SetDateTimeText) == 0x000008, "Wrong alignment on InventoryLimitGrp_C_SetDateTimeText");
static_assert(sizeof(InventoryLimitGrp_C_SetDateTimeText) == 0x000010, "Wrong size on InventoryLimitGrp_C_SetDateTimeText");
static_assert(offsetof(InventoryLimitGrp_C_SetDateTimeText, InDateTime) == 0x000000, "Member 'InventoryLimitGrp_C_SetDateTimeText::InDateTime' has a wrong offset!");
static_assert(offsetof(InventoryLimitGrp_C_SetDateTimeText, ReturnValue) == 0x000008, "Member 'InventoryLimitGrp_C_SetDateTimeText::ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryLimitGrp_C_SetDateTimeText, CallFunc_SetDateTime_ReturnValue) == 0x000009, "Member 'InventoryLimitGrp_C_SetDateTimeText::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");

// Function InventoryLimitGrp.InventoryLimitGrp_C.SetHeadingMessage
// 0x0078 (0x0078 - 0x0000)
struct InventoryLimitGrp_C_SetHeadingMessage final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_767E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_767F[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0048(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0060(0x0018)()
};
static_assert(alignof(InventoryLimitGrp_C_SetHeadingMessage) == 0x000008, "Wrong alignment on InventoryLimitGrp_C_SetHeadingMessage");
static_assert(sizeof(InventoryLimitGrp_C_SetHeadingMessage) == 0x000078, "Wrong size on InventoryLimitGrp_C_SetHeadingMessage");
static_assert(offsetof(InventoryLimitGrp_C_SetHeadingMessage, Temp_bool_Variable) == 0x000000, "Member 'InventoryLimitGrp_C_SetHeadingMessage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InventoryLimitGrp_C_SetHeadingMessage, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'InventoryLimitGrp_C_SetHeadingMessage::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryLimitGrp_C_SetHeadingMessage, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000018, "Member 'InventoryLimitGrp_C_SetHeadingMessage::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryLimitGrp_C_SetHeadingMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'InventoryLimitGrp_C_SetHeadingMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryLimitGrp_C_SetHeadingMessage, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000038, "Member 'InventoryLimitGrp_C_SetHeadingMessage::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryLimitGrp_C_SetHeadingMessage, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000048, "Member 'InventoryLimitGrp_C_SetHeadingMessage::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryLimitGrp_C_SetHeadingMessage, K2Node_Select_Default) == 0x000060, "Member 'InventoryLimitGrp_C_SetHeadingMessage::K2Node_Select_Default' has a wrong offset!");

// Function InventoryLimitGrp.InventoryLimitGrp_C.Set Item Type
// 0x0001 (0x0001 - 0x0000)
struct InventoryLimitGrp_C_Set_Item_Type final
{
public:
	EItemType                                     Param_ItemType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryLimitGrp_C_Set_Item_Type) == 0x000001, "Wrong alignment on InventoryLimitGrp_C_Set_Item_Type");
static_assert(sizeof(InventoryLimitGrp_C_Set_Item_Type) == 0x000001, "Wrong size on InventoryLimitGrp_C_Set_Item_Type");
static_assert(offsetof(InventoryLimitGrp_C_Set_Item_Type, Param_ItemType) == 0x000000, "Member 'InventoryLimitGrp_C_Set_Item_Type::Param_ItemType' has a wrong offset!");

}

