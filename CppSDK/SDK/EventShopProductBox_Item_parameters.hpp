#pragma once

 

// Package: EventShopProductBox_Item

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnBtnSelected__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct EventShopProductBox_Item_C_OnBtnSelected__DelegateSignature final
{
public:
	class UEventShopProductBox_Item_C*            Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOnNumberInput;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopProductBox_Item_C_OnBtnSelected__DelegateSignature) == 0x000008, "Wrong alignment on EventShopProductBox_Item_C_OnBtnSelected__DelegateSignature");
static_assert(sizeof(EventShopProductBox_Item_C_OnBtnSelected__DelegateSignature) == 0x000010, "Wrong size on EventShopProductBox_Item_C_OnBtnSelected__DelegateSignature");
static_assert(offsetof(EventShopProductBox_Item_C_OnBtnSelected__DelegateSignature, Item) == 0x000000, "Member 'EventShopProductBox_Item_C_OnBtnSelected__DelegateSignature::Item' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_OnBtnSelected__DelegateSignature, bOnNumberInput) == 0x000008, "Member 'EventShopProductBox_Item_C_OnBtnSelected__DelegateSignature::bOnNumberInput' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnAdd__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct EventShopProductBox_Item_C_OnAdd__DelegateSignature final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Item_C_OnAdd__DelegateSignature) == 0x000004, "Wrong alignment on EventShopProductBox_Item_C_OnAdd__DelegateSignature");
static_assert(sizeof(EventShopProductBox_Item_C_OnAdd__DelegateSignature) == 0x000004, "Wrong size on EventShopProductBox_Item_C_OnAdd__DelegateSignature");
static_assert(offsetof(EventShopProductBox_Item_C_OnAdd__DelegateSignature, Num) == 0x000000, "Member 'EventShopProductBox_Item_C_OnAdd__DelegateSignature::Num' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnSub__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct EventShopProductBox_Item_C_OnSub__DelegateSignature final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Item_C_OnSub__DelegateSignature) == 0x000004, "Wrong alignment on EventShopProductBox_Item_C_OnSub__DelegateSignature");
static_assert(sizeof(EventShopProductBox_Item_C_OnSub__DelegateSignature) == 0x000004, "Wrong size on EventShopProductBox_Item_C_OnSub__DelegateSignature");
static_assert(offsetof(EventShopProductBox_Item_C_OnSub__DelegateSignature, Num) == 0x000000, "Member 'EventShopProductBox_Item_C_OnSub__DelegateSignature::Num' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnAddRemake__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct EventShopProductBox_Item_C_OnAddRemake__DelegateSignature final
{
public:
	class UEventShopProductBox_Item_C*            Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Item_C_OnAddRemake__DelegateSignature) == 0x000008, "Wrong alignment on EventShopProductBox_Item_C_OnAddRemake__DelegateSignature");
static_assert(sizeof(EventShopProductBox_Item_C_OnAddRemake__DelegateSignature) == 0x000008, "Wrong size on EventShopProductBox_Item_C_OnAddRemake__DelegateSignature");
static_assert(offsetof(EventShopProductBox_Item_C_OnAddRemake__DelegateSignature, Item) == 0x000000, "Member 'EventShopProductBox_Item_C_OnAddRemake__DelegateSignature::Item' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnSubRemake__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct EventShopProductBox_Item_C_OnSubRemake__DelegateSignature final
{
public:
	class UEventShopProductBox_Item_C*            Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Item_C_OnSubRemake__DelegateSignature) == 0x000008, "Wrong alignment on EventShopProductBox_Item_C_OnSubRemake__DelegateSignature");
static_assert(sizeof(EventShopProductBox_Item_C_OnSubRemake__DelegateSignature) == 0x000008, "Wrong size on EventShopProductBox_Item_C_OnSubRemake__DelegateSignature");
static_assert(offsetof(EventShopProductBox_Item_C_OnSubRemake__DelegateSignature, Item) == 0x000000, "Member 'EventShopProductBox_Item_C_OnSubRemake__DelegateSignature::Item' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.ExecuteUbergraph_EventShopProductBox_Item
// 0x0540 (0x0540 - 0x0000)
struct EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6403[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6404[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Type;                           // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6405[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	int32                                         K2Node_CustomEvent_Stock;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_limit;                          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_1;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6406[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D_1;                 // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6407[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6408[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6409[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00B0(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_640A[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00D0(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_640B[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded_1;                       // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_640C[0x1];                                     // 0x00FB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemType;                       // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_640D[0x1];                                     // 0x0103(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemSetId;                      // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_640E[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetEventShopItemSetMasterById_IsExists; // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_640F[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopItemSetMasterData          CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue; // 0x011C(0x0034)(NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6410[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_DateTimeToTermText_ReturnValue;           // 0x0158(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0170(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6411[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x018C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetAmountNum_Remain;                      // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x01A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x01AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6412[0x5];                                     // 0x01AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01B0(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x01C8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x01F0(0x0028)()
	int32                                         CallFunc_GetStorageRemainNum_Remain;               // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalculateDiscountValue_OutDiscountValue;  // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0220(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6413[0x4];                                     // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0238(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0240(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetSkillId_Exchangeable;                  // 0x0259(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x025A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x025B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x025C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6414[0x3];                                     // 0x025D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              K2Node_CustomEvent_End;                            // 0x0260(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue;             // 0x0268(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue;  // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0271(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0272(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0273(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMasterySkill_ReturnValue;               // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6415[0x3];                                     // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0278(0x0028)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x02A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x02A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x02A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x02A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x02A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x02A7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x02AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x02AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_8;        // 0x02AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_9;        // 0x02AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x02AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x02AF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_5;                  // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_6;                  // 0x02B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x02B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_7;                  // 0x02B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6416[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x02B8(0x0028)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x02E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SwitchHoldType_IsToken;                   // 0x02E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6417[0x5];                                     // 0x02E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x02E8(0x0018)()
	bool                                          CallFunc_ValidShopNotAvailable_ReturnValue;        // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6418[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             K2Node_Select_Default_2;                           // 0x0308(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidShopNotAvailable_ReturnValue_1;      // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0311(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0312(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0313(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6419[0x4];                                     // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default_4;                           // 0x0318(0x0028)()
	bool                                          Temp_bool_Variable_5;                              // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_641A[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_5;                           // 0x0348(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_10;       // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_641B[0x3];                                     // 0x0361(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue_1;                  // 0x0364(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_641C[0x3];                                     // 0x0369(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x036C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x037C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x038C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_641D[0x4];                                     // 0x039C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x03A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsTimerActiveHandle_ReturnValue;       // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_IsTimerActiveHandle_ReturnValue_1;     // 0x03A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_641E[0x2];                                     // 0x03AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x03AC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_641F[0x4];                                     // 0x03BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_3;        // 0x03C0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FSBEventShopProduct                    K2Node_CustomEvent_ProductData;                    // 0x03C8(0x0070)()
	float                                         K2Node_CustomEvent_DiscountRate;                   // 0x0438(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsDiscount;                     // 0x043C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6420[0x3];                                     // 0x043D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTemporallyStorage*                   K2Node_CustomEvent_Item;                           // 0x0440(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   K2Node_CustomEvent_Equip;                          // 0x0448(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   K2Node_CustomEvent_Storage;                        // 0x0450(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   K2Node_CustomEvent_Ornament;                       // 0x0458(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0460(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x0464(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0474(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x0478(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6421[0x3];                                     // 0x0479(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x047C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0480(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0484(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_6;          // 0x0488(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6422[0x3];                                     // 0x0489(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x048C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_4;            // 0x049C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_CheckExchangeLimitNum_LimitNum;           // 0x04AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x04B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsEnabled_ReturnValue_1;               // 0x04B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6423[0x1];                                     // 0x04B3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Num;                            // 0x04B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x04B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsEnabled_ReturnValue_2;               // 0x04BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6424[0x3];                                     // 0x04BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default_6;                           // 0x04C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_4;                    // 0x04D0(0x0028)()
	int32                                         K2Node_CustomEvent_CurrencyType;                   // 0x04F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_TokenId;                        // 0x04FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetTokenIconTexture_Texture;              // 0x0500(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x0528(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0529(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x052A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6425[0x1];                                     // 0x052B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_5;            // 0x052C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Select_Default_7;                           // 0x053C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bTrying;                        // 0x053D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item) == 0x000008, "Wrong alignment on EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item");
static_assert(sizeof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item) == 0x000540, "Wrong size on EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, EntryPoint) == 0x000000, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, Temp_object_Variable) == 0x000010, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_DynamicCast_AsTexture_2D) == 0x000018, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CustomEvent_Type) == 0x000024, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_GetTextFromAsset_ReturnValue) == 0x000030, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CustomEvent_Stock) == 0x000058, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CustomEvent_Stock' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CustomEvent_limit) == 0x00005C, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CustomEvent_limit' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, Temp_object_Variable_1) == 0x000060, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000068, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_DynamicCast_AsTexture_2D_1) == 0x000070, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_DynamicCast_AsTexture_2D_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_Conv_IntToString_ReturnValue) == 0x000080, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_Greater_IntInt_ReturnValue) == 0x000090, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_Concat_StrStr_ReturnValue) == 0x000098, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000A8, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000B0, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0000C8, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_Conv_IntToText_ReturnValue) == 0x0000D0, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x0000E8, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CustomEvent_Loaded_1) == 0x0000F0, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_BooleanAND_ReturnValue) == 0x0000F8, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, Temp_bool_Variable) == 0x0000F9, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000FA, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CustomEvent_ItemType) == 0x0000FC, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CustomEvent_ItemType' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_Conv_IntToByte_ReturnValue) == 0x000100, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000101, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_GetValidValue_ReturnValue) == 0x000102, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CustomEvent_ItemSetId) == 0x000104, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CustomEvent_ItemSetId' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_GetMasterDataManager_IsValid) == 0x000108, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_GetMasterDataManager_ReturnValue) == 0x000110, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_BP_GetEventShopItemSetMasterById_IsExists) == 0x000118, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_BP_GetEventShopItemSetMasterById_IsExists' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue) == 0x00011C, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, Temp_bool_Variable_1) == 0x000150, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_DateTimeToTermText_ReturnValue) == 0x000158, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_DateTimeToTermText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000170, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_Not_PreBool_ReturnValue) == 0x000188, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CreateDelegate_OutputDelegate) == 0x00018C, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_GetAmountNum_Remain) == 0x00019C, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_GetAmountNum_Remain' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0001A0, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0001A8, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x0001A9, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x0001AA, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001B0, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_MakeStruct_SlateColor) == 0x0001C8, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_MakeStruct_SlateColor_1) == 0x0001F0, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_GetStorageRemainNum_Remain) == 0x000218, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_GetStorageRemainNum_Remain' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_CalculateDiscountValue_OutDiscountValue) == 0x00021C, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_CalculateDiscountValue_OutDiscountValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CreateDelegate_OutputDelegate_1) == 0x000220, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_SelectInt_ReturnValue) == 0x000230, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000238, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000240, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000258, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_SetSkillId_Exchangeable) == 0x000259, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_SetSkillId_Exchangeable' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_SwitchEnum_CmpSuccess) == 0x00025A, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_Not_PreBool_ReturnValue_1) == 0x00025B, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, Temp_bool_Variable_2) == 0x00025C, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CustomEvent_End) == 0x000260, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CustomEvent_End' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_DateTimeMinValue_ReturnValue) == 0x000268, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_DateTimeMinValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue) == 0x000270, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_SetDateTime_ReturnValue) == 0x000271, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_Not_PreBool_ReturnValue_2) == 0x000272, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_Select_Default) == 0x000273, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_IsMasterySkill_ReturnValue) == 0x000274, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_IsMasterySkill_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_MakeStruct_SlateColor_2) == 0x000278, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0002A0, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0002A1, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0002A2, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0002A3, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_BooleanOR_ReturnValue) == 0x0002A4, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x0002A5, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_BooleanOR_ReturnValue_1) == 0x0002A6, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x0002A7, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_BooleanOR_ReturnValue_2) == 0x0002A8, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x0002A9, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_BooleanOR_ReturnValue_3) == 0x0002AA, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x0002AB, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_EqualEqual_ByteByte_ReturnValue_8) == 0x0002AC, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_EqualEqual_ByteByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_EqualEqual_ByteByte_ReturnValue_9) == 0x0002AD, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_EqualEqual_ByteByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_BooleanOR_ReturnValue_4) == 0x0002AE, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0002AF, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_BooleanOR_ReturnValue_5) == 0x0002B0, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_BooleanOR_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_BooleanOR_ReturnValue_6) == 0x0002B1, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_BooleanOR_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_Select_Default_1) == 0x0002B2, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_BooleanOR_ReturnValue_7) == 0x0002B3, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_BooleanOR_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_BooleanAND_ReturnValue_1) == 0x0002B4, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_MakeStruct_SlateColor_3) == 0x0002B8, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, Temp_byte_Variable) == 0x0002E0, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, Temp_byte_Variable_1) == 0x0002E1, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_SwitchHoldType_IsToken) == 0x0002E2, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_SwitchHoldType_IsToken' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_Conv_IntToText_ReturnValue_3) == 0x0002E8, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_ValidShopNotAvailable_ReturnValue) == 0x000300, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_ValidShopNotAvailable_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_Select_Default_2) == 0x000308, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_ValidShopNotAvailable_ReturnValue_1) == 0x000310, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_ValidShopNotAvailable_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, Temp_bool_Variable_3) == 0x000311, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, Temp_bool_Variable_4) == 0x000312, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_Select_Default_3) == 0x000313, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_Select_Default_4) == 0x000318, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, Temp_bool_Variable_5) == 0x000340, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_Select_Default_5) == 0x000348, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_EqualEqual_ByteByte_ReturnValue_10) == 0x000360, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_EqualEqual_ByteByte_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_SelectInt_ReturnValue_1) == 0x000364, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_SelectInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_SwitchEnum_CmpSuccess_1) == 0x000368, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, Temp_struct_Variable) == 0x00036C, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, Temp_struct_Variable_1) == 0x00037C, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CreateDelegate_OutputDelegate_2) == 0x00038C, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_K2_SetTimerDelegate_ReturnValue_2) == 0x0003A0, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_K2_SetTimerDelegate_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_K2_IsTimerActiveHandle_ReturnValue) == 0x0003A8, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_K2_IsTimerActiveHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_K2_IsTimerActiveHandle_ReturnValue_1) == 0x0003A9, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_K2_IsTimerActiveHandle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CreateDelegate_OutputDelegate_3) == 0x0003AC, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_K2_SetTimerDelegate_ReturnValue_3) == 0x0003C0, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_K2_SetTimerDelegate_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CustomEvent_ProductData) == 0x0003C8, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CustomEvent_ProductData' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CustomEvent_DiscountRate) == 0x000438, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CustomEvent_DiscountRate' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CustomEvent_IsDiscount) == 0x00043C, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CustomEvent_IsDiscount' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CustomEvent_Item) == 0x000440, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CustomEvent_Equip) == 0x000448, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CustomEvent_Equip' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CustomEvent_Storage) == 0x000450, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CustomEvent_Storage' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CustomEvent_Ornament) == 0x000458, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CustomEvent_Ornament' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_Add_IntInt_ReturnValue_1) == 0x000460, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, Temp_struct_Variable_2) == 0x000464, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_Subtract_IntInt_ReturnValue) == 0x000474, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x000478, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_PlaySE_ReturnValue) == 0x00047C, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000480, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_PlaySE_ReturnValue_1) == 0x000484, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_EqualEqual_IntInt_ReturnValue_6) == 0x000488, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_EqualEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, Temp_struct_Variable_3) == 0x00048C, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CreateDelegate_OutputDelegate_4) == 0x00049C, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_CheckExchangeLimitNum_LimitNum) == 0x0004AC, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_CheckExchangeLimitNum_LimitNum' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0004B0, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_GetIsEnabled_ReturnValue) == 0x0004B1, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_GetIsEnabled_ReturnValue_1) == 0x0004B2, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_GetIsEnabled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CustomEvent_Num) == 0x0004B4, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CustomEvent_Num' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, Temp_int_Variable) == 0x0004B8, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_GetIsEnabled_ReturnValue_2) == 0x0004BC, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_GetIsEnabled_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_Select_Default_6) == 0x0004C0, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_MakeStruct_SlateColor_4) == 0x0004D0, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_MakeStruct_SlateColor_4' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CustomEvent_CurrencyType) == 0x0004F8, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CustomEvent_CurrencyType' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CustomEvent_TokenId) == 0x0004FC, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CustomEvent_TokenId' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_GetTokenIconTexture_Texture) == 0x000500, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_GetTokenIconTexture_Texture' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x000528, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000529, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, Temp_bool_Variable_6) == 0x00052A, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CreateDelegate_OutputDelegate_5) == 0x00052C, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_Select_Default_7) == 0x00053C, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item, K2Node_CustomEvent_bTrying) == 0x00053D, "Member 'EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item::K2Node_CustomEvent_bTrying' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetTrying
// 0x0001 (0x0001 - 0x0000)
struct EventShopProductBox_Item_C_SetTrying final
{
public:
	bool                                          bTrying;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopProductBox_Item_C_SetTrying) == 0x000001, "Wrong alignment on EventShopProductBox_Item_C_SetTrying");
static_assert(sizeof(EventShopProductBox_Item_C_SetTrying) == 0x000001, "Wrong size on EventShopProductBox_Item_C_SetTrying");
static_assert(offsetof(EventShopProductBox_Item_C_SetTrying, bTrying) == 0x000000, "Member 'EventShopProductBox_Item_C_SetTrying::bTrying' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.LoadTexture
// 0x0008 (0x0008 - 0x0000)
struct EventShopProductBox_Item_C_LoadTexture final
{
public:
	int32                                         CurrencyType;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TokenID;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Item_C_LoadTexture) == 0x000004, "Wrong alignment on EventShopProductBox_Item_C_LoadTexture");
static_assert(sizeof(EventShopProductBox_Item_C_LoadTexture) == 0x000008, "Wrong size on EventShopProductBox_Item_C_LoadTexture");
static_assert(offsetof(EventShopProductBox_Item_C_LoadTexture, CurrencyType) == 0x000000, "Member 'EventShopProductBox_Item_C_LoadTexture::CurrencyType' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_LoadTexture, TokenID) == 0x000004, "Member 'EventShopProductBox_Item_C_LoadTexture::TokenID' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetSelectNum
// 0x0004 (0x0004 - 0x0000)
struct EventShopProductBox_Item_C_SetSelectNum final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Item_C_SetSelectNum) == 0x000004, "Wrong alignment on EventShopProductBox_Item_C_SetSelectNum");
static_assert(sizeof(EventShopProductBox_Item_C_SetSelectNum) == 0x000004, "Wrong size on EventShopProductBox_Item_C_SetSelectNum");
static_assert(offsetof(EventShopProductBox_Item_C_SetSelectNum, Num) == 0x000000, "Member 'EventShopProductBox_Item_C_SetSelectNum::Num' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetProductData
// 0x0098 (0x0098 - 0x0000)
struct EventShopProductBox_Item_C_SetProductData final
{
public:
	struct FSBEventShopProduct                    Param_ProductData;                                 // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                         Param_DiscountRate;                                // 0x0070(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_IsDiscount;                                  // 0x0074(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6426[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTemporallyStorage*                   Item;                                              // 0x0078(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   Equip;                                             // 0x0080(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   Storage;                                           // 0x0088(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   Ornament;                                          // 0x0090(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Item_C_SetProductData) == 0x000008, "Wrong alignment on EventShopProductBox_Item_C_SetProductData");
static_assert(sizeof(EventShopProductBox_Item_C_SetProductData) == 0x000098, "Wrong size on EventShopProductBox_Item_C_SetProductData");
static_assert(offsetof(EventShopProductBox_Item_C_SetProductData, Param_ProductData) == 0x000000, "Member 'EventShopProductBox_Item_C_SetProductData::Param_ProductData' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetProductData, Param_DiscountRate) == 0x000070, "Member 'EventShopProductBox_Item_C_SetProductData::Param_DiscountRate' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetProductData, Param_IsDiscount) == 0x000074, "Member 'EventShopProductBox_Item_C_SetProductData::Param_IsDiscount' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetProductData, Item) == 0x000078, "Member 'EventShopProductBox_Item_C_SetProductData::Item' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetProductData, Equip) == 0x000080, "Member 'EventShopProductBox_Item_C_SetProductData::Equip' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetProductData, Storage) == 0x000088, "Member 'EventShopProductBox_Item_C_SetProductData::Storage' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetProductData, Ornament) == 0x000090, "Member 'EventShopProductBox_Item_C_SetProductData::Ornament' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetExchangePeriod
// 0x0008 (0x0008 - 0x0000)
struct EventShopProductBox_Item_C_SetExchangePeriod final
{
public:
	struct FDateTime                              End;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Item_C_SetExchangePeriod) == 0x000008, "Wrong alignment on EventShopProductBox_Item_C_SetExchangePeriod");
static_assert(sizeof(EventShopProductBox_Item_C_SetExchangePeriod) == 0x000008, "Wrong size on EventShopProductBox_Item_C_SetExchangePeriod");
static_assert(offsetof(EventShopProductBox_Item_C_SetExchangePeriod, End) == 0x000000, "Member 'EventShopProductBox_Item_C_SetExchangePeriod::End' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.GetItemId
// 0x0004 (0x0004 - 0x0000)
struct EventShopProductBox_Item_C_GetItemId final
{
public:
	int32                                         ItemSetId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Item_C_GetItemId) == 0x000004, "Wrong alignment on EventShopProductBox_Item_C_GetItemId");
static_assert(sizeof(EventShopProductBox_Item_C_GetItemId) == 0x000004, "Wrong size on EventShopProductBox_Item_C_GetItemId");
static_assert(offsetof(EventShopProductBox_Item_C_GetItemId, ItemSetId) == 0x000000, "Member 'EventShopProductBox_Item_C_GetItemId::ItemSetId' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.CheckItemType
// 0x0004 (0x0004 - 0x0000)
struct EventShopProductBox_Item_C_CheckItemType final
{
public:
	int32                                         ItemType;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Item_C_CheckItemType) == 0x000004, "Wrong alignment on EventShopProductBox_Item_C_CheckItemType");
static_assert(sizeof(EventShopProductBox_Item_C_CheckItemType) == 0x000004, "Wrong size on EventShopProductBox_Item_C_CheckItemType");
static_assert(offsetof(EventShopProductBox_Item_C_CheckItemType, ItemType) == 0x000000, "Member 'EventShopProductBox_Item_C_CheckItemType::ItemType' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetStockNum
// 0x0008 (0x0008 - 0x0000)
struct EventShopProductBox_Item_C_SetStockNum final
{
public:
	int32                                         Stock;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Limit;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Item_C_SetStockNum) == 0x000004, "Wrong alignment on EventShopProductBox_Item_C_SetStockNum");
static_assert(sizeof(EventShopProductBox_Item_C_SetStockNum) == 0x000008, "Wrong size on EventShopProductBox_Item_C_SetStockNum");
static_assert(offsetof(EventShopProductBox_Item_C_SetStockNum, Stock) == 0x000000, "Member 'EventShopProductBox_Item_C_SetStockNum::Stock' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetStockNum, Limit) == 0x000004, "Member 'EventShopProductBox_Item_C_SetStockNum::Limit' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetResetType
// 0x0004 (0x0004 - 0x0000)
struct EventShopProductBox_Item_C_SetResetType final
{
public:
	int32                                         Type;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Item_C_SetResetType) == 0x000004, "Wrong alignment on EventShopProductBox_Item_C_SetResetType");
static_assert(sizeof(EventShopProductBox_Item_C_SetResetType) == 0x000004, "Wrong size on EventShopProductBox_Item_C_SetResetType");
static_assert(offsetof(EventShopProductBox_Item_C_SetResetType, Type) == 0x000000, "Member 'EventShopProductBox_Item_C_SetResetType::Type' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnLoaded_8BF2257B4B76563CA1AA46BFA48D763A
// 0x0008 (0x0008 - 0x0000)
struct EventShopProductBox_Item_C_OnLoaded_8BF2257B4B76563CA1AA46BFA48D763A final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Item_C_OnLoaded_8BF2257B4B76563CA1AA46BFA48D763A) == 0x000008, "Wrong alignment on EventShopProductBox_Item_C_OnLoaded_8BF2257B4B76563CA1AA46BFA48D763A");
static_assert(sizeof(EventShopProductBox_Item_C_OnLoaded_8BF2257B4B76563CA1AA46BFA48D763A) == 0x000008, "Wrong size on EventShopProductBox_Item_C_OnLoaded_8BF2257B4B76563CA1AA46BFA48D763A");
static_assert(offsetof(EventShopProductBox_Item_C_OnLoaded_8BF2257B4B76563CA1AA46BFA48D763A, Loaded) == 0x000000, "Member 'EventShopProductBox_Item_C_OnLoaded_8BF2257B4B76563CA1AA46BFA48D763A::Loaded' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnLoaded_4B7D8DF8408EDDC34FB910BF7F350F56
// 0x0008 (0x0008 - 0x0000)
struct EventShopProductBox_Item_C_OnLoaded_4B7D8DF8408EDDC34FB910BF7F350F56 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Item_C_OnLoaded_4B7D8DF8408EDDC34FB910BF7F350F56) == 0x000008, "Wrong alignment on EventShopProductBox_Item_C_OnLoaded_4B7D8DF8408EDDC34FB910BF7F350F56");
static_assert(sizeof(EventShopProductBox_Item_C_OnLoaded_4B7D8DF8408EDDC34FB910BF7F350F56) == 0x000008, "Wrong size on EventShopProductBox_Item_C_OnLoaded_4B7D8DF8408EDDC34FB910BF7F350F56");
static_assert(offsetof(EventShopProductBox_Item_C_OnLoaded_4B7D8DF8408EDDC34FB910BF7F350F56, Loaded) == 0x000000, "Member 'EventShopProductBox_Item_C_OnLoaded_4B7D8DF8408EDDC34FB910BF7F350F56::Loaded' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetBtnSelected
// 0x0768 (0x0768 - 0x0000)
struct EventShopProductBox_Item_C_SetBtnSelected final
{
public:
	bool                                          Selected;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6427[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0008(0x0088)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0090(0x0028)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x00B8(0x0088)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0140(0x0028)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x0168(0x0278)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x03E0(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x0468(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x04F0(0x0278)()
};
static_assert(alignof(EventShopProductBox_Item_C_SetBtnSelected) == 0x000008, "Wrong alignment on EventShopProductBox_Item_C_SetBtnSelected");
static_assert(sizeof(EventShopProductBox_Item_C_SetBtnSelected) == 0x000768, "Wrong size on EventShopProductBox_Item_C_SetBtnSelected");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected, Selected) == 0x000000, "Member 'EventShopProductBox_Item_C_SetBtnSelected::Selected' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected, Temp_bool_Variable) == 0x000001, "Member 'EventShopProductBox_Item_C_SetBtnSelected::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000002, "Member 'EventShopProductBox_Item_C_SetBtnSelected::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000003, "Member 'EventShopProductBox_Item_C_SetBtnSelected::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected, K2Node_Select_Default) == 0x000004, "Member 'EventShopProductBox_Item_C_SetBtnSelected::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush) == 0x000008, "Member 'EventShopProductBox_Item_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected, K2Node_MakeStruct_SlateColor) == 0x000090, "Member 'EventShopProductBox_Item_C_SetBtnSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush_1) == 0x0000B8, "Member 'EventShopProductBox_Item_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected, K2Node_MakeStruct_SlateColor_1) == 0x000140, "Member 'EventShopProductBox_Item_C_SetBtnSelected::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected, K2Node_MakeStruct_ButtonStyle) == 0x000168, "Member 'EventShopProductBox_Item_C_SetBtnSelected::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush_2) == 0x0003E0, "Member 'EventShopProductBox_Item_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush_3) == 0x000468, "Member 'EventShopProductBox_Item_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected, K2Node_MakeStruct_ButtonStyle_1) == 0x0004F0, "Member 'EventShopProductBox_Item_C_SetBtnSelected::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetBtnSelected Remake
// 0x0768 (0x0768 - 0x0000)
struct EventShopProductBox_Item_C_SetBtnSelected_Remake final
{
public:
	bool                                          Selected;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6428[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0008(0x0088)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0090(0x0028)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x00B8(0x0088)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0140(0x0028)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x0168(0x0278)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x03E0(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x0468(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x04F0(0x0278)()
};
static_assert(alignof(EventShopProductBox_Item_C_SetBtnSelected_Remake) == 0x000008, "Wrong alignment on EventShopProductBox_Item_C_SetBtnSelected_Remake");
static_assert(sizeof(EventShopProductBox_Item_C_SetBtnSelected_Remake) == 0x000768, "Wrong size on EventShopProductBox_Item_C_SetBtnSelected_Remake");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected_Remake, Selected) == 0x000000, "Member 'EventShopProductBox_Item_C_SetBtnSelected_Remake::Selected' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected_Remake, K2Node_MakeStruct_SlateBrush) == 0x000008, "Member 'EventShopProductBox_Item_C_SetBtnSelected_Remake::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected_Remake, K2Node_MakeStruct_SlateColor) == 0x000090, "Member 'EventShopProductBox_Item_C_SetBtnSelected_Remake::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected_Remake, K2Node_MakeStruct_SlateBrush_1) == 0x0000B8, "Member 'EventShopProductBox_Item_C_SetBtnSelected_Remake::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected_Remake, K2Node_MakeStruct_SlateColor_1) == 0x000140, "Member 'EventShopProductBox_Item_C_SetBtnSelected_Remake::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected_Remake, K2Node_MakeStruct_ButtonStyle) == 0x000168, "Member 'EventShopProductBox_Item_C_SetBtnSelected_Remake::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected_Remake, K2Node_MakeStruct_SlateBrush_2) == 0x0003E0, "Member 'EventShopProductBox_Item_C_SetBtnSelected_Remake::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected_Remake, K2Node_MakeStruct_SlateBrush_3) == 0x000468, "Member 'EventShopProductBox_Item_C_SetBtnSelected_Remake::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetBtnSelected_Remake, K2Node_MakeStruct_ButtonStyle_1) == 0x0004F0, "Member 'EventShopProductBox_Item_C_SetBtnSelected_Remake::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetPurchaseNum
// 0x0028 (0x0028 - 0x0000)
struct EventShopProductBox_Item_C_SetPurchaseNum final
{
public:
	int32                                         Purchase;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Force;                                             // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6429[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_642A[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
};
static_assert(alignof(EventShopProductBox_Item_C_SetPurchaseNum) == 0x000008, "Wrong alignment on EventShopProductBox_Item_C_SetPurchaseNum");
static_assert(sizeof(EventShopProductBox_Item_C_SetPurchaseNum) == 0x000028, "Wrong size on EventShopProductBox_Item_C_SetPurchaseNum");
static_assert(offsetof(EventShopProductBox_Item_C_SetPurchaseNum, Purchase) == 0x000000, "Member 'EventShopProductBox_Item_C_SetPurchaseNum::Purchase' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetPurchaseNum, Force) == 0x000004, "Member 'EventShopProductBox_Item_C_SetPurchaseNum::Force' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetPurchaseNum, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000005, "Member 'EventShopProductBox_Item_C_SetPurchaseNum::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetPurchaseNum, CallFunc_Clamp_ReturnValue) == 0x000008, "Member 'EventShopProductBox_Item_C_SetPurchaseNum::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetPurchaseNum, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000C, "Member 'EventShopProductBox_Item_C_SetPurchaseNum::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetPurchaseNum, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'EventShopProductBox_Item_C_SetPurchaseNum::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.GetAmountNum
// 0x00E8 (0x00E8 - 0x0000)
struct EventShopProductBox_Item_C_GetAmountNum final
{
public:
	bool                                          Have;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_642B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Remain;                                            // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          L_Have;                                            // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_642C[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_Storage;                                         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Inventory;                                       // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRoseOrbFree_ReturnValue;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBPPoint_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_642D[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNowLevelClassExpPoint_ReturnValue;     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPoint_ReturnValue;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_642E[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMoney_ReturnValue;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetEventShopItemSetMasterById_IsExists; // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_642F[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopItemSetMasterData          CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue; // 0x0050(0x0034)(NoDestructor)
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6430[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6431[0x2];                                     // 0x0096(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6432[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue; // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6433[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue_1; // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6434[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6435[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6436[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class USBNetworkDataCache*              CallFunc_GetNetworkDataCache_ReturnValue;          // 0x00D8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopProductBox_Item_C_GetAmountNum) == 0x000008, "Wrong alignment on EventShopProductBox_Item_C_GetAmountNum");
static_assert(sizeof(EventShopProductBox_Item_C_GetAmountNum) == 0x0000E8, "Wrong size on EventShopProductBox_Item_C_GetAmountNum");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, Have) == 0x000000, "Member 'EventShopProductBox_Item_C_GetAmountNum::Have' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, Remain) == 0x000004, "Member 'EventShopProductBox_Item_C_GetAmountNum::Remain' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, L_Have) == 0x000008, "Member 'EventShopProductBox_Item_C_GetAmountNum::L_Have' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, L_Storage) == 0x00000C, "Member 'EventShopProductBox_Item_C_GetAmountNum::L_Storage' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, L_Inventory) == 0x000010, "Member 'EventShopProductBox_Item_C_GetAmountNum::L_Inventory' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_GetRoseOrbFree_ReturnValue) == 0x000014, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_GetRoseOrbFree_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_GetBPPoint_ReturnValue) == 0x000018, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_GetBPPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_GetSBPlayerController_ReturnValue) == 0x000020, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x000028, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_GetNowLevelClassExpPoint_ReturnValue) == 0x000030, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_GetNowLevelClassExpPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_GetPoint_ReturnValue) == 0x000034, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_GetPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_GetMasterDataManager_IsValid) == 0x000038, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_GetMasterDataManager_ReturnValue) == 0x000040, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_GetMoney_ReturnValue) == 0x000048, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_GetMoney_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_BP_GetEventShopItemSetMasterById_IsExists) == 0x00004C, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_BP_GetEventShopItemSetMasterById_IsExists' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue) == 0x000050, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_GetTokenAmount_ReturnValue) == 0x000084, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, K2Node_SwitchEnum_CmpSuccess) == 0x000088, "Member 'EventShopProductBox_Item_C_GetAmountNum::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_Add_IntInt_ReturnValue) == 0x00008C, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, Temp_int_Variable) == 0x000090, "Member 'EventShopProductBox_Item_C_GetAmountNum::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, Temp_bool_Variable) == 0x000094, "Member 'EventShopProductBox_Item_C_GetAmountNum::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_IsValid_ReturnValue) == 0x000095, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, K2Node_Select_Default) == 0x000098, "Member 'EventShopProductBox_Item_C_GetAmountNum::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x00009C, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue) == 0x0000A0, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_IsValid_ReturnValue_1) == 0x0000A4, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue_1) == 0x0000A8, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, Temp_int_Variable_1) == 0x0000AC, "Member 'EventShopProductBox_Item_C_GetAmountNum::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, Temp_int_Variable_2) == 0x0000B0, "Member 'EventShopProductBox_Item_C_GetAmountNum::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, Temp_bool_Variable_1) == 0x0000B4, "Member 'EventShopProductBox_Item_C_GetAmountNum::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_GetPlayerController_ReturnValue) == 0x0000B8, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0000C0, "Member 'EventShopProductBox_Item_C_GetAmountNum::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'EventShopProductBox_Item_C_GetAmountNum::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, K2Node_Select_Default_1) == 0x0000CC, "Member 'EventShopProductBox_Item_C_GetAmountNum::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_IsValid_ReturnValue_2) == 0x0000D0, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0000D8, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_IsValid_ReturnValue_3) == 0x0000E0, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetAmountNum, CallFunc_IsValid_ReturnValue_4) == 0x0000E1, "Member 'EventShopProductBox_Item_C_GetAmountNum::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.GetStorageRemainNum
// 0x0038 (0x0038 - 0x0000)
struct EventShopProductBox_Item_C_GetStorageRemainNum final
{
public:
	int32                                         Remain;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Storage;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6437[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6438[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	const class USBNetworkDataCache*              CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0028(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetStackableNum_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Item_C_GetStorageRemainNum) == 0x000008, "Wrong alignment on EventShopProductBox_Item_C_GetStorageRemainNum");
static_assert(sizeof(EventShopProductBox_Item_C_GetStorageRemainNum) == 0x000038, "Wrong size on EventShopProductBox_Item_C_GetStorageRemainNum");
static_assert(offsetof(EventShopProductBox_Item_C_GetStorageRemainNum, Remain) == 0x000000, "Member 'EventShopProductBox_Item_C_GetStorageRemainNum::Remain' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetStorageRemainNum, L_Storage) == 0x000004, "Member 'EventShopProductBox_Item_C_GetStorageRemainNum::L_Storage' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetStorageRemainNum, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'EventShopProductBox_Item_C_GetStorageRemainNum::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetStorageRemainNum, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000010, "Member 'EventShopProductBox_Item_C_GetStorageRemainNum::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetStorageRemainNum, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000018, "Member 'EventShopProductBox_Item_C_GetStorageRemainNum::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetStorageRemainNum, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'EventShopProductBox_Item_C_GetStorageRemainNum::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetStorageRemainNum, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'EventShopProductBox_Item_C_GetStorageRemainNum::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetStorageRemainNum, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000028, "Member 'EventShopProductBox_Item_C_GetStorageRemainNum::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetStorageRemainNum, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'EventShopProductBox_Item_C_GetStorageRemainNum::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetStorageRemainNum, CallFunc_IsValid_ReturnValue_2) == 0x000031, "Member 'EventShopProductBox_Item_C_GetStorageRemainNum::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetStorageRemainNum, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000032, "Member 'EventShopProductBox_Item_C_GetStorageRemainNum::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetStorageRemainNum, CallFunc_IsValid_ReturnValue_3) == 0x000033, "Member 'EventShopProductBox_Item_C_GetStorageRemainNum::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_GetStorageRemainNum, CallFunc_GetStackableNum_ReturnValue) == 0x000034, "Member 'EventShopProductBox_Item_C_GetStorageRemainNum::CallFunc_GetStackableNum_ReturnValue' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetWorkSpace
// 0x0030 (0x0030 - 0x0000)
struct EventShopProductBox_Item_C_SetWorkSpace final
{
public:
	class USBTemporallyStorage*                   Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   Equip;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   Storage;                                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   Ornament;                                          // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6439[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTemporallyStorage*                   K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Item_C_SetWorkSpace) == 0x000008, "Wrong alignment on EventShopProductBox_Item_C_SetWorkSpace");
static_assert(sizeof(EventShopProductBox_Item_C_SetWorkSpace) == 0x000030, "Wrong size on EventShopProductBox_Item_C_SetWorkSpace");
static_assert(offsetof(EventShopProductBox_Item_C_SetWorkSpace, Item) == 0x000000, "Member 'EventShopProductBox_Item_C_SetWorkSpace::Item' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetWorkSpace, Equip) == 0x000008, "Member 'EventShopProductBox_Item_C_SetWorkSpace::Equip' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetWorkSpace, Storage) == 0x000010, "Member 'EventShopProductBox_Item_C_SetWorkSpace::Storage' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetWorkSpace, Ornament) == 0x000018, "Member 'EventShopProductBox_Item_C_SetWorkSpace::Ornament' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetWorkSpace, Temp_byte_Variable) == 0x000020, "Member 'EventShopProductBox_Item_C_SetWorkSpace::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetWorkSpace, K2Node_Select_Default) == 0x000028, "Member 'EventShopProductBox_Item_C_SetWorkSpace::K2Node_Select_Default' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.Set Token Info
// 0x0010 (0x0010 - 0x0000)
struct EventShopProductBox_Item_C_Set_Token_Info final
{
public:
	int32                                         CurrencyType;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TokenID;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Param_DiscountRate;                                // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopProductBox_Item_C_Set_Token_Info) == 0x000004, "Wrong alignment on EventShopProductBox_Item_C_Set_Token_Info");
static_assert(sizeof(EventShopProductBox_Item_C_Set_Token_Info) == 0x000010, "Wrong size on EventShopProductBox_Item_C_Set_Token_Info");
static_assert(offsetof(EventShopProductBox_Item_C_Set_Token_Info, CurrencyType) == 0x000000, "Member 'EventShopProductBox_Item_C_Set_Token_Info::CurrencyType' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_Set_Token_Info, TokenID) == 0x000004, "Member 'EventShopProductBox_Item_C_Set_Token_Info::TokenID' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_Set_Token_Info, Param_DiscountRate) == 0x000008, "Member 'EventShopProductBox_Item_C_Set_Token_Info::Param_DiscountRate' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_Set_Token_Info, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000C, "Member 'EventShopProductBox_Item_C_Set_Token_Info::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_Set_Token_Info, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00000D, "Member 'EventShopProductBox_Item_C_Set_Token_Info::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_Set_Token_Info, CallFunc_BooleanAND_ReturnValue) == 0x00000E, "Member 'EventShopProductBox_Item_C_Set_Token_Info::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.GetTAbiiltyClass
// 0x0001 (0x0001 - 0x0000)
struct EventShopProductBox_Item_C_GetTAbiiltyClass final
{
public:
	ESBClassType                                  ClassType;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Item_C_GetTAbiiltyClass) == 0x000001, "Wrong alignment on EventShopProductBox_Item_C_GetTAbiiltyClass");
