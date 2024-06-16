#pragma once

 

// Package: BaseInventory

#include "Basic.hpp"

#include "InventoryItemData_structs.hpp"
#include "InventoryType_structs.hpp"
#include "Filter_Type_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "InventoryData_structs.hpp"
#include "SlateCore_structs.hpp"
#include "DescripionButtonType_structs.hpp"


namespace SDK::Params
{

// Function BaseInventory.BaseInventory_C.OnClickedButton__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BaseInventory_C_OnClickedButton__DelegateSignature final
{
public:
	EDescripionButtonType                         Button;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_OnClickedButton__DelegateSignature) == 0x000001, "Wrong alignment on BaseInventory_C_OnClickedButton__DelegateSignature");
static_assert(sizeof(BaseInventory_C_OnClickedButton__DelegateSignature) == 0x000001, "Wrong size on BaseInventory_C_OnClickedButton__DelegateSignature");
static_assert(offsetof(BaseInventory_C_OnClickedButton__DelegateSignature, Button) == 0x000000, "Member 'BaseInventory_C_OnClickedButton__DelegateSignature::Button' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.OnClickedItemButton__DelegateSignature
// 0x0098 (0x0098 - 0x0000)
struct BaseInventory_C_OnClickedItemButton__DelegateSignature final
{
public:
	struct FInventoryData                         Param_InventoryData;                               // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_OnClickedItemButton__DelegateSignature) == 0x000008, "Wrong alignment on BaseInventory_C_OnClickedItemButton__DelegateSignature");
static_assert(sizeof(BaseInventory_C_OnClickedItemButton__DelegateSignature) == 0x000098, "Wrong size on BaseInventory_C_OnClickedItemButton__DelegateSignature");
static_assert(offsetof(BaseInventory_C_OnClickedItemButton__DelegateSignature, Param_InventoryData) == 0x000000, "Member 'BaseInventory_C_OnClickedItemButton__DelegateSignature::Param_InventoryData' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.OnClickedItemRightButton__DelegateSignature
// 0x00A0 (0x00A0 - 0x0000)
struct BaseInventory_C_OnClickedItemRightButton__DelegateSignature final
{
public:
	class UItemIconBtn_C*                         SelectButton;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         Param_InventoryData;                               // 0x0008(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_OnClickedItemRightButton__DelegateSignature) == 0x000008, "Wrong alignment on BaseInventory_C_OnClickedItemRightButton__DelegateSignature");
static_assert(sizeof(BaseInventory_C_OnClickedItemRightButton__DelegateSignature) == 0x0000A0, "Wrong size on BaseInventory_C_OnClickedItemRightButton__DelegateSignature");
static_assert(offsetof(BaseInventory_C_OnClickedItemRightButton__DelegateSignature, SelectButton) == 0x000000, "Member 'BaseInventory_C_OnClickedItemRightButton__DelegateSignature::SelectButton' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_OnClickedItemRightButton__DelegateSignature, Param_InventoryData) == 0x000008, "Member 'BaseInventory_C_OnClickedItemRightButton__DelegateSignature::Param_InventoryData' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.OnPressItemButton__DelegateSignature
// 0x00A0 (0x00A0 - 0x0000)
struct BaseInventory_C_OnPressItemButton__DelegateSignature final
{
public:
	class UItemIconBtn_C*                         SelectButton;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         Param_InventoryData;                               // 0x0008(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_OnPressItemButton__DelegateSignature) == 0x000008, "Wrong alignment on BaseInventory_C_OnPressItemButton__DelegateSignature");
static_assert(sizeof(BaseInventory_C_OnPressItemButton__DelegateSignature) == 0x0000A0, "Wrong size on BaseInventory_C_OnPressItemButton__DelegateSignature");
static_assert(offsetof(BaseInventory_C_OnPressItemButton__DelegateSignature, SelectButton) == 0x000000, "Member 'BaseInventory_C_OnPressItemButton__DelegateSignature::SelectButton' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_OnPressItemButton__DelegateSignature, Param_InventoryData) == 0x000008, "Member 'BaseInventory_C_OnPressItemButton__DelegateSignature::Param_InventoryData' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.ExecuteUbergraph_BaseInventory
// 0x09D8 (0x09D8 - 0x0000)
struct BaseInventory_C_ExecuteUbergraph_BaseInventory final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_GetRecentSortType_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A0E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A0F[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0030(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A10[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable;                                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_1;                              // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_2;                              // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_3;                              // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_4;                              // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_5;                              // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_6;                              // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A11[0x1];                                     // 0x0057(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A12[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A13[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A14[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_6;                               // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x00A0(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSotedIndexNum_ReturnValue;             // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A15[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_CustomEvent_SelectItem;                     // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInventoryType                                K2Node_CustomEvent_Inventory;                      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A16[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_FindInventoryDataFromUniqueId_OutInventoryData; // 0x00F8(0x0098)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0195(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A17[0x2];                                     // 0x0196(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue;               // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A18[0x3];                                     // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A19[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x01D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckSlotIconTextureLoadProgress_OutIsLoadFinished; // 0x01D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckSlotIconTextureLoadProgress_OutIsLoadFinished_1; // 0x01D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x01D7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A1A[0x3];                                     // 0x01D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_7;                               // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A1B[0x2];                                     // 0x01E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemTypeNum_ReturnValue;               // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUseBlockNum_ReturnValue;               // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsBoostCapacity_ReturnValue;           // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A1C[0x3];                                     // 0x01F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A1D[0x4];                                     // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid_1;            // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A1E[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue_1;        // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A1F[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue_1;             // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0235(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x0236(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0237(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x023A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x023B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x023C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x023D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A20[0x2];                                     // 0x023E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_9;                               // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_3;          // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A21[0x3];                                     // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_10;                              // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_11;                              // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_12;                              // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_13;                              // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInventoryType                                Temp_byte_Variable_7;                              // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A22[0x3];                                     // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FInventoryData& OnItemClick)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0264(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid_2;            // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A23[0x3];                                     // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue_2;        // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A24[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue;                 // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A25[0x2];                                     // 0x02A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                Temp_object_Variable;                              // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                Temp_object_Variable_1;                            // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInventoryType                                Temp_byte_Variable_8;                              // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A26[0x3];                                     // 0x02B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_4;          // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A27[0x3];                                     // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x02C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_5;          // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_6;                 // 0x02C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A28[0x2];                                     // 0x02CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCapacity_ReturnValue_1;                // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_1;         // 0x02D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType_1;        // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A29[0x3];                                     // 0x02E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCapacity_ReturnValue_2;                // 0x02E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x02E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_9;                              // 0x02F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_10;                             // 0x02FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x02FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_11;                             // 0x02FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x02FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_12;                             // 0x02FE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x02FF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A2A[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterGroup                           K2Node_MakeStruct_FilterGroup;                     // 0x0308(0x0010)()
	struct FFilterGroup                           CallFunc_EmptyFilter_ReturnValue;                  // 0x0318(0x0010)()
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue;    // 0x0328(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_13;                             // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRecastTime_ReturnValue;                 // 0x0331(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A2B[0x2];                                     // 0x0332(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x0334(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue_1;  // 0x0338(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRecastTime_ReturnValue_1;               // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0341(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A2C[0x6];                                     // 0x0342(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_Array_Get_Item;                           // 0x0348(0x0098)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_7;                 // 0x03E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A2D[0x3];                                     // 0x03E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x03E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsRecastTime;                  // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A2E[0x7];                                     // 0x03F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x03F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A2F[0x7];                                     // 0x0401(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_CustomEvent_Target;                         // 0x0408(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_14;                             // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A30[0x3];                                     // 0x0411(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x0414(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0418(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_7;                              // 0x041C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x041D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x041E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A31[0x1];                                     // 0x041F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_3;                           // 0x0420(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A32[0x4];                                     // 0x0424(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         K2Node_CustomEvent_OnItemClick;                    // 0x0428(0x0098)(HasGetValueTypeHash)
	TArray<struct FFilterGroup>                   K2Node_ComponentBoundEvent_Filters;                // 0x04C0(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetSelectedIndex_ReturnValue;             // 0x04D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  K2Node_Select_Default_4;                           // 0x04D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_15;                             // 0x04D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A33[0x2];                                     // 0x04D6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterGroup                           CallFunc_Array_Get_Item_1;                         // 0x04D8(0x0010)()
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x04E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x04EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_16;                             // 0x04ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_8;                              // 0x04EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_5;                           // 0x04EF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_6;                           // 0x04F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_4;                  // 0x04F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A34[0x3];                                     // 0x04F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x04FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0500(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0528(0x0028)()
	int32                                         Temp_int_Variable_14;                              // 0x0550(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A35[0x4];                                     // 0x0554(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_GetSortedItemAt_ReturnValue;           // 0x0558(0x0118)(ConstParm)
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x0670(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x0708(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0709(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A36[0x2];                                     // 0x070A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x070C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x0710(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0714(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A37[0x3];                                     // 0x0715(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0718(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0728(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_9;                              // 0x0738(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_10;                             // 0x0739(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A38[0x6];                                     // 0x073A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0740(0x0028)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0768(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A39[0x7];                                     // 0x0769(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0770(0x0028)()
	struct FSlateColor                            K2Node_Select_Default_7;                           // 0x0798(0x0028)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x07C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_11;                             // 0x07C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_8;                           // 0x07C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_9;                           // 0x07C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_17;                             // 0x07C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x07C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x07C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x07C7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class FName>                           K2Node_Select_Default_10;                          // 0x07C8(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_2;                         // 0x07D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x07E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A3A[0x4];                                     // 0x07E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x07E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x07F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_18;                             // 0x07F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x07FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemFilterType                               CallFunc_GetFilterType_FilterType;                 // 0x07FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_GetSortRule_SortType;                     // 0x07FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A3B[0x3];                                     // 0x07FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterGroup                           CallFunc_AddFilter_ReturnValue;                    // 0x0800(0x0010)()
	ESBItemSortType                               CallFunc_GetSortRule_SortType_1;                   // 0x0810(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_GetRecentSortType_ReturnValue_1;          // 0x0811(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A3C[0x2];                                     // 0x0812(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSortMode_ModeNum;                      // 0x0814(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSortMode_ModeNum_1;                    // 0x0818(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A3D[0x4];                                     // 0x081C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetInventorySortName_SortList1;           // 0x0820(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetInventorySortIndex_Index1;             // 0x0830(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_3;                         // 0x0834(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A3E[0x4];                                     // 0x083C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0840(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x0850(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x0854(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A3F[0x3];                                     // 0x0855(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_ComponentBoundEvent_CurrentOffset;          // 0x0858(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_12;                             // 0x085C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A40[0x3];                                     // 0x085D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0860(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_11;                          // 0x0864(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A41[0x3];                                     // 0x0865(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x0868(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x086C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A42[0x3];                                     // 0x086D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0870(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn_1;              // 0x0878(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0880(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A43[0x3];                                     // 0x0881(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_Offset;                         // 0x0884(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Find_Value;                           // 0x0888(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x088C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A44[0x3];                                     // 0x088D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Map_Find_Value_1;                         // 0x0890(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0894(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A45[0x3];                                     // 0x0895(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_4;                   // 0x0898(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A46[0x4];                                     // 0x089C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_Array_Get_Item_4;                         // 0x08A0(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_8;                 // 0x0938(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0939(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A47[0x2];                                     // 0x093A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x093C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0940(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x0941(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A48[0x2];                                     // 0x0942(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UItemIconBtn_C* SelectItem)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0944(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x0954(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0955(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_8;        // 0x0956(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_9;        // 0x0957(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0958(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CalcPageIndex_Active;                     // 0x0959(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A49[0x2];                                     // 0x095A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CalcPageIndex_Index;                      // 0x095C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_PageCurrent;            // 0x0960(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A4A[0x4];                                     // 0x0964(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_2;                 // 0x0968(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn_2;              // 0x0970(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0978(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A4B[0x7];                                     // 0x0979(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetOrnamentStorage_ReturnValue;           // 0x0980(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0988(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A4C[0x7];                                     // 0x0989(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                K2Node_Select_Default_12;                          // 0x0990(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_13;                          // 0x0998(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A4D[0x3];                                     // 0x0999(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x099C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_7;                 // 0x09A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue_1;                      // 0x09A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidTypeAFilterModefi_ReturnValue;       // 0x09A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x09A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A4E[0x2];                                     // 0x09AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCategoryModeName_ReturnValue;          // 0x09AC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidTypeAFilterModefi_ReturnValue_1;     // 0x09B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A4F[0x3];                                     // 0x09B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCategoryModeName_ReturnValue_1;        // 0x09B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedIndex_ReturnValue_1;           // 0x09C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidTypeAFilterModefi_ReturnValue_2;     // 0x09C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A50[0x3];                                     // 0x09C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCategoryModeName_ReturnValue_2;        // 0x09C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedIndex_ReturnValue_2;           // 0x09D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_ExecuteUbergraph_BaseInventory) == 0x000008, "Wrong alignment on BaseInventory_C_ExecuteUbergraph_BaseInventory");
static_assert(sizeof(BaseInventory_C_ExecuteUbergraph_BaseInventory) == 0x0009D8, "Wrong size on BaseInventory_C_ExecuteUbergraph_BaseInventory");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, EntryPoint) == 0x000000, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::EntryPoint' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetRecentSortType_ReturnValue) == 0x000004, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetRecentSortType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Variable) == 0x000008, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Variable_1) == 0x00000C, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_bool_Variable) == 0x000010, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Subtract_IntInt_ReturnValue) == 0x000014, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000030, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_bool_Variable_1) == 0x000048, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_bool_Variable_2) == 0x000049, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Variable_2) == 0x00004C, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_byte_Variable) == 0x000050, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_byte_Variable_1) == 0x000051, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_byte_Variable_2) == 0x000052, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_byte_Variable_3) == 0x000053, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_byte_Variable_4) == 0x000054, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_byte_Variable_5) == 0x000055, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_byte_Variable_6) == 0x000056, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_CreateDelegate_OutputDelegate) == 0x000058, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Array_Index_Variable) == 0x000068, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_MakeLiteralByte_ReturnValue) == 0x00006C, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Loop_Counter_Variable) == 0x000070, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_bool_Variable_3) == 0x000074, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Loop_Counter_Variable_1) == 0x00007C, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Add_IntInt_ReturnValue_1) == 0x000080, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Array_Index_Variable_1) == 0x000084, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Variable_3) == 0x000088, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Variable_4) == 0x00008C, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Variable_5) == 0x000090, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Add_IntInt_ReturnValue_2) == 0x000094, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_bool_Variable_4) == 0x000098, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Variable_6) == 0x00009C, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_Event_MyGeometry) == 0x0000A0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_Event_InDeltaTime) == 0x0000D8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetSotedIndexNum_ReturnValue) == 0x0000DC, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetSotedIndexNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0000E0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_IsValid_ReturnValue) == 0x0000E4, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_CustomEvent_SelectItem) == 0x0000E8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_CustomEvent_SelectItem' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_CustomEvent_Inventory) == 0x0000F0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_CustomEvent_Inventory' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_FindInventoryDataFromUniqueId_OutInventoryData) == 0x0000F8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_FindInventoryDataFromUniqueId_OutInventoryData' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Array_Length_ReturnValue) == 0x000190, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Less_IntInt_ReturnValue) == 0x000194, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetNetworkDataCache_IsValid) == 0x000195, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000198, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetOwnItemList_ReturnValue) == 0x0001A0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetOwnItemList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetPlayerController_ReturnValue) == 0x0001A8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0001B0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_DynamicCast_bSuccess) == 0x0001B8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Array_Index_Variable_2) == 0x0001BC, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_SwitchEnum_CmpSuccess) == 0x0001C0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_PlayAnimation_ReturnValue) == 0x0001C8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Array_Length_ReturnValue_1) == 0x0001D0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0001D4, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_CheckSlotIconTextureLoadProgress_OutIsLoadFinished) == 0x0001D5, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_CheckSlotIconTextureLoadProgress_OutIsLoadFinished' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_CheckSlotIconTextureLoadProgress_OutIsLoadFinished_1) == 0x0001D6, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_CheckSlotIconTextureLoadProgress_OutIsLoadFinished_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0001D7, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_IsValid_ReturnValue_1) == 0x0001D8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Variable_7) == 0x0001DC, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x0001E0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_IsValid_ReturnValue_2) == 0x0001E1, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetItemTypeNum_ReturnValue) == 0x0001E4, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetItemTypeNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetUseBlockNum_ReturnValue) == 0x0001E8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetUseBlockNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x0001EC, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Clamp_ReturnValue) == 0x0001F0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetIsBoostCapacity_ReturnValue) == 0x0001F4, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetIsBoostCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetCapacity_ReturnValue) == 0x0001F8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetPlayerController_ReturnValue_1) == 0x000200, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetNetworkDataCache_IsValid_1) == 0x000208, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetNetworkDataCache_IsValid_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetNetworkDataCache_ReturnValue_1) == 0x000210, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetNetworkDataCache_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000218, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_DynamicCast_bSuccess_1) == 0x000220, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetOwnItemList_ReturnValue_1) == 0x000228, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetOwnItemList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Variable_8) == 0x000230, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000234, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000235, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x000236, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_BooleanAND_ReturnValue) == 0x000237, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_BooleanAND_ReturnValue_1) == 0x000238, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_BooleanAND_ReturnValue_2) == 0x000239, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_BooleanAND_ReturnValue_3) == 0x00023A, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_BooleanAND_ReturnValue_4) == 0x00023B, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_BooleanAND_ReturnValue_5) == 0x00023C, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_SwitchEnum_CmpSuccess_1) == 0x00023D, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_PlayAnimation_ReturnValue_1) == 0x000240, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Variable_9) == 0x000248, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_NotEqual_ByteByte_ReturnValue_3) == 0x00024C, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_NotEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Variable_10) == 0x000250, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Variable_11) == 0x000254, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Variable_12) == 0x000258, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Variable_12' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Variable_13) == 0x00025C, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Variable_13' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_byte_Variable_7) == 0x000260, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_CreateDelegate_OutputDelegate_1) == 0x000264, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetNetworkDataCache_IsValid_2) == 0x000274, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetNetworkDataCache_IsValid_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetNetworkDataCache_ReturnValue_2) == 0x000278, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetNetworkDataCache_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000280, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetInventory_ReturnValue) == 0x000288, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetEquipmentBag_ReturnValue) == 0x000290, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetStorage_ReturnValue) == 0x000298, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0002A0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_BooleanOR_ReturnValue) == 0x0002A1, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Array_Length_ReturnValue_2) == 0x0002A4, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_object_Variable) == 0x0002A8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_object_Variable_1) == 0x0002B0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_byte_Variable_8) == 0x0002B8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Loop_Counter_Variable_2) == 0x0002BC, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_NotEqual_ByteByte_ReturnValue_4) == 0x0002C0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_NotEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Add_IntInt_ReturnValue_3) == 0x0002C4, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_NotEqual_ByteByte_ReturnValue_5) == 0x0002C8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_NotEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_BooleanAND_ReturnValue_6) == 0x0002C9, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_BooleanAND_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetCapacity_ReturnValue_1) == 0x0002CC, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetCapacity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_ComponentBoundEvent_SelectedItem_1) == 0x0002D0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_ComponentBoundEvent_SelectedItem_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_ComponentBoundEvent_SelectionType_1) == 0x0002E0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_ComponentBoundEvent_SelectionType_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetCapacity_ReturnValue_2) == 0x0002E4, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetCapacity_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_ComponentBoundEvent_SelectedItem) == 0x0002E8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_ComponentBoundEvent_SelectionType) == 0x0002F8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_byte_Variable_9) == 0x0002F9, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_byte_Variable_10) == 0x0002FA, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_bool_Variable_5) == 0x0002FB, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_byte_Variable_11) == 0x0002FC, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_Select_Default) == 0x0002FD, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_byte_Variable_12) == 0x0002FE, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_bool_Variable_6) == 0x0002FF, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_Select_Default_1) == 0x000300, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_MakeStruct_FilterGroup) == 0x000308, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_MakeStruct_FilterGroup' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_EmptyFilter_ReturnValue) == 0x000318, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_EmptyFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetPlayerStorageComponent_ReturnValue) == 0x000328, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetPlayerStorageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_byte_Variable_13) == 0x000330, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_IsRecastTime_ReturnValue) == 0x000331, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_IsRecastTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Array_Index_Variable_3) == 0x000334, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetPlayerStorageComponent_ReturnValue_1) == 0x000338, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetPlayerStorageComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_IsRecastTime_ReturnValue_1) == 0x000340, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_IsRecastTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000341, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Array_Get_Item) == 0x000348, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Array_Length_ReturnValue_3) == 0x0003E0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_BooleanAND_ReturnValue_7) == 0x0003E4, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_BooleanAND_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetChildAt_ReturnValue) == 0x0003E8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_CustomEvent_bIsRecastTime) == 0x0003F0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_CustomEvent_bIsRecastTime' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x0003F8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_DynamicCast_bSuccess_2) == 0x000400, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_CustomEvent_Target) == 0x000408, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_CustomEvent_Target' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_byte_Variable_14) == 0x000410, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Loop_Counter_Variable_3) == 0x000414, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Add_IntInt_ReturnValue_4) == 0x000418, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_bool_Variable_7) == 0x00041C, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00041D, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_Select_Default_2) == 0x00041E, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_Select_Default_3) == 0x000420, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_CustomEvent_OnItemClick) == 0x000428, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_CustomEvent_OnItemClick' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_ComponentBoundEvent_Filters) == 0x0004C0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_ComponentBoundEvent_Filters' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetSelectedIndex_ReturnValue) == 0x0004D0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_Select_Default_4) == 0x0004D4, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_byte_Variable_15) == 0x0004D5, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Array_Get_Item_1) == 0x0004D8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Array_Length_ReturnValue_4) == 0x0004E8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Less_IntInt_ReturnValue_1) == 0x0004EC, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_byte_Variable_16) == 0x0004ED, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_bool_Variable_8) == 0x0004EE, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_Select_Default_5) == 0x0004EF, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_Select_Default_6) == 0x0004F0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Loop_Counter_Variable_4) == 0x0004F4, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Loop_Counter_Variable_4' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Less_IntInt_ReturnValue_2) == 0x0004F8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Add_IntInt_ReturnValue_5) == 0x0004FC, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_MakeStruct_SlateColor) == 0x000500, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_MakeStruct_SlateColor_1) == 0x000528, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Variable_14) == 0x000550, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Variable_14' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_BP_GetSortedItemAt_ReturnValue) == 0x000558, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_BP_GetSortedItemAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_CreateInventoryData_InventoryData) == 0x000670, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_CreateInventoryData_IsSuccess) == 0x000708, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000709, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Array_Add_ReturnValue) == 0x00070C, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Add_IntInt_ReturnValue_6) == 0x000710, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Greater_IntInt_ReturnValue) == 0x000714, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Conv_IntToString_ReturnValue) == 0x000718, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Concat_StrStr_ReturnValue) == 0x000728, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_bool_Variable_9) == 0x000738, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_bool_Variable_10) == 0x000739, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_MakeStruct_SlateColor_2) == 0x000740, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000768, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_MakeStruct_SlateColor_3) == 0x000770, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_Select_Default_7) == 0x000798, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0007C0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_bool_Variable_11) == 0x0007C1, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_Select_Default_8) == 0x0007C2, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_Select_Default_9) == 0x0007C3, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_Select_Default_9' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_byte_Variable_17) == 0x0007C4, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_byte_Variable_17' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0007C5, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x0007C6, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_BooleanOR_ReturnValue_1) == 0x0007C7, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_Select_Default_10) == 0x0007C8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_Select_Default_10' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Array_Get_Item_2) == 0x0007D8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Array_Length_ReturnValue_5) == 0x0007E0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0007E8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Less_IntInt_ReturnValue_3) == 0x0007F8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_byte_Variable_18) == 0x0007F9, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_byte_Variable_18' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x0007FA, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetFilterType_FilterType) == 0x0007FB, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetFilterType_FilterType' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetSortRule_SortType) == 0x0007FC, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetSortRule_SortType' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_AddFilter_ReturnValue) == 0x000800, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_AddFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetSortRule_SortType_1) == 0x000810, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetSortRule_SortType_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetRecentSortType_ReturnValue_1) == 0x000811, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetRecentSortType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetSortMode_ModeNum) == 0x000814, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetSortMode_ModeNum' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetSortMode_ModeNum_1) == 0x000818, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetSortMode_ModeNum_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetInventorySortName_SortList1) == 0x000820, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetInventorySortName_SortList1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetInventorySortIndex_Index1) == 0x000830, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetInventorySortIndex_Index1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Array_Get_Item_3) == 0x000834, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000840, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Array_Length_ReturnValue_6) == 0x000850, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Less_IntInt_ReturnValue_4) == 0x000854, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_ComponentBoundEvent_CurrentOffset) == 0x000858, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_ComponentBoundEvent_CurrentOffset' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_bool_Variable_12) == 0x00085C, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetChildrenCount_ReturnValue) == 0x000860, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_Select_Default_11) == 0x000864, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_Select_Default_11' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x000868, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x00086C, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetChildAt_ReturnValue_1) == 0x000870, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_DynamicCast_AsItem_Icon_Btn_1) == 0x000878, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_DynamicCast_AsItem_Icon_Btn_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_DynamicCast_bSuccess_3) == 0x000880, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_CustomEvent_Offset) == 0x000884, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_CustomEvent_Offset' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Map_Find_Value) == 0x000888, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Map_Find_ReturnValue) == 0x00088C, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Map_Find_Value_1) == 0x000890, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Map_Find_ReturnValue_1) == 0x000894, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, Temp_int_Array_Index_Variable_4) == 0x000898, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::Temp_int_Array_Index_Variable_4' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Array_Get_Item_4) == 0x0008A0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_BooleanAND_ReturnValue_8) == 0x000938, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_BooleanAND_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000939, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_SelectFloat_ReturnValue) == 0x00093C, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Not_PreBool_ReturnValue) == 0x000940, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x000941, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_CreateDelegate_OutputDelegate_2) == 0x000944, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x000954, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_BooleanOR_ReturnValue_2) == 0x000955, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_EqualEqual_ByteByte_ReturnValue_8) == 0x000956, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_EqualEqual_ByteByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_EqualEqual_ByteByte_ReturnValue_9) == 0x000957, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_EqualEqual_ByteByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_BooleanOR_ReturnValue_3) == 0x000958, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_CalcPageIndex_Active) == 0x000959, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_CalcPageIndex_Active' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_CalcPageIndex_Index) == 0x00095C, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_CalcPageIndex_Index' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_ComponentBoundEvent_PageCurrent) == 0x000960, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_ComponentBoundEvent_PageCurrent' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetChildAt_ReturnValue_2) == 0x000968, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetChildAt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_DynamicCast_AsItem_Icon_Btn_2) == 0x000970, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_DynamicCast_AsItem_Icon_Btn_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_DynamicCast_bSuccess_4) == 0x000978, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetOrnamentStorage_ReturnValue) == 0x000980, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetOrnamentStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000988, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_Select_Default_12) == 0x000990, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_Select_Default_12' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, K2Node_Select_Default_13) == 0x000998, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::K2Node_Select_Default_13' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Divide_IntInt_ReturnValue) == 0x00099C, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Add_IntInt_ReturnValue_7) == 0x0009A0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Add_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Clamp_ReturnValue_1) == 0x0009A4, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Clamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_ValidTypeAFilterModefi_ReturnValue) == 0x0009A8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_ValidTypeAFilterModefi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_Less_IntInt_ReturnValue_5) == 0x0009A9, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetCategoryModeName_ReturnValue) == 0x0009AC, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetCategoryModeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_ValidTypeAFilterModefi_ReturnValue_1) == 0x0009B4, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_ValidTypeAFilterModefi_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetCategoryModeName_ReturnValue_1) == 0x0009B8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetCategoryModeName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetSelectedIndex_ReturnValue_1) == 0x0009C0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetSelectedIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_ValidTypeAFilterModefi_ReturnValue_2) == 0x0009C4, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_ValidTypeAFilterModefi_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetCategoryModeName_ReturnValue_2) == 0x0009C8, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetCategoryModeName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_ExecuteUbergraph_BaseInventory, CallFunc_GetSelectedIndex_ReturnValue_2) == 0x0009D0, "Member 'BaseInventory_C_ExecuteUbergraph_BaseInventory::CallFunc_GetSelectedIndex_ReturnValue_2' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.BndEvt__BaseInventory_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct BaseInventory_C_BndEvt__BaseInventory_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature final
{
public:
	int32                                         PageCurrent;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_BndEvt__BaseInventory_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature) == 0x000004, "Wrong alignment on BaseInventory_C_BndEvt__BaseInventory_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature");
