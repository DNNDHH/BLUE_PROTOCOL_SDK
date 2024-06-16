#pragma once

 

// Package: CraftRecepiItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CraftRecepiItem.CraftRecepiItem_C.OnSelect__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct CraftRecepiItem_C_OnSelect__DelegateSignature final
{
public:
	struct FCharacterCraftRecepi                  SelectRecepi;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UCraftRecepiItem_C*                     SelectedItem;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftRecepiItem_C_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on CraftRecepiItem_C_OnSelect__DelegateSignature");
static_assert(sizeof(CraftRecepiItem_C_OnSelect__DelegateSignature) == 0x000010, "Wrong size on CraftRecepiItem_C_OnSelect__DelegateSignature");
static_assert(offsetof(CraftRecepiItem_C_OnSelect__DelegateSignature, SelectRecepi) == 0x000000, "Member 'CraftRecepiItem_C_OnSelect__DelegateSignature::SelectRecepi' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_OnSelect__DelegateSignature, SelectedItem) == 0x000008, "Member 'CraftRecepiItem_C_OnSelect__DelegateSignature::SelectedItem' has a wrong offset!");

// Function CraftRecepiItem.CraftRecepiItem_C.ExecuteUbergraph_CraftRecepiItem
// 0x06D8 (0x06D8 - 0x0000)
struct CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67C7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     Temp_byte_Variable_2;                              // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable_3;                              // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67C8[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(int32 RecepiId)>               K2Node_CreateDelegate_OutputDelegate_1;            // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67C9[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FSBChangeItemAmountParam& InParam)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67CA[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x0090(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67CB[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindCraftMaster_bIsValid;                 // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67CC[0x2];                                     // 0x00CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster;              // 0x00D0(0x0088)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0158(0x0018)()
	bool                                          CallFunc_IsEmpty_ReturnValue_2;                    // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0172(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67CD[0x5];                                     // 0x0173(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0178(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67CE[0x6];                                     // 0x0192(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x0198(0x00B0)()
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67CF[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0250(0x00D0)()
	class FString                                 CallFunc_GetWeaponTypeText_ReturnValue;            // 0x0320(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x0330(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0340(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0358(0x0018)()
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x0370(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0380(0x0018)()
	EItemType                                     K2Node_Select_Default_1;                           // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     K2Node_Select_Default_2;                           // 0x0399(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67D0[0x2];                                     // 0x039A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAllStoragesAmount_ReturnValue;         // 0x039C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTimeoutItem_ReturnValue;                // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67D1[0x7];                                     // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x03A8(0x0018)()
	bool                                          CallFunc_ContainsTimeoutRecepiMaterial_ReturnValue; // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x03C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67D2[0x2];                                     // 0x03C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterCraftRecepi                  K2Node_CustomEvent_ItemRecepi;                     // 0x03C4(0x0008)(NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x03CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x03CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67D3[0x2];                                     // 0x03CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x03D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBChangeItemAmountParam               K2Node_CustomEvent_InParam;                        // 0x03D8(0x0020)(ConstParm)
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue;               // 0x03F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAllStoragesAmount_ReturnValue_1;       // 0x0400(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67D4[0x4];                                     // 0x0404(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0408(0x0018)()
	bool                                          Temp_bool_Variable_5;                              // 0x0420(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindCraftMaster_bIsValid_1;               // 0x0421(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67D5[0x6];                                     // 0x0422(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster_1;            // 0x0428(0x0088)()
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x04B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid_1;            // 0x04B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67D6[0x5];                                     // 0x04B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue_1;        // 0x04B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue_1;             // 0x04C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x04C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x04CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x04CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67D7[0x2];                                     // 0x04CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x04D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x04D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x04D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67D8[0x6];                                     // 0x04DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCraftComponent*                CallFunc_GetCraftComponent_ReturnValue;            // 0x04E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x04E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x04E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67D9[0x2];                                     // 0x04EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RecepiId;                       // 0x04EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindPlayerRecepi_IsExist;                 // 0x04F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67DA[0x3];                                     // 0x04F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterCraftRecepi                  CallFunc_FindPlayerRecepi_ReturnValue;             // 0x04F4(0x0008)(ConstParm, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x04FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67DB[0x3];                                     // 0x04FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetWeaponTypeText_ReturnValue_1;          // 0x0500(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0510(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0528(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0538(0x0018)()
	class FText                                   K2Node_Select_Default_4;                           // 0x0550(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0568(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0578(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x0588(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_1;                // 0x0598(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_RegistReadedID_bIsValid;                  // 0x05A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67DC[0x3];                                     // 0x05A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x05AC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67DD[0x4];                                     // 0x05B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x05B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x05C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x05C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x05C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67DE[0x6];                                     // 0x05CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x05D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReadedID_IsValid;                       // 0x05E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadedID_ReturnValue;                   // 0x05E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x05E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67DF[0x1];                                     // 0x05E3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWishListData                        K2Node_MakeStruct_SBWishListData;                  // 0x05E4(0x000C)(NoDestructor)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_2;             // 0x05F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0600(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRegistedWishlist_ReturnValue;           // 0x0601(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67E0[0x6];                                     // 0x0602(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0608(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0630(0x0028)()
	struct FSlateColor                            K2Node_Select_Default_5;                           // 0x0658(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0680(0x0028)()
	bool                                          Temp_bool_Variable_6;                              // 0x06A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_6;                           // 0x06A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67E1[0x6];                                     // 0x06AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x06B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x06C0(0x0018)()
};
static_assert(alignof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem) == 0x000008, "Wrong alignment on CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem");
static_assert(sizeof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem) == 0x0006D8, "Wrong size on CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, EntryPoint) == 0x000000, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetPlayerId_ReturnValue) == 0x000008, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, Temp_byte_Variable) == 0x000018, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, Temp_byte_Variable_1) == 0x000019, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, Temp_bool_Variable) == 0x00001A, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, Temp_bool_Variable_1) == 0x00001B, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, Temp_bool_Variable_2) == 0x00002C, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, Temp_byte_Variable_2) == 0x00002D, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, Temp_byte_Variable_3) == 0x00002E, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, Temp_bool_Variable_3) == 0x00002F, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, K2Node_MakeArray_Array) == 0x000030, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_Array_Get_Item) == 0x000040, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_IsEmpty_ReturnValue) == 0x000048, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000050, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetDisplayName_ReturnValue) == 0x000058, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, K2Node_CreateDelegate_OutputDelegate_1) == 0x000068, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x000078, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, K2Node_CreateDelegate_OutputDelegate_2) == 0x00007C, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00008C, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, K2Node_MakeArray_Array_1) == 0x000090, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_Array_Get_Item_1) == 0x0000A0, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x0000A8, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_IsEmpty_ReturnValue_1) == 0x0000B0, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetDisplayName_ReturnValue_1) == 0x0000B8, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0000C8, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0000C9, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, Temp_bool_Variable_4) == 0x0000CA, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x0000CB, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_Not_PreBool_ReturnValue) == 0x0000CC, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_FindCraftMaster_bIsValid) == 0x0000CD, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_FindCraftMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_FindCraftMaster_CraftMaster) == 0x0000D0, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_FindCraftMaster_CraftMaster' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_MakeLiteralText_ReturnValue) == 0x000158, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_IsEmpty_ReturnValue_2) == 0x000170, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_IsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000171, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_Not_PreBool_ReturnValue_1) == 0x000172, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_Conv_IntToText_ReturnValue) == 0x000178, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, K2Node_Select_Default) == 0x000190, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_FindWeaponMaster_bIsValid) == 0x000191, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_FindWeaponMaster_WeaponMaster) == 0x000198, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_FindItemMaster_bIsValid) == 0x000248, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_FindItemMaster_ItemMaster) == 0x000250, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetWeaponTypeText_ReturnValue) == 0x000320, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetWeaponTypeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetItemText_ReturnValue) == 0x000330, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000340, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000358, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetWeaponText_ReturnValue) == 0x000370, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000380, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, K2Node_Select_Default_1) == 0x000398, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, K2Node_Select_Default_2) == 0x000399, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetAllStoragesAmount_ReturnValue) == 0x00039C, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetAllStoragesAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_IsTimeoutItem_ReturnValue) == 0x0003A0, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_IsTimeoutItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0003A8, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_ContainsTimeoutRecepiMaterial_ReturnValue) == 0x0003C0, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_ContainsTimeoutRecepiMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_BooleanOR_ReturnValue) == 0x0003C1, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, K2Node_CustomEvent_ItemRecepi) == 0x0003C4, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::K2Node_CustomEvent_ItemRecepi' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x0003CC, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetNetworkDataCache_IsValid) == 0x0003CD, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0003D0, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, K2Node_CustomEvent_InParam) == 0x0003D8, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::K2Node_CustomEvent_InParam' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetOwnItemList_ReturnValue) == 0x0003F8, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetOwnItemList_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetAllStoragesAmount_ReturnValue_1) == 0x000400, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetAllStoragesAmount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000408, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, Temp_bool_Variable_5) == 0x000420, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_FindCraftMaster_bIsValid_1) == 0x000421, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_FindCraftMaster_bIsValid_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_FindCraftMaster_CraftMaster_1) == 0x000428, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_FindCraftMaster_CraftMaster_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, K2Node_Select_Default_3) == 0x0004B0, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0004B1, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetNetworkDataCache_IsValid_1) == 0x0004B2, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetNetworkDataCache_IsValid_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetNetworkDataCache_ReturnValue_1) == 0x0004B8, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetNetworkDataCache_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetOwnItemList_ReturnValue_1) == 0x0004C0, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetOwnItemList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetAdventurerRank_ReturnValue) == 0x0004C8, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, Temp_bool_Has_Been_Initd_Variable) == 0x0004CC, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_Less_IntInt_ReturnValue) == 0x0004CD, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetSBPlayerController_ReturnValue) == 0x0004D0, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_IsValid_ReturnValue) == 0x0004D8, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_IsValid_ReturnValue_1) == 0x0004D9, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetCraftComponent_ReturnValue) == 0x0004E0, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetCraftComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_IsValid_ReturnValue_2) == 0x0004E8, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_IsValid_ReturnValue_3) == 0x0004E9, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, K2Node_CustomEvent_RecepiId) == 0x0004EC, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::K2Node_CustomEvent_RecepiId' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_FindPlayerRecepi_IsExist) == 0x0004F0, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_FindPlayerRecepi_IsExist' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_FindPlayerRecepi_ReturnValue) == 0x0004F4, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_FindPlayerRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0004FC, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetWeaponTypeText_ReturnValue_1) == 0x000500, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetWeaponTypeText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000510, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000528, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000538, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, K2Node_Select_Default_4) == 0x000550, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_Conv_IntToString_ReturnValue) == 0x000568, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetCharacterId_ReturnValue) == 0x000578, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetCharacterId_ReturnValue_1) == 0x000588, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetPlayerId_ReturnValue_1) == 0x000598, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetPlayerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_RegistReadedID_bIsValid) == 0x0005A8, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_RegistReadedID_bIsValid' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_MakeLiteralName_ReturnValue) == 0x0005AC, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, K2Node_CustomEvent_Sender) == 0x0005B8, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, K2Node_CustomEvent_Param) == 0x0005C0, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, Temp_bool_Has_Been_Initd_Variable_1) == 0x0005C8, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, Temp_bool_IsClosed_Variable) == 0x0005C9, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0005D0, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_IsReadedID_IsValid) == 0x0005E0, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_IsReadedID_IsValid' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_IsReadedID_ReturnValue) == 0x0005E1, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_IsReadedID_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_Not_PreBool_ReturnValue_2) == 0x0005E2, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, K2Node_MakeStruct_SBWishListData) == 0x0005E4, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::K2Node_MakeStruct_SBWishListData' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetCharacterId_ReturnValue_2) == 0x0005F0, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetCharacterId_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, Temp_bool_IsClosed_Variable_1) == 0x000600, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_IsRegistedWishlist_ReturnValue) == 0x000601, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_IsRegistedWishlist_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, K2Node_MakeStruct_SlateColor) == 0x000608, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, K2Node_MakeStruct_SlateColor_1) == 0x000630, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, K2Node_Select_Default_5) == 0x000658, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, K2Node_MakeStruct_SlateColor_2) == 0x000680, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, Temp_bool_Variable_6) == 0x0006A8, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, K2Node_Select_Default_6) == 0x0006A9, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_GetTextFromAsset_ReturnValue) == 0x0006B0, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0006C0, "Member 'CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");

// Function CraftRecepiItem.CraftRecepiItem_C.OnUpdate Boosst
// 0x0010 (0x0010 - 0x0000)
struct CraftRecepiItem_C_OnUpdate_Boosst final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftRecepiItem_C_OnUpdate_Boosst) == 0x000008, "Wrong alignment on CraftRecepiItem_C_OnUpdate_Boosst");
static_assert(sizeof(CraftRecepiItem_C_OnUpdate_Boosst) == 0x000010, "Wrong size on CraftRecepiItem_C_OnUpdate_Boosst");
static_assert(offsetof(CraftRecepiItem_C_OnUpdate_Boosst, Sender) == 0x000000, "Member 'CraftRecepiItem_C_OnUpdate_Boosst::Sender' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_OnUpdate_Boosst, Param) == 0x000008, "Member 'CraftRecepiItem_C_OnUpdate_Boosst::Param' has a wrong offset!");

// Function CraftRecepiItem.CraftRecepiItem_C.OnChangeRecepi
// 0x0004 (0x0004 - 0x0000)
struct CraftRecepiItem_C_OnChangeRecepi final
{
public:
	int32                                         RecepiId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftRecepiItem_C_OnChangeRecepi) == 0x000004, "Wrong alignment on CraftRecepiItem_C_OnChangeRecepi");