static_assert(sizeof(EventShopProductBox_Item_C_GetTAbiiltyClass) == 0x000001, "Wrong size on EventShopProductBox_Item_C_GetTAbiiltyClass");
static_assert(offsetof(EventShopProductBox_Item_C_GetTAbiiltyClass, ClassType) == 0x000000, "Member 'EventShopProductBox_Item_C_GetTAbiiltyClass::ClassType' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetIconNewMark
// 0x0003 (0x0003 - 0x0000)
struct EventShopProductBox_Item_C_SetIconNewMark final
{
public:
	bool                                          CallFunc_IsReadedIdByInt_bIsValid;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadedIdByInt_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopProductBox_Item_C_SetIconNewMark) == 0x000001, "Wrong alignment on EventShopProductBox_Item_C_SetIconNewMark");
static_assert(sizeof(EventShopProductBox_Item_C_SetIconNewMark) == 0x000003, "Wrong size on EventShopProductBox_Item_C_SetIconNewMark");
static_assert(offsetof(EventShopProductBox_Item_C_SetIconNewMark, CallFunc_IsReadedIdByInt_bIsValid) == 0x000000, "Member 'EventShopProductBox_Item_C_SetIconNewMark::CallFunc_IsReadedIdByInt_bIsValid' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetIconNewMark, CallFunc_IsReadedIdByInt_ReturnValue) == 0x000001, "Member 'EventShopProductBox_Item_C_SetIconNewMark::CallFunc_IsReadedIdByInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetIconNewMark, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'EventShopProductBox_Item_C_SetIconNewMark::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.IsReadedNewMark
// 0x0001 (0x0001 - 0x0000)
struct EventShopProductBox_Item_C_IsReadedNewMark final
{
public:
	bool                                          CallFunc_RegistReadedIdByInt_bIsValid;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopProductBox_Item_C_IsReadedNewMark) == 0x000001, "Wrong alignment on EventShopProductBox_Item_C_IsReadedNewMark");