static_assert(sizeof(BaseInventory_C_BndEvt__BaseInventory_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature) == 0x000004, "Wrong size on BaseInventory_C_BndEvt__BaseInventory_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature");
static_assert(offsetof(BaseInventory_C_BndEvt__BaseInventory_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature, PageCurrent) == 0x000000, "Member 'BaseInventory_C_BndEvt__BaseInventory_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature::PageCurrent' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.ScrollVisibleUpdate
// 0x0004 (0x0004 - 0x0000)
struct BaseInventory_C_ScrollVisibleUpdate final
{
public:
	float                                         Offset;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_ScrollVisibleUpdate) == 0x000004, "Wrong alignment on BaseInventory_C_ScrollVisibleUpdate");
static_assert(sizeof(BaseInventory_C_ScrollVisibleUpdate) == 0x000004, "Wrong size on BaseInventory_C_ScrollVisibleUpdate");
static_assert(offsetof(BaseInventory_C_ScrollVisibleUpdate, Offset) == 0x000000, "Member 'BaseInventory_C_ScrollVisibleUpdate::Offset' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.BndEvt__BaseInventory_ScrollBox_0_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct BaseInventory_C_BndEvt__BaseInventory_ScrollBox_0_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature final
{
public:
	float                                         CurrentOffset;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_BndEvt__BaseInventory_ScrollBox_0_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature) == 0x000004, "Wrong alignment on BaseInventory_C_BndEvt__BaseInventory_ScrollBox_0_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature");
