#pragma once

 

// Package: MailAttachmentAcceptBody

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.ExecuteUbergraph_MailAttachmentAcceptBody
// 0x0128 (0x0128 - 0x0000)
struct MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassExp_ReturnValue;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutName;    // 0x0020(0x0018)()
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutType;    // 0x0038(0x0018)()
	bool                                          CallFunc_Get_Reward_Item_Name_and_Type_OutNoName;  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50AC[0x5];                                     // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0058(0x0018)()
	int32                                         CallFunc_GetExpMax_ReturnValue;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50AD[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0078(0x0018)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50AE[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMailAttachment                      K2Node_CustomEvent_AttachmentData;                 // 0x0098(0x0040)()
	bool                                          Temp_bool_Variable;                                // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50AF[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMoney_ReturnValue;                     // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50B0[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x00E8(0x0018)()
	int32                                         CallFunc_GetMoneyMax_ReturnValue;                  // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50B1[0x3];                                     // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;             // 0x0108(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody) == 0x000008, "Wrong alignment on MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody");
static_assert(sizeof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody) == 0x000128, "Wrong size on MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, EntryPoint) == 0x000000, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::EntryPoint' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, CallFunc_GetClassExp_ReturnValue) == 0x000004, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::CallFunc_GetClassExp_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, CallFunc_Get_Reward_Item_Name_and_Type_OutName) == 0x000020, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::CallFunc_Get_Reward_Item_Name_and_Type_OutName' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, CallFunc_Get_Reward_Item_Name_and_Type_OutType) == 0x000038, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::CallFunc_Get_Reward_Item_Name_and_Type_OutType' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, CallFunc_Get_Reward_Item_Name_and_Type_OutNoName) == 0x000050, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::CallFunc_Get_Reward_Item_Name_and_Type_OutNoName' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000051, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, K2Node_SwitchEnum_CmpSuccess) == 0x000052, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000058, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, CallFunc_GetExpMax_ReturnValue) == 0x000070, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::CallFunc_GetExpMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000078, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, Temp_byte_Variable) == 0x000090, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, Temp_byte_Variable_1) == 0x000091, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, K2Node_CustomEvent_AttachmentData) == 0x000098, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::K2Node_CustomEvent_AttachmentData' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, Temp_bool_Variable) == 0x0000D8, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, CallFunc_GetMoney_ReturnValue) == 0x0000DC, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::CallFunc_GetMoney_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, CallFunc_Add_IntInt_ReturnValue) == 0x0000E0, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, CallFunc_Conv_IntToText_ReturnValue_3) == 0x0000E8, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, CallFunc_GetMoneyMax_ReturnValue) == 0x000100, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::CallFunc_GetMoneyMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, CallFunc_Less_IntInt_ReturnValue) == 0x000104, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, CallFunc_Conv_IntToText_ReturnValue_4) == 0x000108, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody, K2Node_Select_Default) == 0x000120, "Member 'MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody::K2Node_Select_Default' has a wrong offset!");

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.Set Attachment
// 0x0040 (0x0040 - 0x0000)
struct MailAttachmentAcceptBody_C_Set_Attachment final
{
public:
	struct FSBMailAttachment                      Param_AttachmentData;                              // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MailAttachmentAcceptBody_C_Set_Attachment) == 0x000008, "Wrong alignment on MailAttachmentAcceptBody_C_Set_Attachment");
static_assert(sizeof(MailAttachmentAcceptBody_C_Set_Attachment) == 0x000040, "Wrong size on MailAttachmentAcceptBody_C_Set_Attachment");
static_assert(offsetof(MailAttachmentAcceptBody_C_Set_Attachment, Param_AttachmentData) == 0x000000, "Member 'MailAttachmentAcceptBody_C_Set_Attachment::Param_AttachmentData' has a wrong offset!");

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.IsOverflow
// 0x0001 (0x0001 - 0x0000)
struct MailAttachmentAcceptBody_C_IsOverflow final
{
public:
	bool                                          Overflow;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailAttachmentAcceptBody_C_IsOverflow) == 0x000001, "Wrong alignment on MailAttachmentAcceptBody_C_IsOverflow");
static_assert(sizeof(MailAttachmentAcceptBody_C_IsOverflow) == 0x000001, "Wrong size on MailAttachmentAcceptBody_C_IsOverflow");
static_assert(offsetof(MailAttachmentAcceptBody_C_IsOverflow, Overflow) == 0x000000, "Member 'MailAttachmentAcceptBody_C_IsOverflow::Overflow' has a wrong offset!");

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_Item
// 0x0130 (0x0130 - 0x0000)
struct MailAttachmentAcceptBody_C_AttachmentWork_Item final
{
public:
	int32                                         BagSpace;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50B2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                StorageBox;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BagAmount;                                         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50B3[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50B4[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0040(0x0018)()
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue; // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50B5[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0060(0x00D0)()
};
static_assert(alignof(MailAttachmentAcceptBody_C_AttachmentWork_Item) == 0x000008, "Wrong alignment on MailAttachmentAcceptBody_C_AttachmentWork_Item");
static_assert(sizeof(MailAttachmentAcceptBody_C_AttachmentWork_Item) == 0x000130, "Wrong size on MailAttachmentAcceptBody_C_AttachmentWork_Item");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Item, BagSpace) == 0x000000, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Item::BagSpace' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Item, StorageBox) == 0x000008, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Item::StorageBox' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Item, BagAmount) == 0x000010, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Item::BagAmount' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Item, CallFunc_GetCharacterStorage_ReturnValue) == 0x000018, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Item::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Item, CallFunc_Conv_IntToText_ReturnValue) == 0x000020, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Item::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Item, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Item::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Item, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Item::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Item, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000040, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Item::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Item, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue) == 0x000058, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Item::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Item, CallFunc_FindItemMaster_bIsValid) == 0x00005C, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Item::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Item, CallFunc_FindItemMaster_ItemMaster) == 0x000060, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Item::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_Weapon
// 0x0060 (0x0060 - 0x0000)
struct MailAttachmentAcceptBody_C_AttachmentWork_Weapon final
{
public:
	int32                                         Space;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BagAmount;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                EquipmentBag;                                      // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemsNum_ReturnValue;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50B6[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0030(0x0018)()
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailAttachmentAcceptBody_C_AttachmentWork_Weapon) == 0x000008, "Wrong alignment on MailAttachmentAcceptBody_C_AttachmentWork_Weapon");
static_assert(sizeof(MailAttachmentAcceptBody_C_AttachmentWork_Weapon) == 0x000060, "Wrong size on MailAttachmentAcceptBody_C_AttachmentWork_Weapon");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Weapon, Space) == 0x000000, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Weapon::Space' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Weapon, BagAmount) == 0x000004, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Weapon::BagAmount' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Weapon, EquipmentBag) == 0x000008, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Weapon::EquipmentBag' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Weapon, CallFunc_GetItemsNum_ReturnValue) == 0x000010, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Weapon::CallFunc_GetItemsNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Weapon, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Weapon::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Weapon, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000030, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Weapon::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Weapon, CallFunc_GetEquipmentBag_ReturnValue) == 0x000048, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Weapon::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Weapon, CallFunc_GetCapacity_ReturnValue) == 0x000050, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Weapon::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Weapon, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Weapon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Weapon, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Weapon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.SetCountOnly
// 0x0005 (0x0005 - 0x0000)
struct MailAttachmentAcceptBody_C_SetCountOnly final
{
public:
	bool                                          CountOnly;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MailAttachmentAcceptBody_C_SetCountOnly) == 0x000001, "Wrong alignment on MailAttachmentAcceptBody_C_SetCountOnly");