static_assert(sizeof(EventShopProductBox_Item_C_IsReadedNewMark) == 0x000001, "Wrong size on EventShopProductBox_Item_C_IsReadedNewMark");
static_assert(offsetof(EventShopProductBox_Item_C_IsReadedNewMark, CallFunc_RegistReadedIdByInt_bIsValid) == 0x000000, "Member 'EventShopProductBox_Item_C_IsReadedNewMark::CallFunc_RegistReadedIdByInt_bIsValid' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetActiveIcon
// 0x0010 (0x0010 - 0x0000)
struct EventShopProductBox_Item_C_SetActiveIcon final
{
public:
	bool                                          IsItem;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_643A[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Item_C_SetActiveIcon) == 0x000004, "Wrong alignment on EventShopProductBox_Item_C_SetActiveIcon");
static_assert(sizeof(EventShopProductBox_Item_C_SetActiveIcon) == 0x000010, "Wrong size on EventShopProductBox_Item_C_SetActiveIcon");
static_assert(offsetof(EventShopProductBox_Item_C_SetActiveIcon, IsItem) == 0x000000, "Member 'EventShopProductBox_Item_C_SetActiveIcon::IsItem' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetActiveIcon, Temp_bool_Variable) == 0x000001, "Member 'EventShopProductBox_Item_C_SetActiveIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetActiveIcon, Temp_int_Variable) == 0x000004, "Member 'EventShopProductBox_Item_C_SetActiveIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetActiveIcon, Temp_int_Variable_1) == 0x000008, "Member 'EventShopProductBox_Item_C_SetActiveIcon::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SetActiveIcon, K2Node_Select_Default) == 0x00000C, "Member 'EventShopProductBox_Item_C_SetActiveIcon::K2Node_Select_Default' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.CheckExchangeLimitNum
// 0x000C (0x000C - 0x0000)
struct EventShopProductBox_Item_C_CheckExchangeLimitNum final
{
public:
	int32                                         LimitNum;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_643B[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Item_C_CheckExchangeLimitNum) == 0x000004, "Wrong alignment on EventShopProductBox_Item_C_CheckExchangeLimitNum");
static_assert(sizeof(EventShopProductBox_Item_C_CheckExchangeLimitNum) == 0x00000C, "Wrong size on EventShopProductBox_Item_C_CheckExchangeLimitNum");
static_assert(offsetof(EventShopProductBox_Item_C_CheckExchangeLimitNum, LimitNum) == 0x000000, "Member 'EventShopProductBox_Item_C_CheckExchangeLimitNum::LimitNum' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_CheckExchangeLimitNum, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'EventShopProductBox_Item_C_CheckExchangeLimitNum::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_CheckExchangeLimitNum, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000005, "Member 'EventShopProductBox_Item_C_CheckExchangeLimitNum::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_CheckExchangeLimitNum, CallFunc_SelectInt_ReturnValue) == 0x000008, "Member 'EventShopProductBox_Item_C_CheckExchangeLimitNum::CallFunc_SelectInt_ReturnValue' has a wrong offset!");

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SwitchHoldType
// 0x0030 (0x0030 - 0x0000)
struct EventShopProductBox_Item_C_SwitchHoldType final
{
public:
	bool                                          IsToken;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRewardItemType                             Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_8;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_9;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_10;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_11;                             // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_12;                             // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_13;                             // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_14;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_15;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_16;                             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_17;                             // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_18;                             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_19;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_20;                             // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_21;                             // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_22;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_23;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_24;                             // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_25;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_26;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_27;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_28;                             // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_29;                             // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_30;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_31;                             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_32;                             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_33;                             // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_34;                             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_35;                             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_36;                             // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidget*                                K2Node_Select_Default_1;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Item_C_SwitchHoldType) == 0x000008, "Wrong alignment on EventShopProductBox_Item_C_SwitchHoldType");
static_assert(sizeof(EventShopProductBox_Item_C_SwitchHoldType) == 0x000030, "Wrong size on EventShopProductBox_Item_C_SwitchHoldType");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, IsToken) == 0x000000, "Member 'EventShopProductBox_Item_C_SwitchHoldType::IsToken' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable) == 0x000001, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_byte_Variable) == 0x000002, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_1) == 0x000003, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_2) == 0x000004, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_3) == 0x000005, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_4) == 0x000006, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_5) == 0x000007, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_6) == 0x000008, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_7) == 0x000009, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_8) == 0x00000A, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_9) == 0x00000B, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_10) == 0x00000C, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_11) == 0x00000D, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_12) == 0x00000E, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_13) == 0x00000F, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_13' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_14) == 0x000010, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_14' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_15) == 0x000011, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_15' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_16) == 0x000012, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_16' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_17) == 0x000013, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_17' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_18) == 0x000014, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_18' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_19) == 0x000015, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_19' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_20) == 0x000016, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_20' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_21) == 0x000017, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_21' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_22) == 0x000018, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_22' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_23) == 0x000019, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_23' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_24) == 0x00001A, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_24' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_25) == 0x00001B, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_25' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_26) == 0x00001C, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_26' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_27) == 0x00001D, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_27' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_28) == 0x00001E, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_28' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_29) == 0x00001F, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_29' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_30) == 0x000020, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_30' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_31) == 0x000021, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_31' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_32) == 0x000022, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_32' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_33) == 0x000023, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_33' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_34) == 0x000024, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_34' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_35) == 0x000025, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_35' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, Temp_bool_Variable_36) == 0x000026, "Member 'EventShopProductBox_Item_C_SwitchHoldType::Temp_bool_Variable_36' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, K2Node_Select_Default) == 0x000027, "Member 'EventShopProductBox_Item_C_SwitchHoldType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Item_C_SwitchHoldType, K2Node_Select_Default_1) == 0x000028, "Member 'EventShopProductBox_Item_C_SwitchHoldType::K2Node_Select_Default_1' has a wrong offset!");

}