static_assert(sizeof(BaseInventory_C_BndEvt__BaseInventory_ScrollBox_0_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature) == 0x000004, "Wrong size on BaseInventory_C_BndEvt__BaseInventory_ScrollBox_0_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature");
static_assert(offsetof(BaseInventory_C_BndEvt__BaseInventory_ScrollBox_0_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature, CurrentOffset) == 0x000000, "Member 'BaseInventory_C_BndEvt__BaseInventory_ScrollBox_0_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature::CurrentOffset' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BaseInventory_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature final
{
public:
	TArray<struct FFilterGroup>                   Param_Filters;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BaseInventory_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature) == 0x000008, "Wrong alignment on BaseInventory_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature");
static_assert(sizeof(BaseInventory_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature) == 0x000010, "Wrong size on BaseInventory_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature");
static_assert(offsetof(BaseInventory_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature, Param_Filters) == 0x000000, "Member 'BaseInventory_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature::Param_Filters' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.CustomEvent_0
// 0x0098 (0x0098 - 0x0000)
struct BaseInventory_C_CustomEvent_0 final
{
public:
	struct FInventoryData                         OnItemClick;                                       // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_CustomEvent_0) == 0x000008, "Wrong alignment on BaseInventory_C_CustomEvent_0");
static_assert(sizeof(BaseInventory_C_CustomEvent_0) == 0x000098, "Wrong size on BaseInventory_C_CustomEvent_0");
static_assert(offsetof(BaseInventory_C_CustomEvent_0, OnItemClick) == 0x000000, "Member 'BaseInventory_C_CustomEvent_0::OnItemClick' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.Event_PressItemEnable
// 0x0008 (0x0008 - 0x0000)
struct BaseInventory_C_Event_PressItemEnable final
{
public:
	class UItemIconBtn_C*                         Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_Event_PressItemEnable) == 0x000008, "Wrong alignment on BaseInventory_C_Event_PressItemEnable");
static_assert(sizeof(BaseInventory_C_Event_PressItemEnable) == 0x000008, "Wrong size on BaseInventory_C_Event_PressItemEnable");
static_assert(offsetof(BaseInventory_C_Event_PressItemEnable, Target) == 0x000000, "Member 'BaseInventory_C_Event_PressItemEnable::Target' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.RecastTimeIconUpdate
// 0x0001 (0x0001 - 0x0000)
struct BaseInventory_C_RecastTimeIconUpdate final
{
public:
	bool                                          Param_bIsRecastTime;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BaseInventory_C_RecastTimeIconUpdate) == 0x000001, "Wrong alignment on BaseInventory_C_RecastTimeIconUpdate");
static_assert(sizeof(BaseInventory_C_RecastTimeIconUpdate) == 0x000001, "Wrong size on BaseInventory_C_RecastTimeIconUpdate");
static_assert(offsetof(BaseInventory_C_RecastTimeIconUpdate, Param_bIsRecastTime) == 0x000000, "Member 'BaseInventory_C_RecastTimeIconUpdate::Param_bIsRecastTime' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BaseInventory_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on BaseInventory_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(BaseInventory_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on BaseInventory_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(BaseInventory_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'BaseInventory_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'BaseInventory_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BaseInventory_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on BaseInventory_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(BaseInventory_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on BaseInventory_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(BaseInventory_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'BaseInventory_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'BaseInventory_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.ChangeCategory
// 0x0001 (0x0001 - 0x0000)
struct BaseInventory_C_ChangeCategory final
{
public:
	EInventoryType                                Param_Inventory;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_ChangeCategory) == 0x000001, "Wrong alignment on BaseInventory_C_ChangeCategory");
static_assert(sizeof(BaseInventory_C_ChangeCategory) == 0x000001, "Wrong size on BaseInventory_C_ChangeCategory");
static_assert(offsetof(BaseInventory_C_ChangeCategory, Param_Inventory) == 0x000000, "Member 'BaseInventory_C_ChangeCategory::Param_Inventory' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.OnSelect
// 0x0008 (0x0008 - 0x0000)
struct BaseInventory_C_OnSelect final
{
public:
	class UItemIconBtn_C*                         SelectItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_OnSelect) == 0x000008, "Wrong alignment on BaseInventory_C_OnSelect");
static_assert(sizeof(BaseInventory_C_OnSelect) == 0x000008, "Wrong size on BaseInventory_C_OnSelect");
static_assert(offsetof(BaseInventory_C_OnSelect, SelectItem) == 0x000000, "Member 'BaseInventory_C_OnSelect::SelectItem' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.Tick
// 0x003C (0x003C - 0x0000)
struct BaseInventory_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_Tick) == 0x000004, "Wrong alignment on BaseInventory_C_Tick");
static_assert(sizeof(BaseInventory_C_Tick) == 0x00003C, "Wrong size on BaseInventory_C_Tick");
static_assert(offsetof(BaseInventory_C_Tick, MyGeometry) == 0x000000, "Member 'BaseInventory_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_Tick, InDeltaTime) == 0x000038, "Member 'BaseInventory_C_Tick::InDeltaTime' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.AdjustItemIcons
// 0x0010 (0x0010 - 0x0000)
struct BaseInventory_C_AdjustItemIcons final
{
public:
	int32                                         First;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BaseInventory_C_AdjustItemIcons) == 0x000004, "Wrong alignment on BaseInventory_C_AdjustItemIcons");
static_assert(sizeof(BaseInventory_C_AdjustItemIcons) == 0x000010, "Wrong size on BaseInventory_C_AdjustItemIcons");
static_assert(offsetof(BaseInventory_C_AdjustItemIcons, First) == 0x000000, "Member 'BaseInventory_C_AdjustItemIcons::First' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_AdjustItemIcons, CallFunc_GetChildrenCount_ReturnValue) == 0x000004, "Member 'BaseInventory_C_AdjustItemIcons::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_AdjustItemIcons, CallFunc_Clamp_ReturnValue) == 0x000008, "Member 'BaseInventory_C_AdjustItemIcons::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_AdjustItemIcons, CallFunc_Greater_IntInt_ReturnValue) == 0x00000C, "Member 'BaseInventory_C_AdjustItemIcons::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.SelectedAll
// 0x0030 (0x0030 - 0x0000)
struct BaseInventory_C_SelectedAll final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A51[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A52[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BaseInventory_C_SelectedAll) == 0x000008, "Wrong alignment on BaseInventory_C_SelectedAll");
static_assert(sizeof(BaseInventory_C_SelectedAll) == 0x000030, "Wrong size on BaseInventory_C_SelectedAll");
static_assert(offsetof(BaseInventory_C_SelectedAll, IsSelected) == 0x000000, "Member 'BaseInventory_C_SelectedAll::IsSelected' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SelectedAll, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BaseInventory_C_SelectedAll::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SelectedAll, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BaseInventory_C_SelectedAll::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SelectedAll, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BaseInventory_C_SelectedAll::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SelectedAll, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'BaseInventory_C_SelectedAll::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SelectedAll, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BaseInventory_C_SelectedAll::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SelectedAll, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x000020, "Member 'BaseInventory_C_SelectedAll::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SelectedAll, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BaseInventory_C_SelectedAll::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SelectedAll, CallFunc_Less_IntInt_ReturnValue) == 0x000029, "Member 'BaseInventory_C_SelectedAll::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.FindInventoryDataFromIndex
// 0x0150 (0x0150 - 0x0000)
struct BaseInventory_C_FindInventoryDataFromIndex final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A53[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         Array_Element;                                     // 0x0008(0x0098)(Parm, OutParm, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         CallFunc_Array_Get_Item;                           // 0x00B0(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BaseInventory_C_FindInventoryDataFromIndex) == 0x000008, "Wrong alignment on BaseInventory_C_FindInventoryDataFromIndex");
static_assert(sizeof(BaseInventory_C_FindInventoryDataFromIndex) == 0x000150, "Wrong size on BaseInventory_C_FindInventoryDataFromIndex");
static_assert(offsetof(BaseInventory_C_FindInventoryDataFromIndex, ItemIndex) == 0x000000, "Member 'BaseInventory_C_FindInventoryDataFromIndex::ItemIndex' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_FindInventoryDataFromIndex, Array_Element) == 0x000008, "Member 'BaseInventory_C_FindInventoryDataFromIndex::Array_Element' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_FindInventoryDataFromIndex, Temp_int_Array_Index_Variable) == 0x0000A0, "Member 'BaseInventory_C_FindInventoryDataFromIndex::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_FindInventoryDataFromIndex, Temp_int_Loop_Counter_Variable) == 0x0000A4, "Member 'BaseInventory_C_FindInventoryDataFromIndex::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_FindInventoryDataFromIndex, CallFunc_Add_IntInt_ReturnValue) == 0x0000A8, "Member 'BaseInventory_C_FindInventoryDataFromIndex::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_FindInventoryDataFromIndex, CallFunc_Array_Length_ReturnValue) == 0x0000AC, "Member 'BaseInventory_C_FindInventoryDataFromIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_FindInventoryDataFromIndex, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'BaseInventory_C_FindInventoryDataFromIndex::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_FindInventoryDataFromIndex, CallFunc_Less_IntInt_ReturnValue) == 0x000148, "Member 'BaseInventory_C_FindInventoryDataFromIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_FindInventoryDataFromIndex, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000149, "Member 'BaseInventory_C_FindInventoryDataFromIndex::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.SetRegisterMode
// 0x00D8 (0x00D8 - 0x0000)
struct BaseInventory_C_SetRegisterMode final
{
public:
	bool                                          bIsRegisterMode;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A54[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_8;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     Temp_byte_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A55[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         CallFunc_Array_Get_Item;                           // 0x0028(0x0098)(HasGetValueTypeHash)
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A56[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_1;                           // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BaseInventory_C_SetRegisterMode) == 0x000008, "Wrong alignment on BaseInventory_C_SetRegisterMode");
static_assert(sizeof(BaseInventory_C_SetRegisterMode) == 0x0000D8, "Wrong size on BaseInventory_C_SetRegisterMode");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, bIsRegisterMode) == 0x000000, "Member 'BaseInventory_C_SetRegisterMode::bIsRegisterMode' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, Temp_bool_Variable) == 0x000001, "Member 'BaseInventory_C_SetRegisterMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, Temp_bool_Variable_1) == 0x000002, "Member 'BaseInventory_C_SetRegisterMode::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, Temp_bool_Variable_2) == 0x000003, "Member 'BaseInventory_C_SetRegisterMode::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, Temp_bool_Variable_3) == 0x000004, "Member 'BaseInventory_C_SetRegisterMode::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, Temp_bool_Variable_4) == 0x000005, "Member 'BaseInventory_C_SetRegisterMode::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, Temp_bool_Variable_5) == 0x000006, "Member 'BaseInventory_C_SetRegisterMode::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, Temp_bool_Variable_6) == 0x000007, "Member 'BaseInventory_C_SetRegisterMode::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, Temp_bool_Variable_7) == 0x000008, "Member 'BaseInventory_C_SetRegisterMode::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BaseInventory_C_SetRegisterMode::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'BaseInventory_C_SetRegisterMode::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BaseInventory_C_SetRegisterMode::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, Temp_bool_Variable_8) == 0x000018, "Member 'BaseInventory_C_SetRegisterMode::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, Temp_byte_Variable) == 0x000019, "Member 'BaseInventory_C_SetRegisterMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'BaseInventory_C_SetRegisterMode::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, CallFunc_Array_Get_Item) == 0x000028, "Member 'BaseInventory_C_SetRegisterMode::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x0000C0, "Member 'BaseInventory_C_SetRegisterMode::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'BaseInventory_C_SetRegisterMode::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, CallFunc_Array_Length_ReturnValue) == 0x0000CC, "Member 'BaseInventory_C_SetRegisterMode::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, K2Node_Select_Default) == 0x0000D0, "Member 'BaseInventory_C_SetRegisterMode::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, CallFunc_Less_IntInt_ReturnValue) == 0x0000D1, "Member 'BaseInventory_C_SetRegisterMode::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetRegisterMode, K2Node_Select_Default_1) == 0x0000D2, "Member 'BaseInventory_C_SetRegisterMode::K2Node_Select_Default_1' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.FindInventoryDataFromUniqueId
// 0x0158 (0x0158 - 0x0000)
struct BaseInventory_C_FindInventoryDataFromUniqueId final
{
public:
	class FString                                 InUniqueId;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FInventoryData                         OutInventoryData;                                  // 0x0010(0x0098)(Parm, OutParm, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         CallFunc_Array_Get_Item;                           // 0x00B8(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BaseInventory_C_FindInventoryDataFromUniqueId) == 0x000008, "Wrong alignment on BaseInventory_C_FindInventoryDataFromUniqueId");
static_assert(sizeof(BaseInventory_C_FindInventoryDataFromUniqueId) == 0x000158, "Wrong size on BaseInventory_C_FindInventoryDataFromUniqueId");
static_assert(offsetof(BaseInventory_C_FindInventoryDataFromUniqueId, InUniqueId) == 0x000000, "Member 'BaseInventory_C_FindInventoryDataFromUniqueId::InUniqueId' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_FindInventoryDataFromUniqueId, OutInventoryData) == 0x000010, "Member 'BaseInventory_C_FindInventoryDataFromUniqueId::OutInventoryData' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_FindInventoryDataFromUniqueId, Temp_int_Array_Index_Variable) == 0x0000A8, "Member 'BaseInventory_C_FindInventoryDataFromUniqueId::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_FindInventoryDataFromUniqueId, Temp_int_Loop_Counter_Variable) == 0x0000AC, "Member 'BaseInventory_C_FindInventoryDataFromUniqueId::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_FindInventoryDataFromUniqueId, CallFunc_Add_IntInt_ReturnValue) == 0x0000B0, "Member 'BaseInventory_C_FindInventoryDataFromUniqueId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_FindInventoryDataFromUniqueId, CallFunc_Array_Length_ReturnValue) == 0x0000B4, "Member 'BaseInventory_C_FindInventoryDataFromUniqueId::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_FindInventoryDataFromUniqueId, CallFunc_Array_Get_Item) == 0x0000B8, "Member 'BaseInventory_C_FindInventoryDataFromUniqueId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_FindInventoryDataFromUniqueId, CallFunc_Less_IntInt_ReturnValue) == 0x000150, "Member 'BaseInventory_C_FindInventoryDataFromUniqueId::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_FindInventoryDataFromUniqueId, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000151, "Member 'BaseInventory_C_FindInventoryDataFromUniqueId::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.CheckSlotIconTextureLoadProgress
// 0x0038 (0x0038 - 0x0000)
struct BaseInventory_C_CheckSlotIconTextureLoadProgress final
{
public:
	bool                                          OutIsLoadFinished;                                 // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A57[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A58[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A59[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BaseInventory_C_CheckSlotIconTextureLoadProgress) == 0x000008, "Wrong alignment on BaseInventory_C_CheckSlotIconTextureLoadProgress");
static_assert(sizeof(BaseInventory_C_CheckSlotIconTextureLoadProgress) == 0x000038, "Wrong size on BaseInventory_C_CheckSlotIconTextureLoadProgress");
static_assert(offsetof(BaseInventory_C_CheckSlotIconTextureLoadProgress, OutIsLoadFinished) == 0x000000, "Member 'BaseInventory_C_CheckSlotIconTextureLoadProgress::OutIsLoadFinished' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_CheckSlotIconTextureLoadProgress, Temp_int_Variable) == 0x000004, "Member 'BaseInventory_C_CheckSlotIconTextureLoadProgress::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_CheckSlotIconTextureLoadProgress, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BaseInventory_C_CheckSlotIconTextureLoadProgress::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_CheckSlotIconTextureLoadProgress, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'BaseInventory_C_CheckSlotIconTextureLoadProgress::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_CheckSlotIconTextureLoadProgress, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'BaseInventory_C_CheckSlotIconTextureLoadProgress::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_CheckSlotIconTextureLoadProgress, CallFunc_Subtract_IntInt_ReturnValue) == 0x000014, "Member 'BaseInventory_C_CheckSlotIconTextureLoadProgress::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_CheckSlotIconTextureLoadProgress, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'BaseInventory_C_CheckSlotIconTextureLoadProgress::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_CheckSlotIconTextureLoadProgress, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'BaseInventory_C_CheckSlotIconTextureLoadProgress::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_CheckSlotIconTextureLoadProgress, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x000028, "Member 'BaseInventory_C_CheckSlotIconTextureLoadProgress::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_CheckSlotIconTextureLoadProgress, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BaseInventory_C_CheckSlotIconTextureLoadProgress::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_CheckSlotIconTextureLoadProgress, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'BaseInventory_C_CheckSlotIconTextureLoadProgress::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_CheckSlotIconTextureLoadProgress, CallFunc_IsValid_ReturnValue_1) == 0x000032, "Member 'BaseInventory_C_CheckSlotIconTextureLoadProgress::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.UpdateLockInventory
// 0x0048 (0x0048 - 0x0000)
struct BaseInventory_C_UpdateLockInventory final
{
public:
	TArray<struct FSBLockItemData>                LockItems;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLockItemData                        CallFunc_Array_Get_Item;                           // 0x0018(0x0020)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A5A[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_UpdateLockInventory) == 0x000008, "Wrong alignment on BaseInventory_C_UpdateLockInventory");
static_assert(sizeof(BaseInventory_C_UpdateLockInventory) == 0x000048, "Wrong size on BaseInventory_C_UpdateLockInventory");
static_assert(offsetof(BaseInventory_C_UpdateLockInventory, LockItems) == 0x000000, "Member 'BaseInventory_C_UpdateLockInventory::LockItems' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_UpdateLockInventory, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'BaseInventory_C_UpdateLockInventory::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_UpdateLockInventory, Temp_int_Array_Index_Variable) == 0x000014, "Member 'BaseInventory_C_UpdateLockInventory::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_UpdateLockInventory, CallFunc_Array_Get_Item) == 0x000018, "Member 'BaseInventory_C_UpdateLockInventory::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_UpdateLockInventory, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'BaseInventory_C_UpdateLockInventory::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_UpdateLockInventory, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00003C, "Member 'BaseInventory_C_UpdateLockInventory::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_UpdateLockInventory, CallFunc_Less_IntInt_ReturnValue) == 0x00003D, "Member 'BaseInventory_C_UpdateLockInventory::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_UpdateLockInventory, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'BaseInventory_C_UpdateLockInventory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.IconAnimInPlay
// 0x0030 (0x0030 - 0x0000)
struct BaseInventory_C_IconAnimInPlay final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A5B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A5C[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A5D[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A5E[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_IconAnimInPlay) == 0x000008, "Wrong alignment on BaseInventory_C_IconAnimInPlay");
static_assert(sizeof(BaseInventory_C_IconAnimInPlay) == 0x000030, "Wrong size on BaseInventory_C_IconAnimInPlay");
static_assert(offsetof(BaseInventory_C_IconAnimInPlay, Temp_int_Variable) == 0x000000, "Member 'BaseInventory_C_IconAnimInPlay::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_IconAnimInPlay, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'BaseInventory_C_IconAnimInPlay::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_IconAnimInPlay, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'BaseInventory_C_IconAnimInPlay::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_IconAnimInPlay, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x000018, "Member 'BaseInventory_C_IconAnimInPlay::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_IconAnimInPlay, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BaseInventory_C_IconAnimInPlay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_IconAnimInPlay, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'BaseInventory_C_IconAnimInPlay::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_IconAnimInPlay, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'BaseInventory_C_IconAnimInPlay::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_IconAnimInPlay, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'BaseInventory_C_IconAnimInPlay::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.On_ComboBoxString_Filter_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct BaseInventory_C_On_ComboBoxString_Filter_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(BaseInventory_C_On_ComboBoxString_Filter_GenerateWidget_0) == 0x000008, "Wrong alignment on BaseInventory_C_On_ComboBoxString_Filter_GenerateWidget_0");
static_assert(sizeof(BaseInventory_C_On_ComboBoxString_Filter_GenerateWidget_0) == 0x000038, "Wrong size on BaseInventory_C_On_ComboBoxString_Filter_GenerateWidget_0");
static_assert(offsetof(BaseInventory_C_On_ComboBoxString_Filter_GenerateWidget_0, Item) == 0x000000, "Member 'BaseInventory_C_On_ComboBoxString_Filter_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_On_ComboBoxString_Filter_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'BaseInventory_C_On_ComboBoxString_Filter_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_On_ComboBoxString_Filter_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'BaseInventory_C_On_ComboBoxString_Filter_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_On_ComboBoxString_Filter_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'BaseInventory_C_On_ComboBoxString_Filter_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.GetSelectItemData
// 0x0190 (0x0190 - 0x0000)
struct BaseInventory_C_GetSelectItemData final
{
public:
	struct FInventoryItemData                     InventoryItemData;                                 // 0x0000(0x0060)(Parm, OutParm, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A5F[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData;               // 0x0068(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A60[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     K2Node_Select_Default;                             // 0x00D0(0x0060)(HasGetValueTypeHash)
	struct FInventoryItemData                     K2Node_Select_Default_1;                           // 0x0130(0x0060)(HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_GetSelectItemData) == 0x000008, "Wrong alignment on BaseInventory_C_GetSelectItemData");
static_assert(sizeof(BaseInventory_C_GetSelectItemData) == 0x000190, "Wrong size on BaseInventory_C_GetSelectItemData");
static_assert(offsetof(BaseInventory_C_GetSelectItemData, InventoryItemData) == 0x000000, "Member 'BaseInventory_C_GetSelectItemData::InventoryItemData' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSelectItemData, Temp_bool_Variable) == 0x000060, "Member 'BaseInventory_C_GetSelectItemData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSelectItemData, Temp_bool_Variable_1) == 0x000061, "Member 'BaseInventory_C_GetSelectItemData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSelectItemData, K2Node_MakeStruct_InventoryItemData) == 0x000068, "Member 'BaseInventory_C_GetSelectItemData::K2Node_MakeStruct_InventoryItemData' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSelectItemData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C8, "Member 'BaseInventory_C_GetSelectItemData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSelectItemData, CallFunc_IsValid_ReturnValue) == 0x0000C9, "Member 'BaseInventory_C_GetSelectItemData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSelectItemData, K2Node_Select_Default) == 0x0000D0, "Member 'BaseInventory_C_GetSelectItemData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSelectItemData, K2Node_Select_Default_1) == 0x000130, "Member 'BaseInventory_C_GetSelectItemData::K2Node_Select_Default_1' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.SetSelectedItemBtn
// 0x00D8 (0x00D8 - 0x0000)
struct BaseInventory_C_SetSelectedItemBtn final
{
public:
	class FString                                 ItemId;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A61[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         CallFunc_Array_Get_Item;                           // 0x0028(0x0098)(HasGetValueTypeHash)
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A62[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BaseInventory_C_SetSelectedItemBtn) == 0x000008, "Wrong alignment on BaseInventory_C_SetSelectedItemBtn");
static_assert(sizeof(BaseInventory_C_SetSelectedItemBtn) == 0x0000D8, "Wrong size on BaseInventory_C_SetSelectedItemBtn");
static_assert(offsetof(BaseInventory_C_SetSelectedItemBtn, ItemId) == 0x000000, "Member 'BaseInventory_C_SetSelectedItemBtn::ItemId' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetSelectedItemBtn, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BaseInventory_C_SetSelectedItemBtn::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetSelectedItemBtn, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BaseInventory_C_SetSelectedItemBtn::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetSelectedItemBtn, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BaseInventory_C_SetSelectedItemBtn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetSelectedItemBtn, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'BaseInventory_C_SetSelectedItemBtn::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetSelectedItemBtn, CallFunc_Array_Get_Item) == 0x000028, "Member 'BaseInventory_C_SetSelectedItemBtn::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetSelectedItemBtn, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x0000C0, "Member 'BaseInventory_C_SetSelectedItemBtn::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetSelectedItemBtn, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'BaseInventory_C_SetSelectedItemBtn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetSelectedItemBtn, CallFunc_Array_Length_ReturnValue) == 0x0000CC, "Member 'BaseInventory_C_SetSelectedItemBtn::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetSelectedItemBtn, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000D0, "Member 'BaseInventory_C_SetSelectedItemBtn::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetSelectedItemBtn, CallFunc_Less_IntInt_ReturnValue) == 0x0000D1, "Member 'BaseInventory_C_SetSelectedItemBtn::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.SetSelectBlankText
// 0x0060 (0x0060 - 0x0000)
struct BaseInventory_C_SetSelectBlankText final
{
public:
	EInventoryType                                Selection;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A63[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A64[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0048(0x0018)()
};
static_assert(alignof(BaseInventory_C_SetSelectBlankText) == 0x000008, "Wrong alignment on BaseInventory_C_SetSelectBlankText");
static_assert(sizeof(BaseInventory_C_SetSelectBlankText) == 0x000060, "Wrong size on BaseInventory_C_SetSelectBlankText");
static_assert(offsetof(BaseInventory_C_SetSelectBlankText, Selection) == 0x000000, "Member 'BaseInventory_C_SetSelectBlankText::Selection' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetSelectBlankText, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'BaseInventory_C_SetSelectBlankText::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetSelectBlankText, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'BaseInventory_C_SetSelectBlankText::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetSelectBlankText, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'BaseInventory_C_SetSelectBlankText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetSelectBlankText, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000038, "Member 'BaseInventory_C_SetSelectBlankText::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_SetSelectBlankText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000048, "Member 'BaseInventory_C_SetSelectBlankText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.GetSortRule
// 0x0028 (0x0028 - 0x0000)
struct BaseInventory_C_GetSortRule final
{
public:
	ESBItemSortType                               SortType;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A65[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCategoryModeName_ReturnValue;          // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedIndex_ReturnValue;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidTypeAFilterModefi_ReturnValue;       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A66[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedIndex_ReturnValue_1;           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_GetSortType_Array_Element;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A67[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSortMode_ModeNum;                      // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedIndex_ReturnValue_2;           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_Get_Inventory_Sort_Rule_SortType;         // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               K2Node_Select_Default;                             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_GetSortRule) == 0x000004, "Wrong alignment on BaseInventory_C_GetSortRule");
static_assert(sizeof(BaseInventory_C_GetSortRule) == 0x000028, "Wrong size on BaseInventory_C_GetSortRule");
static_assert(offsetof(BaseInventory_C_GetSortRule, SortType) == 0x000000, "Member 'BaseInventory_C_GetSortRule::SortType' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortRule, Temp_bool_Variable) == 0x000001, "Member 'BaseInventory_C_GetSortRule::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortRule, CallFunc_GetCategoryModeName_ReturnValue) == 0x000004, "Member 'BaseInventory_C_GetSortRule::CallFunc_GetCategoryModeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortRule, CallFunc_GetSelectedIndex_ReturnValue) == 0x00000C, "Member 'BaseInventory_C_GetSortRule::CallFunc_GetSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortRule, CallFunc_ValidTypeAFilterModefi_ReturnValue) == 0x000010, "Member 'BaseInventory_C_GetSortRule::CallFunc_ValidTypeAFilterModefi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortRule, CallFunc_GetSelectedIndex_ReturnValue_1) == 0x000014, "Member 'BaseInventory_C_GetSortRule::CallFunc_GetSelectedIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortRule, CallFunc_GetSortType_Array_Element) == 0x000018, "Member 'BaseInventory_C_GetSortRule::CallFunc_GetSortType_Array_Element' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortRule, CallFunc_GetSortMode_ModeNum) == 0x00001C, "Member 'BaseInventory_C_GetSortRule::CallFunc_GetSortMode_ModeNum' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortRule, CallFunc_GetSelectedIndex_ReturnValue_2) == 0x000020, "Member 'BaseInventory_C_GetSortRule::CallFunc_GetSelectedIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortRule, CallFunc_Get_Inventory_Sort_Rule_SortType) == 0x000024, "Member 'BaseInventory_C_GetSortRule::CallFunc_Get_Inventory_Sort_Rule_SortType' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortRule, K2Node_Select_Default) == 0x000025, "Member 'BaseInventory_C_GetSortRule::K2Node_Select_Default' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.GetSortMode
// 0x0018 (0x0018 - 0x0000)
struct BaseInventory_C_GetSortMode final
{
public:
	int32                                         ModeNum;                                           // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInventoryType                                Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_8;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_9;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_10;                             // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_11;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemFilterType                               CallFunc_GetFilterType_FilterType;                 // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A68[0x1];                                     // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Inventory_Sort_Mode_Num_ModeNum;      // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_GetSortMode) == 0x000004, "Wrong alignment on BaseInventory_C_GetSortMode");
static_assert(sizeof(BaseInventory_C_GetSortMode) == 0x000018, "Wrong size on BaseInventory_C_GetSortMode");
static_assert(offsetof(BaseInventory_C_GetSortMode, ModeNum) == 0x000000, "Member 'BaseInventory_C_GetSortMode::ModeNum' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortMode, Temp_byte_Variable) == 0x000004, "Member 'BaseInventory_C_GetSortMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortMode, Temp_bool_Variable) == 0x000005, "Member 'BaseInventory_C_GetSortMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortMode, Temp_bool_Variable_1) == 0x000006, "Member 'BaseInventory_C_GetSortMode::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortMode, Temp_bool_Variable_2) == 0x000007, "Member 'BaseInventory_C_GetSortMode::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortMode, Temp_bool_Variable_3) == 0x000008, "Member 'BaseInventory_C_GetSortMode::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortMode, Temp_bool_Variable_4) == 0x000009, "Member 'BaseInventory_C_GetSortMode::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortMode, Temp_bool_Variable_5) == 0x00000A, "Member 'BaseInventory_C_GetSortMode::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortMode, Temp_bool_Variable_6) == 0x00000B, "Member 'BaseInventory_C_GetSortMode::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortMode, Temp_bool_Variable_7) == 0x00000C, "Member 'BaseInventory_C_GetSortMode::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortMode, Temp_bool_Variable_8) == 0x00000D, "Member 'BaseInventory_C_GetSortMode::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortMode, Temp_bool_Variable_9) == 0x00000E, "Member 'BaseInventory_C_GetSortMode::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortMode, Temp_bool_Variable_10) == 0x00000F, "Member 'BaseInventory_C_GetSortMode::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortMode, Temp_bool_Variable_11) == 0x000010, "Member 'BaseInventory_C_GetSortMode::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortMode, CallFunc_GetFilterType_FilterType) == 0x000011, "Member 'BaseInventory_C_GetSortMode::CallFunc_GetFilterType_FilterType' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortMode, K2Node_Select_Default) == 0x000012, "Member 'BaseInventory_C_GetSortMode::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetSortMode, CallFunc_Get_Inventory_Sort_Mode_Num_ModeNum) == 0x000014, "Member 'BaseInventory_C_GetSortMode::CallFunc_Get_Inventory_Sort_Mode_Num_ModeNum' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.GetFilterType
// 0x004C (0x004C - 0x0000)
struct BaseInventory_C_GetFilterType final
{
public:
	EItemFilterType                               FilterType;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A69[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_1;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_2;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_3;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_4;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_5;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_6;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_7;                              // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_8;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInventoryType                                Temp_byte_Variable_9;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_8;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_9;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_10;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_11;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_12;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_13;                             // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A6A[0x1];                                     // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_10;                             // 0x0024(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_11;                             // 0x0025(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_12;                             // 0x0026(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_13;                             // 0x0027(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_14;                             // 0x0028(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_15;                             // 0x0029(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_16;                             // 0x002A(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A6B[0x1];                                     // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCategoryModeName_ReturnValue;          // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidTypeAFilterModefi_ReturnValue;       // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A6C[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedIndex_ReturnValue;             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               CallFunc_GetFilterBtnType_Filter;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A6D[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedIndex_ReturnValue_1;           // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemFilterType                               K2Node_Select_Default_1;                           // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               K2Node_Select_Default_2;                           // 0x0046(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               K2Node_Select_Default_3;                           // 0x0047(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               K2Node_Select_Default_4;                           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_GetFilterType) == 0x000004, "Wrong alignment on BaseInventory_C_GetFilterType");
static_assert(sizeof(BaseInventory_C_GetFilterType) == 0x00004C, "Wrong size on BaseInventory_C_GetFilterType");
static_assert(offsetof(BaseInventory_C_GetFilterType, FilterType) == 0x000000, "Member 'BaseInventory_C_GetFilterType::FilterType' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_bool_Variable) == 0x000001, "Member 'BaseInventory_C_GetFilterType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_int_Variable) == 0x000004, "Member 'BaseInventory_C_GetFilterType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_byte_Variable) == 0x000008, "Member 'BaseInventory_C_GetFilterType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_byte_Variable_1) == 0x000009, "Member 'BaseInventory_C_GetFilterType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_byte_Variable_2) == 0x00000A, "Member 'BaseInventory_C_GetFilterType::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_byte_Variable_3) == 0x00000B, "Member 'BaseInventory_C_GetFilterType::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_byte_Variable_4) == 0x00000C, "Member 'BaseInventory_C_GetFilterType::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_byte_Variable_5) == 0x00000D, "Member 'BaseInventory_C_GetFilterType::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_byte_Variable_6) == 0x00000E, "Member 'BaseInventory_C_GetFilterType::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_byte_Variable_7) == 0x00000F, "Member 'BaseInventory_C_GetFilterType::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_byte_Variable_8) == 0x000010, "Member 'BaseInventory_C_GetFilterType::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_byte_Variable_9) == 0x000011, "Member 'BaseInventory_C_GetFilterType::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_bool_Variable_1) == 0x000012, "Member 'BaseInventory_C_GetFilterType::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_bool_Variable_2) == 0x000013, "Member 'BaseInventory_C_GetFilterType::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_bool_Variable_3) == 0x000014, "Member 'BaseInventory_C_GetFilterType::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_bool_Variable_4) == 0x000015, "Member 'BaseInventory_C_GetFilterType::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_bool_Variable_5) == 0x000016, "Member 'BaseInventory_C_GetFilterType::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_bool_Variable_6) == 0x000017, "Member 'BaseInventory_C_GetFilterType::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_bool_Variable_7) == 0x000018, "Member 'BaseInventory_C_GetFilterType::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_bool_Variable_8) == 0x000019, "Member 'BaseInventory_C_GetFilterType::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_bool_Variable_9) == 0x00001A, "Member 'BaseInventory_C_GetFilterType::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_bool_Variable_10) == 0x00001B, "Member 'BaseInventory_C_GetFilterType::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_bool_Variable_11) == 0x00001C, "Member 'BaseInventory_C_GetFilterType::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_bool_Variable_12) == 0x00001D, "Member 'BaseInventory_C_GetFilterType::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_bool_Variable_13) == 0x00001E, "Member 'BaseInventory_C_GetFilterType::Temp_bool_Variable_13' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_int_Variable_1) == 0x000020, "Member 'BaseInventory_C_GetFilterType::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_byte_Variable_10) == 0x000024, "Member 'BaseInventory_C_GetFilterType::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_byte_Variable_11) == 0x000025, "Member 'BaseInventory_C_GetFilterType::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_byte_Variable_12) == 0x000026, "Member 'BaseInventory_C_GetFilterType::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_byte_Variable_13) == 0x000027, "Member 'BaseInventory_C_GetFilterType::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_byte_Variable_14) == 0x000028, "Member 'BaseInventory_C_GetFilterType::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_byte_Variable_15) == 0x000029, "Member 'BaseInventory_C_GetFilterType::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, Temp_byte_Variable_16) == 0x00002A, "Member 'BaseInventory_C_GetFilterType::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, CallFunc_GetCategoryModeName_ReturnValue) == 0x00002C, "Member 'BaseInventory_C_GetFilterType::CallFunc_GetCategoryModeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, CallFunc_ValidTypeAFilterModefi_ReturnValue) == 0x000034, "Member 'BaseInventory_C_GetFilterType::CallFunc_ValidTypeAFilterModefi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, CallFunc_GetSelectedIndex_ReturnValue) == 0x000038, "Member 'BaseInventory_C_GetFilterType::CallFunc_GetSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, CallFunc_GetFilterBtnType_Filter) == 0x00003C, "Member 'BaseInventory_C_GetFilterType::CallFunc_GetFilterBtnType_Filter' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, CallFunc_GetSelectedIndex_ReturnValue_1) == 0x000040, "Member 'BaseInventory_C_GetFilterType::CallFunc_GetSelectedIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, K2Node_Select_Default) == 0x000044, "Member 'BaseInventory_C_GetFilterType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, K2Node_Select_Default_1) == 0x000045, "Member 'BaseInventory_C_GetFilterType::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, K2Node_Select_Default_2) == 0x000046, "Member 'BaseInventory_C_GetFilterType::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, K2Node_Select_Default_3) == 0x000047, "Member 'BaseInventory_C_GetFilterType::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetFilterType, K2Node_Select_Default_4) == 0x000048, "Member 'BaseInventory_C_GetFilterType::K2Node_Select_Default_4' has a wrong offset!");