static_assert(sizeof(MailAttachmentAcceptBody_C_SetCountOnly) == 0x000005, "Wrong size on MailAttachmentAcceptBody_C_SetCountOnly");
static_assert(offsetof(MailAttachmentAcceptBody_C_SetCountOnly, CountOnly) == 0x000000, "Member 'MailAttachmentAcceptBody_C_SetCountOnly::CountOnly' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_SetCountOnly, Temp_bool_Variable) == 0x000001, "Member 'MailAttachmentAcceptBody_C_SetCountOnly::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_SetCountOnly, Temp_byte_Variable) == 0x000002, "Member 'MailAttachmentAcceptBody_C_SetCountOnly::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_SetCountOnly, Temp_byte_Variable_1) == 0x000003, "Member 'MailAttachmentAcceptBody_C_SetCountOnly::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_SetCountOnly, K2Node_Select_Default) == 0x000004, "Member 'MailAttachmentAcceptBody_C_SetCountOnly::K2Node_Select_Default' has a wrong offset!");

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.SetStorageSize
// 0x0038 (0x0038 - 0x0000)
struct MailAttachmentAcceptBody_C_SetStorageSize final
{
public:
	int32                                         SizeNum;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CountNum;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0020(0x0018)()
};
static_assert(alignof(MailAttachmentAcceptBody_C_SetStorageSize) == 0x000008, "Wrong alignment on MailAttachmentAcceptBody_C_SetStorageSize");
static_assert(sizeof(MailAttachmentAcceptBody_C_SetStorageSize) == 0x000038, "Wrong size on MailAttachmentAcceptBody_C_SetStorageSize");
static_assert(offsetof(MailAttachmentAcceptBody_C_SetStorageSize, SizeNum) == 0x000000, "Member 'MailAttachmentAcceptBody_C_SetStorageSize::SizeNum' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_SetStorageSize, CountNum) == 0x000004, "Member 'MailAttachmentAcceptBody_C_SetStorageSize::CountNum' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_SetStorageSize, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'MailAttachmentAcceptBody_C_SetStorageSize::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_SetStorageSize, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000020, "Member 'MailAttachmentAcceptBody_C_SetStorageSize::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.SetAccept
// 0x0020 (0x0020 - 0x0000)
struct MailAttachmentAcceptBody_C_SetAccept final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50B7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(MailAttachmentAcceptBody_C_SetAccept) == 0x000008, "Wrong alignment on MailAttachmentAcceptBody_C_SetAccept");
static_assert(sizeof(MailAttachmentAcceptBody_C_SetAccept) == 0x000020, "Wrong size on MailAttachmentAcceptBody_C_SetAccept");
static_assert(offsetof(MailAttachmentAcceptBody_C_SetAccept, Count) == 0x000000, "Member 'MailAttachmentAcceptBody_C_SetAccept::Count' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_SetAccept, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'MailAttachmentAcceptBody_C_SetAccept::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_Orb
// 0x0048 (0x0048 - 0x0000)
struct MailAttachmentAcceptBody_C_AttachmentWork_Orb final
{
public:
	int32                                         OrbCountMax;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NowOrbCount;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0020(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRoseOrbMax_ReturnValue;                // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50B8[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRoseOrbFree_ReturnValue;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MailAttachmentAcceptBody_C_AttachmentWork_Orb) == 0x000008, "Wrong alignment on MailAttachmentAcceptBody_C_AttachmentWork_Orb");
static_assert(sizeof(MailAttachmentAcceptBody_C_AttachmentWork_Orb) == 0x000048, "Wrong size on MailAttachmentAcceptBody_C_AttachmentWork_Orb");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Orb, OrbCountMax) == 0x000000, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Orb::OrbCountMax' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Orb, NowOrbCount) == 0x000004, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Orb::NowOrbCount' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Orb, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Orb::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Orb, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000020, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Orb::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Orb, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Orb::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Orb, CallFunc_GetRoseOrbMax_ReturnValue) == 0x00003C, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Orb::CallFunc_GetRoseOrbMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Orb, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Orb::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Orb, CallFunc_GetRoseOrbFree_ReturnValue) == 0x000044, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Orb::CallFunc_GetRoseOrbFree_ReturnValue' has a wrong offset!");

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.GetOverflowType
// 0x0004 (0x0004 - 0x0000)
struct MailAttachmentAcceptBody_C_GetOverflowType final
{
public:
	int32                                         Type;                                              // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MailAttachmentAcceptBody_C_GetOverflowType) == 0x000004, "Wrong alignment on MailAttachmentAcceptBody_C_GetOverflowType");
static_assert(sizeof(MailAttachmentAcceptBody_C_GetOverflowType) == 0x000004, "Wrong size on MailAttachmentAcceptBody_C_GetOverflowType");
static_assert(offsetof(MailAttachmentAcceptBody_C_GetOverflowType, Type) == 0x000000, "Member 'MailAttachmentAcceptBody_C_GetOverflowType::Type' has a wrong offset!");

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_Recipe
// 0x0030 (0x0030 - 0x0000)
struct MailAttachmentAcceptBody_C_AttachmentWork_Recipe final
{
public:
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCraftComponent*                CallFunc_GetCraftComponent_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLearnedRecipeSet_ReturnValue;           // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50B9[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCraftComponent*                CallFunc_GetCraftComponent_ReturnValue_1;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLearned_ReturnValue;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailAttachmentAcceptBody_C_AttachmentWork_Recipe) == 0x000008, "Wrong alignment on MailAttachmentAcceptBody_C_AttachmentWork_Recipe");
static_assert(sizeof(MailAttachmentAcceptBody_C_AttachmentWork_Recipe) == 0x000030, "Wrong size on MailAttachmentAcceptBody_C_AttachmentWork_Recipe");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Recipe, CallFunc_GetSBPlayerController_ReturnValue) == 0x000000, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Recipe::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Recipe, CallFunc_GetCraftComponent_ReturnValue) == 0x000008, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Recipe::CallFunc_GetCraftComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Recipe, CallFunc_Max_ReturnValue) == 0x000010, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Recipe::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Recipe, CallFunc_IsLearnedRecipeSet_ReturnValue) == 0x000014, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Recipe::CallFunc_IsLearnedRecipeSet_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Recipe, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000018, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Recipe::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Recipe, CallFunc_GetCraftComponent_ReturnValue_1) == 0x000020, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Recipe::CallFunc_GetCraftComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Recipe, CallFunc_IsLearned_ReturnValue) == 0x000028, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Recipe::CallFunc_IsLearned_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Recipe, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000029, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Recipe::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_Emote
// 0x0008 (0x0008 - 0x0000)
struct MailAttachmentAcceptBody_C_AttachmentWork_Emote final
{
public:
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerEmotePossession_ReturnValue;      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailAttachmentAcceptBody_C_AttachmentWork_Emote) == 0x000004, "Wrong alignment on MailAttachmentAcceptBody_C_AttachmentWork_Emote");
static_assert(sizeof(MailAttachmentAcceptBody_C_AttachmentWork_Emote) == 0x000008, "Wrong size on MailAttachmentAcceptBody_C_AttachmentWork_Emote");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Emote, CallFunc_Max_ReturnValue) == 0x000000, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Emote::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Emote, CallFunc_IsPlayerEmotePossession_ReturnValue) == 0x000004, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Emote::CallFunc_IsPlayerEmotePossession_ReturnValue' has a wrong offset!");

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_Stamp
// 0x0040 (0x0040 - 0x0000)
struct MailAttachmentAcceptBody_C_AttachmentWork_Stamp final
{
public:
	class USBPlayerStampComponent*                StampComponent;                                    // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50BA[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerStampComponent*                CallFunc_GetPlayerStampComponent_ReturnValue;      // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerStampPossession_ReturnValue;      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50BB[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStampComponent*                CallFunc_GetPlayerStampComponent_ReturnValue_1;    // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckCategoryStampComplete_ReturnValue;   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailAttachmentAcceptBody_C_AttachmentWork_Stamp) == 0x000008, "Wrong alignment on MailAttachmentAcceptBody_C_AttachmentWork_Stamp");
static_assert(sizeof(MailAttachmentAcceptBody_C_AttachmentWork_Stamp) == 0x000040, "Wrong size on MailAttachmentAcceptBody_C_AttachmentWork_Stamp");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Stamp, StampComponent) == 0x000000, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Stamp::StampComponent' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Stamp, CallFunc_Max_ReturnValue) == 0x000008, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Stamp::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Stamp, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000C, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Stamp::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Stamp, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000010, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Stamp::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Stamp, CallFunc_GetValidPlayerState_ReturnValue) == 0x000018, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Stamp::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Stamp, CallFunc_GetPlayerStampComponent_ReturnValue) == 0x000020, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Stamp::CallFunc_GetPlayerStampComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Stamp, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Stamp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Stamp, CallFunc_IsPlayerStampPossession_ReturnValue) == 0x000029, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Stamp::CallFunc_IsPlayerStampPossession_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Stamp, CallFunc_GetPlayerStampComponent_ReturnValue_1) == 0x000030, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Stamp::CallFunc_GetPlayerStampComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Stamp, CallFunc_CheckCategoryStampComplete_ReturnValue) == 0x000038, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Stamp::CallFunc_CheckCategoryStampComplete_ReturnValue' has a wrong offset!");

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_Achievement
// 0x0020 (0x0020 - 0x0000)
struct MailAttachmentAcceptBody_C_AttachmentWork_Achievement final
{
public:
	class USBNetworkDataCache*                    DataCache;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAchievementPossession_ReturnValue;      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50BC[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBNetworkDataCache*              CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0018(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MailAttachmentAcceptBody_C_AttachmentWork_Achievement) == 0x000008, "Wrong alignment on MailAttachmentAcceptBody_C_AttachmentWork_Achievement");
static_assert(sizeof(MailAttachmentAcceptBody_C_AttachmentWork_Achievement) == 0x000020, "Wrong size on MailAttachmentAcceptBody_C_AttachmentWork_Achievement");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Achievement, DataCache) == 0x000000, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Achievement::DataCache' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Achievement, CallFunc_IsAchievementPossession_ReturnValue) == 0x000008, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Achievement::CallFunc_IsAchievementPossession_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Achievement, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Achievement::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Achievement, CallFunc_GetSBPlayerController_ReturnValue) == 0x000010, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Achievement::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Achievement, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000018, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Achievement::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_Token
// 0x0128 (0x0128 - 0x0000)
struct MailAttachmentAcceptBody_C_AttachmentWork_Token final
{
public:
	struct FMasterToken                           MasterData;                                        // 0x0000(0x0058)(Edit, BlueprintVisible)
	struct FSBCharacterToken                      Token;                                             // 0x0058(0x000C)(Edit, BlueprintVisible, NoDestructor)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50BD[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0070(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50BE[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50BF[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00A0(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50C0[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterToken                      CallFunc_GetToken_ReturnValue;                     // 0x00BC(0x000C)(NoDestructor)
	bool                                          CallFunc_BP_FindMasterToken_bIsValid;              // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50C1[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_BP_FindMasterToken_ReturnValue;           // 0x00D0(0x0058)()
};
static_assert(alignof(MailAttachmentAcceptBody_C_AttachmentWork_Token) == 0x000008, "Wrong alignment on MailAttachmentAcceptBody_C_AttachmentWork_Token");
static_assert(sizeof(MailAttachmentAcceptBody_C_AttachmentWork_Token) == 0x000128, "Wrong size on MailAttachmentAcceptBody_C_AttachmentWork_Token");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Token, MasterData) == 0x000000, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Token::MasterData' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Token, Token) == 0x000058, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Token::Token' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Token, CallFunc_Max_ReturnValue) == 0x000064, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Token::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Token, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000068, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Token::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Token, CallFunc_Conv_IntToText_ReturnValue) == 0x000070, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Token::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Token, CallFunc_GetMasterDataManager_IsValid) == 0x000088, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Token::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Token, CallFunc_GetMasterDataManager_ReturnValue) == 0x000090, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Token::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Token, CallFunc_Add_IntInt_ReturnValue) == 0x000098, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Token::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Token, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000A0, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Token::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Token, CallFunc_Less_IntInt_ReturnValue) == 0x0000B8, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Token::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Token, CallFunc_GetToken_ReturnValue) == 0x0000BC, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Token::CallFunc_GetToken_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Token, CallFunc_BP_FindMasterToken_bIsValid) == 0x0000C8, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Token::CallFunc_BP_FindMasterToken_bIsValid' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Token, CallFunc_BP_FindMasterToken_ReturnValue) == 0x0000D0, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Token::CallFunc_BP_FindMasterToken_ReturnValue' has a wrong offset!");

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.IsDuplicate
// 0x0001 (0x0001 - 0x0000)
struct MailAttachmentAcceptBody_C_IsDuplicate final
{
public:
	bool                                          Duplicate;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailAttachmentAcceptBody_C_IsDuplicate) == 0x000001, "Wrong alignment on MailAttachmentAcceptBody_C_IsDuplicate");