static_assert(sizeof(CraftRecepiItem_C_OnChangeRecepi) == 0x000004, "Wrong size on CraftRecepiItem_C_OnChangeRecepi");
static_assert(offsetof(CraftRecepiItem_C_OnChangeRecepi, RecepiId) == 0x000000, "Member 'CraftRecepiItem_C_OnChangeRecepi::RecepiId' has a wrong offset!");

// Function CraftRecepiItem.CraftRecepiItem_C.OnOwnItemUpdate
// 0x0020 (0x0020 - 0x0000)
struct CraftRecepiItem_C_OnOwnItemUpdate final
{
public:
	struct FSBChangeItemAmountParam               InParam;                                           // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CraftRecepiItem_C_OnOwnItemUpdate) == 0x000008, "Wrong alignment on CraftRecepiItem_C_OnOwnItemUpdate");
static_assert(sizeof(CraftRecepiItem_C_OnOwnItemUpdate) == 0x000020, "Wrong size on CraftRecepiItem_C_OnOwnItemUpdate");
static_assert(offsetof(CraftRecepiItem_C_OnOwnItemUpdate, InParam) == 0x000000, "Member 'CraftRecepiItem_C_OnOwnItemUpdate::InParam' has a wrong offset!");

// Function CraftRecepiItem.CraftRecepiItem_C.Set Recepi
// 0x0008 (0x0008 - 0x0000)
struct CraftRecepiItem_C_Set_Recepi final
{
public:
	struct FCharacterCraftRecepi                  Param_ItemRecepi;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(CraftRecepiItem_C_Set_Recepi) == 0x000004, "Wrong alignment on CraftRecepiItem_C_Set_Recepi");
static_assert(sizeof(CraftRecepiItem_C_Set_Recepi) == 0x000008, "Wrong size on CraftRecepiItem_C_Set_Recepi");
static_assert(offsetof(CraftRecepiItem_C_Set_Recepi, Param_ItemRecepi) == 0x000000, "Member 'CraftRecepiItem_C_Set_Recepi::Param_ItemRecepi' has a wrong offset!");

// Function CraftRecepiItem.CraftRecepiItem_C.SetBtnSelected
// 0x0768 (0x0768 - 0x0000)
struct CraftRecepiItem_C_SetBtnSelected final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67E2[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0008(0x0088)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0090(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00B8(0x0028)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x00E0(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x0168(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x01F0(0x0278)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x0468(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x04F0(0x0278)()
};
static_assert(alignof(CraftRecepiItem_C_SetBtnSelected) == 0x000008, "Wrong alignment on CraftRecepiItem_C_SetBtnSelected");
static_assert(sizeof(CraftRecepiItem_C_SetBtnSelected) == 0x000768, "Wrong size on CraftRecepiItem_C_SetBtnSelected");
static_assert(offsetof(CraftRecepiItem_C_SetBtnSelected, bSelected) == 0x000000, "Member 'CraftRecepiItem_C_SetBtnSelected::bSelected' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush) == 0x000008, "Member 'CraftRecepiItem_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_SetBtnSelected, K2Node_MakeStruct_SlateColor) == 0x000090, "Member 'CraftRecepiItem_C_SetBtnSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_SetBtnSelected, K2Node_MakeStruct_SlateColor_1) == 0x0000B8, "Member 'CraftRecepiItem_C_SetBtnSelected::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush_1) == 0x0000E0, "Member 'CraftRecepiItem_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush_2) == 0x000168, "Member 'CraftRecepiItem_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_SetBtnSelected, K2Node_MakeStruct_ButtonStyle) == 0x0001F0, "Member 'CraftRecepiItem_C_SetBtnSelected::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush_3) == 0x000468, "Member 'CraftRecepiItem_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_SetBtnSelected, K2Node_MakeStruct_ButtonStyle_1) == 0x0004F0, "Member 'CraftRecepiItem_C_SetBtnSelected::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");

// Function CraftRecepiItem.CraftRecepiItem_C.isItemRecepi
// 0x0001 (0x0001 - 0x0000)
struct CraftRecepiItem_C_IsItemRecepi final
{
public:
	bool                                          Param_IsItem;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CraftRecepiItem_C_IsItemRecepi) == 0x000001, "Wrong alignment on CraftRecepiItem_C_IsItemRecepi");
static_assert(sizeof(CraftRecepiItem_C_IsItemRecepi) == 0x000001, "Wrong size on CraftRecepiItem_C_IsItemRecepi");
static_assert(offsetof(CraftRecepiItem_C_IsItemRecepi, Param_IsItem) == 0x000000, "Member 'CraftRecepiItem_C_IsItemRecepi::Param_IsItem' has a wrong offset!");

// Function CraftRecepiItem.CraftRecepiItem_C.UpdateBoost
// 0x0058 (0x0058 - 0x0000)
struct CraftRecepiItem_C_UpdateBoost final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67E3[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67E4[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_RewardBoostTooltip_C*              CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67E5[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEffectiveCraft_ReturnValue;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67E6[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBRewardBoostTooltipData>      CallFunc_GetCraftTooltipText_TooltipDataList;      // 0x0040(0x0010)(ReferenceParm)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftRecepiItem_C_UpdateBoost) == 0x000008, "Wrong alignment on CraftRecepiItem_C_UpdateBoost");
static_assert(sizeof(CraftRecepiItem_C_UpdateBoost) == 0x000058, "Wrong size on CraftRecepiItem_C_UpdateBoost");
static_assert(offsetof(CraftRecepiItem_C_UpdateBoost, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'CraftRecepiItem_C_UpdateBoost::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_UpdateBoost, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000001, "Member 'CraftRecepiItem_C_UpdateBoost::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_UpdateBoost, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'CraftRecepiItem_C_UpdateBoost::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_UpdateBoost, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'CraftRecepiItem_C_UpdateBoost::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_UpdateBoost, CallFunc_Create_ReturnValue) == 0x000018, "Member 'CraftRecepiItem_C_UpdateBoost::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_UpdateBoost, Temp_bool_Variable) == 0x000020, "Member 'CraftRecepiItem_C_UpdateBoost::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_UpdateBoost, CallFunc_GetSBPlayerController_ReturnValue) == 0x000028, "Member 'CraftRecepiItem_C_UpdateBoost::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_UpdateBoost, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x000030, "Member 'CraftRecepiItem_C_UpdateBoost::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_UpdateBoost, CallFunc_IsEffectiveCraft_ReturnValue) == 0x000038, "Member 'CraftRecepiItem_C_UpdateBoost::CallFunc_IsEffectiveCraft_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_UpdateBoost, CallFunc_GetCraftTooltipText_TooltipDataList) == 0x000040, "Member 'CraftRecepiItem_C_UpdateBoost::CallFunc_GetCraftTooltipText_TooltipDataList' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_UpdateBoost, K2Node_Select_Default) == 0x000050, "Member 'CraftRecepiItem_C_UpdateBoost::K2Node_Select_Default' has a wrong offset!");

// Function CraftRecepiItem.CraftRecepiItem_C.Bind Wishlist Update
// 0x0020 (0x0020 - 0x0000)
struct CraftRecepiItem_C_Bind_Wishlist_Update final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67E7[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftRecepiItem_C_Bind_Wishlist_Update) == 0x000008, "Wrong alignment on CraftRecepiItem_C_Bind_Wishlist_Update");
static_assert(sizeof(CraftRecepiItem_C_Bind_Wishlist_Update) == 0x000020, "Wrong size on CraftRecepiItem_C_Bind_Wishlist_Update");
static_assert(offsetof(CraftRecepiItem_C_Bind_Wishlist_Update, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'CraftRecepiItem_C_Bind_Wishlist_Update::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_Bind_Wishlist_Update, CallFunc_GetConfigSaveManager_IsValid) == 0x000010, "Member 'CraftRecepiItem_C_Bind_Wishlist_Update::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_Bind_Wishlist_Update, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000018, "Member 'CraftRecepiItem_C_Bind_Wishlist_Update::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");

// Function CraftRecepiItem.CraftRecepiItem_C.Unbind Wishlist Update
// 0x0020 (0x0020 - 0x0000)
struct CraftRecepiItem_C_Unbind_Wishlist_Update final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67E8[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftRecepiItem_C_Unbind_Wishlist_Update) == 0x000008, "Wrong alignment on CraftRecepiItem_C_Unbind_Wishlist_Update");
static_assert(sizeof(CraftRecepiItem_C_Unbind_Wishlist_Update) == 0x000020, "Wrong size on CraftRecepiItem_C_Unbind_Wishlist_Update");
static_assert(offsetof(CraftRecepiItem_C_Unbind_Wishlist_Update, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'CraftRecepiItem_C_Unbind_Wishlist_Update::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_Unbind_Wishlist_Update, CallFunc_GetConfigSaveManager_IsValid) == 0x000010, "Member 'CraftRecepiItem_C_Unbind_Wishlist_Update::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(CraftRecepiItem_C_Unbind_Wishlist_Update, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000018, "Member 'CraftRecepiItem_C_Unbind_Wishlist_Update::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");

}

