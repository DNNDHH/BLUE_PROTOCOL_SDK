#pragma once

 

// Package: ProbabilityDisplay_GashaBonusListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem
// 0x0240 (0x0240 - 0x0000)
struct ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E7F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ProductDetailMenu_C*               CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E80[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UUMG_ProductDetailMenu_C* Sender)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E81[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ItemIndex;                      // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             K2Node_CustomEvent_ItemType;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E82[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Requirement;                    // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Amount;                         // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_limit;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsStepUp;                       // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E83[0x2];                                     // 0x005E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E84[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutName;    // 0x0098(0x0018)()
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutType;    // 0x00B0(0x0018)()
	bool                                          CallFunc_Get_Reward_Item_Name_and_Type_OutNoName;  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E85[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E86[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0108(0x00D0)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01D8(0x0018)()
	int32                                         Temp_int_Variable_3;                               // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x01F4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0204(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0205(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E87[0x2];                                     // 0x0206(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_2;                           // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E88[0x7];                                     // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ProductDetailMenu_C*               K2Node_CustomEvent_Sender;                         // 0x0218(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIcon_C*                          K2Node_ComponentBoundEvent_Sender;                 // 0x0220(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E89[0x2];                                     // 0x022A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UUMG_ProductDetailMenu_C* Sender)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x022C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x023C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidGashaBonusDetail_ReturnValue;        // 0x023D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x023E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidGashaBonusDetail_ReturnValue_1;      // 0x023F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem) == 0x000008, "Wrong alignment on ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem");
static_assert(sizeof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem) == 0x000240, "Wrong size on ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, EntryPoint) == 0x000000, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, Temp_bool_Variable) == 0x000004, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_Create_ReturnValue) == 0x000008, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, Temp_bool_Variable_1) == 0x000010, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, Temp_int_Variable) == 0x000024, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, Temp_int_Variable_1) == 0x000028, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x00002C, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, Temp_int_Variable_2) == 0x000030, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, K2Node_CustomEvent_ItemIndex) == 0x000034, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::K2Node_CustomEvent_ItemIndex' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, K2Node_CustomEvent_ItemType) == 0x000038, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::K2Node_CustomEvent_ItemType' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, K2Node_CustomEvent_Requirement) == 0x000040, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::K2Node_CustomEvent_Requirement' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, K2Node_CustomEvent_Index) == 0x000050, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, K2Node_CustomEvent_Amount) == 0x000054, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::K2Node_CustomEvent_Amount' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, K2Node_CustomEvent_limit) == 0x000058, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::K2Node_CustomEvent_limit' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, K2Node_CustomEvent_IsStepUp) == 0x00005C, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::K2Node_CustomEvent_IsStepUp' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00005D, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_Conv_IntToString_ReturnValue) == 0x000060, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, K2Node_Select_Default) == 0x000070, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_Percent_IntInt_ReturnValue) == 0x000074, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000090, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_Get_Reward_Item_Name_and_Type_OutName) == 0x000098, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_Get_Reward_Item_Name_and_Type_OutName' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_Get_Reward_Item_Name_and_Type_OutType) == 0x0000B0, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_Get_Reward_Item_Name_and_Type_OutType' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_Get_Reward_Item_Name_and_Type_OutNoName) == 0x0000C8, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_Get_Reward_Item_Name_and_Type_OutNoName' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_Conv_TextToString_ReturnValue) == 0x0000D0, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_Concat_StrStr_ReturnValue) == 0x0000E0, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000F0, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_FindItemMaster_bIsValid) == 0x000100, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_FindItemMaster_ItemMaster) == 0x000108, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001D8, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, Temp_int_Variable_3) == 0x0001F0, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, K2Node_MakeStruct_LinearColor) == 0x0001F4, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, Temp_bool_Variable_2) == 0x000204, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, Temp_bool_Variable_3) == 0x000205, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, K2Node_Select_Default_1) == 0x000208, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, K2Node_Select_Default_2) == 0x00020C, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000210, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, K2Node_CustomEvent_Sender) == 0x000218, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, K2Node_ComponentBoundEvent_Sender) == 0x000220, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_IsValid_ReturnValue) == 0x000228, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_IsValid_ReturnValue_1) == 0x000229, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, K2Node_CreateDelegate_OutputDelegate_1) == 0x00022C, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00023C, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_ValidGashaBonusDetail_ReturnValue) == 0x00023D, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_ValidGashaBonusDetail_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, K2Node_Select_Default_3) == 0x00023E, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem, CallFunc_ValidGashaBonusDetail_ReturnValue_1) == 0x00023F, "Member 'ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem::CallFunc_ValidGashaBonusDetail_ReturnValue_1' has a wrong offset!");

// Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.BndEvt__ProbabilityDisplay_GashaBonusListItem_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ProbabilityDisplay_GashaBonusListItem_C_BndEvt__ProbabilityDisplay_GashaBonusListItem_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature final
{
public:
	class UCommonIcon_C*                          Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ProbabilityDisplay_GashaBonusListItem_C_BndEvt__ProbabilityDisplay_GashaBonusListItem_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on ProbabilityDisplay_GashaBonusListItem_C_BndEvt__ProbabilityDisplay_GashaBonusListItem_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(sizeof(ProbabilityDisplay_GashaBonusListItem_C_BndEvt__ProbabilityDisplay_GashaBonusListItem_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000008, "Wrong size on ProbabilityDisplay_GashaBonusListItem_C_BndEvt__ProbabilityDisplay_GashaBonusListItem_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_BndEvt__ProbabilityDisplay_GashaBonusListItem_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature, Sender) == 0x000000, "Member 'ProbabilityDisplay_GashaBonusListItem_C_BndEvt__ProbabilityDisplay_GashaBonusListItem_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature::Sender' has a wrong offset!");

// Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.OnClose_Event
// 0x0008 (0x0008 - 0x0000)
struct ProbabilityDisplay_GashaBonusListItem_C_OnClose_Event final
{
public:
	class UUMG_ProductDetailMenu_C*               Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ProbabilityDisplay_GashaBonusListItem_C_OnClose_Event) == 0x000008, "Wrong alignment on ProbabilityDisplay_GashaBonusListItem_C_OnClose_Event");
static_assert(sizeof(ProbabilityDisplay_GashaBonusListItem_C_OnClose_Event) == 0x000008, "Wrong size on ProbabilityDisplay_GashaBonusListItem_C_OnClose_Event");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_OnClose_Event, Sender) == 0x000000, "Member 'ProbabilityDisplay_GashaBonusListItem_C_OnClose_Event::Sender' has a wrong offset!");

// Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.Setup
// 0x0028 (0x0028 - 0x0000)
struct ProbabilityDisplay_GashaBonusListItem_C_Setup final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             ItemType;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E8A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Requirement;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Amount;                                      // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Limit;                                             // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsStepUp;                                          // 0x0024(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ProbabilityDisplay_GashaBonusListItem_C_Setup) == 0x000008, "Wrong alignment on ProbabilityDisplay_GashaBonusListItem_C_Setup");
static_assert(sizeof(ProbabilityDisplay_GashaBonusListItem_C_Setup) == 0x000028, "Wrong size on ProbabilityDisplay_GashaBonusListItem_C_Setup");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_Setup, ItemIndex) == 0x000000, "Member 'ProbabilityDisplay_GashaBonusListItem_C_Setup::ItemIndex' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_Setup, ItemType) == 0x000004, "Member 'ProbabilityDisplay_GashaBonusListItem_C_Setup::ItemType' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_Setup, Requirement) == 0x000008, "Member 'ProbabilityDisplay_GashaBonusListItem_C_Setup::Requirement' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_Setup, Param_Index) == 0x000018, "Member 'ProbabilityDisplay_GashaBonusListItem_C_Setup::Param_Index' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_Setup, Param_Amount) == 0x00001C, "Member 'ProbabilityDisplay_GashaBonusListItem_C_Setup::Param_Amount' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_Setup, Limit) == 0x000020, "Member 'ProbabilityDisplay_GashaBonusListItem_C_Setup::Limit' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_GashaBonusListItem_C_Setup, IsStepUp) == 0x000024, "Member 'ProbabilityDisplay_GashaBonusListItem_C_Setup::IsStepUp' has a wrong offset!");

}