static_assert(sizeof(MailAttachmentAcceptBody_C_IsDuplicate) == 0x000001, "Wrong size on MailAttachmentAcceptBody_C_IsDuplicate");
static_assert(offsetof(MailAttachmentAcceptBody_C_IsDuplicate, Duplicate) == 0x000000, "Member 'MailAttachmentAcceptBody_C_IsDuplicate::Duplicate' has a wrong offset!");

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_BPPoint
// 0x0048 (0x0048 - 0x0000)
struct MailAttachmentAcceptBody_C_AttachmentWork_BPPoint final
{
public:
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBPPointSafeMax_ReturnValue;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	int32                                         CallFunc_GetBPPoint_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50C2[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0030(0x0018)()
};
static_assert(alignof(MailAttachmentAcceptBody_C_AttachmentWork_BPPoint) == 0x000008, "Wrong alignment on MailAttachmentAcceptBody_C_AttachmentWork_BPPoint");
static_assert(sizeof(MailAttachmentAcceptBody_C_AttachmentWork_BPPoint) == 0x000048, "Wrong size on MailAttachmentAcceptBody_C_AttachmentWork_BPPoint");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_BPPoint, CallFunc_Max_ReturnValue) == 0x000000, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_BPPoint::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_BPPoint, CallFunc_GetBPPointSafeMax_ReturnValue) == 0x000004, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_BPPoint::CallFunc_GetBPPointSafeMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_BPPoint, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_BPPoint::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_BPPoint, CallFunc_GetBPPoint_ReturnValue) == 0x000020, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_BPPoint::CallFunc_GetBPPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_BPPoint, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_BPPoint::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_BPPoint, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_BPPoint::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_BPPoint, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000030, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_BPPoint::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_AdventureBoard
// 0x0050 (0x0050 - 0x0000)
struct MailAttachmentAcceptBody_C_AttachmentWork_AdventureBoard final
{
public:
	struct FSBAdventureBoardParam                 BoardData;                                         // 0x0000(0x0018)(Edit, BlueprintVisible)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50C3[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAdventureBoardComponent*       CallFunc_GetAdventureBoardComponent_ReturnValue;   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBAdventureBoardParam                 CallFunc_BP_GetBoardParam_OutOBoardParam;          // 0x0030(0x0018)()
	bool                                          CallFunc_BP_GetBoardParam_ReturnValue;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailAttachmentAcceptBody_C_AttachmentWork_AdventureBoard) == 0x000008, "Wrong alignment on MailAttachmentAcceptBody_C_AttachmentWork_AdventureBoard");