// Function BaseInventory.BaseInventory_C.GetCategoryModeName
// 0x0074 (0x0074 - 0x0000)
struct BaseInventory_C_GetCategoryModeName final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInventoryType                                Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A6E[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_4;                              // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_5;                              // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_6;                              // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_7;                              // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_8;                              // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_9;                              // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_10;                             // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_11;                             // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BaseInventory_C_GetCategoryModeName) == 0x000004, "Wrong alignment on BaseInventory_C_GetCategoryModeName");
static_assert(sizeof(BaseInventory_C_GetCategoryModeName) == 0x000074, "Wrong size on BaseInventory_C_GetCategoryModeName");
static_assert(offsetof(BaseInventory_C_GetCategoryModeName, ReturnValue) == 0x000000, "Member 'BaseInventory_C_GetCategoryModeName::ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetCategoryModeName, Temp_byte_Variable) == 0x000008, "Member 'BaseInventory_C_GetCategoryModeName::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetCategoryModeName, Temp_name_Variable) == 0x00000C, "Member 'BaseInventory_C_GetCategoryModeName::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetCategoryModeName, Temp_name_Variable_1) == 0x000014, "Member 'BaseInventory_C_GetCategoryModeName::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetCategoryModeName, Temp_name_Variable_2) == 0x00001C, "Member 'BaseInventory_C_GetCategoryModeName::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetCategoryModeName, Temp_name_Variable_3) == 0x000024, "Member 'BaseInventory_C_GetCategoryModeName::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetCategoryModeName, Temp_name_Variable_4) == 0x00002C, "Member 'BaseInventory_C_GetCategoryModeName::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetCategoryModeName, Temp_name_Variable_5) == 0x000034, "Member 'BaseInventory_C_GetCategoryModeName::Temp_name_Variable_5' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetCategoryModeName, Temp_name_Variable_6) == 0x00003C, "Member 'BaseInventory_C_GetCategoryModeName::Temp_name_Variable_6' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetCategoryModeName, Temp_name_Variable_7) == 0x000044, "Member 'BaseInventory_C_GetCategoryModeName::Temp_name_Variable_7' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetCategoryModeName, Temp_name_Variable_8) == 0x00004C, "Member 'BaseInventory_C_GetCategoryModeName::Temp_name_Variable_8' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetCategoryModeName, Temp_name_Variable_9) == 0x000054, "Member 'BaseInventory_C_GetCategoryModeName::Temp_name_Variable_9' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetCategoryModeName, Temp_name_Variable_10) == 0x00005C, "Member 'BaseInventory_C_GetCategoryModeName::Temp_name_Variable_10' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetCategoryModeName, Temp_name_Variable_11) == 0x000064, "Member 'BaseInventory_C_GetCategoryModeName::Temp_name_Variable_11' has a wrong offset!");
static_assert(offsetof(BaseInventory_C_GetCategoryModeName, K2Node_Select_Default) == 0x00006C, "Member 'BaseInventory_C_GetCategoryModeName::K2Node_Select_Default' has a wrong offset!");

}