static_assert(sizeof(MailAttachmentAcceptBody_C_AttachmentWork_AdventureBoard) == 0x000050, "Wrong size on MailAttachmentAcceptBody_C_AttachmentWork_AdventureBoard");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventureBoard, BoardData) == 0x000000, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventureBoard::BoardData' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventureBoard, CallFunc_Max_ReturnValue) == 0x000018, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventureBoard::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventureBoard, CallFunc_GetSBPlayerController_ReturnValue) == 0x000020, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventureBoard::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventureBoard, CallFunc_GetAdventureBoardComponent_ReturnValue) == 0x000028, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventureBoard::CallFunc_GetAdventureBoardComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventureBoard, CallFunc_BP_GetBoardParam_OutOBoardParam) == 0x000030, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventureBoard::CallFunc_BP_GetBoardParam_OutOBoardParam' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventureBoard, CallFunc_BP_GetBoardParam_ReturnValue) == 0x000048, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventureBoard::CallFunc_BP_GetBoardParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventureBoard, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000049, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventureBoard::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_LiquidMemory
// 0x00F0 (0x00F0 - 0x0000)
struct MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory final
{
public:
	int32                                         TmpAmount;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxLiquidMemoryLevel;                              // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NowLiquidMemoryLevel;                              // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50C4[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50C5[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50C6[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50C7[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0058(0x0018)()
	bool                                          CallFunc_BP_FindLiquidMemoryMaster_IsExists;       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50C8[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryMasterData              CallFunc_BP_FindLiquidMemoryMaster_ReturnValue;    // 0x0078(0x0038)()
	bool                                          CallFunc_FindOwnLiquidMemoryInfo_OutExists;        // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50C9[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_FindOwnLiquidMemoryInfo_ReturnValue;      // 0x00B8(0x0028)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory) == 0x000008, "Wrong alignment on MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory");
static_assert(sizeof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory) == 0x0000F0, "Wrong size on MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, TmpAmount) == 0x000000, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::TmpAmount' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, MaxLiquidMemoryLevel) == 0x000004, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::MaxLiquidMemoryLevel' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, NowLiquidMemoryLevel) == 0x000008, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::NowLiquidMemoryLevel' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, Temp_int_Variable) == 0x00000C, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, Temp_bool_Variable) == 0x000028, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, CallFunc_MakeLiteralByte_ReturnValue) == 0x000030, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, CallFunc_Greater_IntInt_ReturnValue) == 0x000031, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000034, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, CallFunc_GetMasterDataManager_IsValid) == 0x000038, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, CallFunc_GetMasterDataManager_ReturnValue) == 0x000040, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, CallFunc_GetNetworkDataCache_IsValid) == 0x000048, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000050, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000058, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, CallFunc_BP_FindLiquidMemoryMaster_IsExists) == 0x000070, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::CallFunc_BP_FindLiquidMemoryMaster_IsExists' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, CallFunc_BP_FindLiquidMemoryMaster_ReturnValue) == 0x000078, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::CallFunc_BP_FindLiquidMemoryMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, CallFunc_FindOwnLiquidMemoryInfo_OutExists) == 0x0000B0, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::CallFunc_FindOwnLiquidMemoryInfo_OutExists' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, CallFunc_FindOwnLiquidMemoryInfo_ReturnValue) == 0x0000B8, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::CallFunc_FindOwnLiquidMemoryInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, CallFunc_Array_Length_ReturnValue) == 0x0000E0, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, K2Node_Select_Default) == 0x0000E4, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, CallFunc_BooleanAND_ReturnValue) == 0x0000E8, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000E9, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_LiquidMemory::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_Award
// 0x0030 (0x0030 - 0x0000)
struct MailAttachmentAcceptBody_C_AttachmentWork_Award final
{
public:
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50CA[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_GetAwardIdList_ReturnValue;               // 0x0010(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindAwardsMaster_bIsValid;                // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50CB[0x1];                                     // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterAwardsData                    CallFunc_FindAwardsMaster_ReturnValue;             // 0x0024(0x000C)(NoDestructor)
};
static_assert(alignof(MailAttachmentAcceptBody_C_AttachmentWork_Award) == 0x000008, "Wrong alignment on MailAttachmentAcceptBody_C_AttachmentWork_Award");
static_assert(sizeof(MailAttachmentAcceptBody_C_AttachmentWork_Award) == 0x000030, "Wrong size on MailAttachmentAcceptBody_C_AttachmentWork_Award");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Award, CallFunc_GetNetworkDataCache_IsValid) == 0x000000, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Award::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Award, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000008, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Award::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Award, CallFunc_GetAwardIdList_ReturnValue) == 0x000010, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Award::CallFunc_GetAwardIdList_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Award, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000020, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Award::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Award, CallFunc_Array_Contains_ReturnValue) == 0x000021, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Award::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Award, CallFunc_FindAwardsMaster_bIsValid) == 0x000022, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Award::CallFunc_FindAwardsMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_Award, CallFunc_FindAwardsMaster_ReturnValue) == 0x000024, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_Award::CallFunc_FindAwardsMaster_ReturnValue' has a wrong offset!");

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_AdventurerCardDecolations
// 0x0068 (0x0068 - 0x0000)
struct MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations final
{
public:
	TArray<int32>                                 TmpDecorationIds;                                  // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50CC[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDecorationData>                CallFunc_GetAdventureCardDecorationDataList_ReturnValue; // 0x0028(0x0010)(ReferenceParm)
	struct FDecorationData                        CallFunc_Array_Get_Item;                           // 0x0038(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindAdventureCardDecorationMaster_bIsValid; // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50CD[0x1];                                     // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterAdventureCardDecoration       CallFunc_FindAdventureCardDecorationMaster_ReturnValue; // 0x0054(0x0010)(NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations) == 0x000008, "Wrong alignment on MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations");
static_assert(sizeof(MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations) == 0x000068, "Wrong size on MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations, TmpDecorationIds) == 0x000000, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations::TmpDecorationIds' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations, Temp_int_Array_Index_Variable) == 0x000010, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations, CallFunc_GetNetworkDataCache_IsValid) == 0x00001C, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000020, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations, CallFunc_GetAdventureCardDecorationDataList_ReturnValue) == 0x000028, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations::CallFunc_GetAdventureCardDecorationDataList_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations, CallFunc_Array_Get_Item) == 0x000038, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations, CallFunc_Array_AddUnique_ReturnValue) == 0x00004C, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000051, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations, CallFunc_FindAdventureCardDecorationMaster_bIsValid) == 0x000052, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations::CallFunc_FindAdventureCardDecorationMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations, CallFunc_FindAdventureCardDecorationMaster_ReturnValue) == 0x000054, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations::CallFunc_FindAdventureCardDecorationMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations, CallFunc_Array_Contains_ReturnValue) == 0x000064, "Member 'MailAttachmentAcceptBody_C_AttachmentWork_AdventurerCardDecolations::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

}

