#pragma once

 

// Package: ShopMenuDetailsCurrency

#include "Basic.hpp"

#include "E_SBDetailsZoomIn_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "ST_ItemIconData_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.OnEndCloseDetailAnimation__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsCurrency_C_OnEndCloseDetailAnimation__DelegateSignature final
{
public:
	class UUserWidget*                            InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsCurrency_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong alignment on ShopMenuDetailsCurrency_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsCurrency_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong size on ShopMenuDetailsCurrency_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsCurrency_C_OnEndCloseDetailAnimation__DelegateSignature, InWidget) == 0x000000, "Member 'ShopMenuDetailsCurrency_C_OnEndCloseDetailAnimation__DelegateSignature::InWidget' has a wrong offset!");

// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.OnClickZoomIn__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ShopMenuDetailsCurrency_C_OnClickZoomIn__DelegateSignature final
{
public:
	E_SBDetailsZoomIn                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsCurrency_C_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong alignment on ShopMenuDetailsCurrency_C_OnClickZoomIn__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsCurrency_C_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong size on ShopMenuDetailsCurrency_C_OnClickZoomIn__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsCurrency_C_OnClickZoomIn__DelegateSignature, Type) == 0x000000, "Member 'ShopMenuDetailsCurrency_C_OnClickZoomIn__DelegateSignature::Type' has a wrong offset!");

// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.OnCheckShowProduct__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsCurrency_C_OnCheckShowProduct__DelegateSignature final
{
public:
	ESBRewardItemType                             RewardType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9322[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemIndex;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsCurrency_C_OnCheckShowProduct__DelegateSignature) == 0x000004, "Wrong alignment on ShopMenuDetailsCurrency_C_OnCheckShowProduct__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsCurrency_C_OnCheckShowProduct__DelegateSignature) == 0x000008, "Wrong size on ShopMenuDetailsCurrency_C_OnCheckShowProduct__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsCurrency_C_OnCheckShowProduct__DelegateSignature, RewardType) == 0x000000, "Member 'ShopMenuDetailsCurrency_C_OnCheckShowProduct__DelegateSignature::RewardType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_OnCheckShowProduct__DelegateSignature, ItemIndex) == 0x000004, "Member 'ShopMenuDetailsCurrency_C_OnCheckShowProduct__DelegateSignature::ItemIndex' has a wrong offset!");

// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.ExecuteUbergraph_ShopMenuDetailsCurrency
// 0x0438 (0x0438 - 0x0000)
struct ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9323[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FST_ItemIconData                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0030(0x00C8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9324[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x00FC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9325[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ItemIconData                       CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x0108(0x00C8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9326[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetTokenIconTextureL_Texture;             // 0x01D8(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0202(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0203(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x0204(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9327[0x3];                                     // 0x0205(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_ByteToString_ReturnValue;            // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisibieShowProductForCurrency_bVisible; // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9328[0x3];                                     // 0x0219(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_IsVisibieShowProductForCurrency_ButtonIndex; // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_2;          // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9329[0x7];                                     // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ItemIconData                       CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x0230(0x00C8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_932A[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDescription_ReturnValue;               // 0x0300(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDescription_bValid;                    // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_932B[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0318(0x0018)()
	E_SBDetailsZoomIn                             Temp_byte_Variable;                                // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCraftMaster_bIsValid;                 // 0x0331(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_932C[0x6];                                     // 0x0332(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster;              // 0x0338(0x0088)()
	E_SBDetailsZoomIn                             Temp_byte_Variable_1;                              // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x03C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x03C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess_1;                 // 0x03C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x03C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x03C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_SBDetailsZoomIn                             K2Node_Select_Default;                             // 0x03C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_932D[0x1];                                     // 0x03C7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x03D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             K2Node_CustomEvent_RewardType;                     // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_932E[0x3];                                     // 0x03D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemIndex;                      // 0x03DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Amount;                         // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_AmountMin;                      // 0x03E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x03E8(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x03F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0400(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0408(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array_1;                          // 0x0418(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0428(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0430(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0431(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0432(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0433(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0434(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0435(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency) == 0x000008, "Wrong alignment on ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency");
static_assert(sizeof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency) == 0x000438, "Wrong size on ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, EntryPoint) == 0x000000, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, Temp_bool_Variable) == 0x000004, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000005, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_Conv_StringToName_ReturnValue) == 0x000018, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000020, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_GetDataTableRowFromName_OutRow) == 0x000030, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000F8, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_Conv_StringToName_ReturnValue_1) == 0x0000FC, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x000108, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x0001D0, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_GetTokenIconTextureL_Texture) == 0x0001D8, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_GetTokenIconTextureL_Texture' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000200, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000201, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000202, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000203, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x000204, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_Conv_ByteToString_ReturnValue) == 0x000208, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_Conv_ByteToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_IsVisibieShowProductForCurrency_bVisible) == 0x000218, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_IsVisibieShowProductForCurrency_bVisible' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_IsVisibieShowProductForCurrency_ButtonIndex) == 0x00021C, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_IsVisibieShowProductForCurrency_ButtonIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_Conv_StringToName_ReturnValue_2) == 0x000220, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_Conv_StringToName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, K2Node_SwitchInteger_CmpSuccess) == 0x000228, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_GetDataTableRowFromName_OutRow_2) == 0x000230, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_GetDataTableRowFromName_OutRow_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_GetDataTableRowFromName_ReturnValue_2) == 0x0002F8, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_GetDataTableRowFromName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_GetDescription_ReturnValue) == 0x000300, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_GetDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_GetDescription_bValid) == 0x000310, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_GetDescription_bValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_Conv_StringToText_ReturnValue) == 0x000318, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, Temp_byte_Variable) == 0x000330, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_FindCraftMaster_bIsValid) == 0x000331, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_FindCraftMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_FindCraftMaster_CraftMaster) == 0x000338, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_FindCraftMaster_CraftMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, Temp_byte_Variable_1) == 0x0003C0, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_IsEmpty_ReturnValue) == 0x0003C1, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, Temp_bool_Variable_1) == 0x0003C2, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, K2Node_SwitchInteger_CmpSuccess_1) == 0x0003C3, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::K2Node_SwitchInteger_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, Temp_bool_Variable_2) == 0x0003C4, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_IsAnimationPlaying_ReturnValue) == 0x0003C5, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, K2Node_Select_Default) == 0x0003C6, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_PlayAnimation_ReturnValue) == 0x0003C8, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_PlayAnimation_ReturnValue_1) == 0x0003D0, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, K2Node_CustomEvent_RewardType) == 0x0003D8, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::K2Node_CustomEvent_RewardType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, K2Node_CustomEvent_ItemIndex) == 0x0003DC, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::K2Node_CustomEvent_ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, K2Node_CustomEvent_Amount) == 0x0003E0, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::K2Node_CustomEvent_Amount' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, K2Node_CustomEvent_AmountMin) == 0x0003E4, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::K2Node_CustomEvent_AmountMin' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, K2Node_MakeArray_Array) == 0x0003E8, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_Array_Get_Item) == 0x0003F8, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000400, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_GetDisplayName_ReturnValue) == 0x000408, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, K2Node_MakeArray_Array_1) == 0x000418, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000428, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_MakeLiteralByte_ReturnValue) == 0x000430, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000431, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000432, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, K2Node_Select_Default_1) == 0x000433, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000434, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency, K2Node_Select_Default_2) == 0x000435, "Member 'ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency::K2Node_Select_Default_2' has a wrong offset!");

// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.SetData
// 0x0010 (0x0010 - 0x0000)
struct ShopMenuDetailsCurrency_C_SetData final
{
public:
	ESBRewardItemType                             RewardType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_932F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemIndex;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountMin;                                         // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsCurrency_C_SetData) == 0x000004, "Wrong alignment on ShopMenuDetailsCurrency_C_SetData");
static_assert(sizeof(ShopMenuDetailsCurrency_C_SetData) == 0x000010, "Wrong size on ShopMenuDetailsCurrency_C_SetData");
static_assert(offsetof(ShopMenuDetailsCurrency_C_SetData, RewardType) == 0x000000, "Member 'ShopMenuDetailsCurrency_C_SetData::RewardType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_SetData, ItemIndex) == 0x000004, "Member 'ShopMenuDetailsCurrency_C_SetData::ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_SetData, Amount) == 0x000008, "Member 'ShopMenuDetailsCurrency_C_SetData::Amount' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_SetData, AmountMin) == 0x00000C, "Member 'ShopMenuDetailsCurrency_C_SetData::AmountMin' has a wrong offset!");

// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.GetDescription
// 0x0250 (0x0250 - 0x0000)
struct ShopMenuDetailsCurrency_C_GetDescription final
{
public:
	ESBRewardItemType                             RewardType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9330[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemIndex;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	bool                                          bValid;                                            // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9331[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindAwardsMaster_bIsValid;                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9332[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterAwardsData                    CallFunc_FindAwardsMaster_ReturnValue;             // 0x002C(0x000C)(NoDestructor)
	class FString                                 CallFunc_GetAwardsText_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindAdventureCardDecorationMaster_bIsValid; // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9333[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterAdventureCardDecoration       CallFunc_FindAdventureCardDecorationMaster_ReturnValue; // 0x004C(0x0010)(NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindWarehouseAbilityRecipeMaster_bIsValid; // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9334[0x2];                                     // 0x005E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWarehouseAbilityRecipeMasterData    CallFunc_FindWarehouseAbilityRecipeMaster_WarehouseAbilityRecipeMaster; // 0x0060(0x0020)(NoDestructor)
	bool                                          CallFunc_FindTokenMaster_bIsValid;                 // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9335[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_FindTokenMaster_TokenMaster;              // 0x0088(0x0058)()
	class FString                                 CallFunc_GetMasterWarehouseAbilityRecipeText_ReturnValue; // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue;           // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9336[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0108(0x0010)(ReferenceParm)
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x0118(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9337[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_2;                          // 0x0170(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_2;                         // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_2;                    // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9338[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_2;        // 0x0190(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_2;             // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array_3;                          // 0x01A8(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_3;                         // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_3;        // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_3;                    // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9339[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue_3;             // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_3;     // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_4;     // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_5;     // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_6;     // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsCurrency_C_GetDescription) == 0x000008, "Wrong alignment on ShopMenuDetailsCurrency_C_GetDescription");
static_assert(sizeof(ShopMenuDetailsCurrency_C_GetDescription) == 0x000250, "Wrong size on ShopMenuDetailsCurrency_C_GetDescription");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, RewardType) == 0x000000, "Member 'ShopMenuDetailsCurrency_C_GetDescription::RewardType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, ItemIndex) == 0x000004, "Member 'ShopMenuDetailsCurrency_C_GetDescription::ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, ReturnValue) == 0x000008, "Member 'ShopMenuDetailsCurrency_C_GetDescription::ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, bValid) == 0x000018, "Member 'ShopMenuDetailsCurrency_C_GetDescription::bValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, MasterDataManager) == 0x000020, "Member 'ShopMenuDetailsCurrency_C_GetDescription::MasterDataManager' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_IsEmpty_ReturnValue) == 0x000028, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_FindAwardsMaster_bIsValid) == 0x000029, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_FindAwardsMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_FindAwardsMaster_ReturnValue) == 0x00002C, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_FindAwardsMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_GetAwardsText_ReturnValue) == 0x000038, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_GetAwardsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_FindAdventureCardDecorationMaster_bIsValid) == 0x000048, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_FindAdventureCardDecorationMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_FindAdventureCardDecorationMaster_ReturnValue) == 0x00004C, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_FindAdventureCardDecorationMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, K2Node_SwitchEnum_CmpSuccess) == 0x00005C, "Member 'ShopMenuDetailsCurrency_C_GetDescription::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_FindWarehouseAbilityRecipeMaster_bIsValid) == 0x00005D, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_FindWarehouseAbilityRecipeMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_FindWarehouseAbilityRecipeMaster_WarehouseAbilityRecipeMaster) == 0x000060, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_FindWarehouseAbilityRecipeMaster_WarehouseAbilityRecipeMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_FindTokenMaster_bIsValid) == 0x000080, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_FindTokenMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_FindTokenMaster_TokenMaster) == 0x000088, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_FindTokenMaster_TokenMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_GetMasterWarehouseAbilityRecipeText_ReturnValue) == 0x0000E0, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_GetMasterWarehouseAbilityRecipeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_GetMasterTokenText_ReturnValue) == 0x0000F0, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_GetMasterTokenText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, K2Node_SwitchEnum_CmpSuccess_1) == 0x000100, "Member 'ShopMenuDetailsCurrency_C_GetDescription::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, K2Node_MakeArray_Array) == 0x000108, "Member 'ShopMenuDetailsCurrency_C_GetDescription::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, K2Node_MakeArray_Array_1) == 0x000118, "Member 'ShopMenuDetailsCurrency_C_GetDescription::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_Array_Get_Item) == 0x000128, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_Array_Get_Item_1) == 0x000130, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000138, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000140, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_GetDisplayName_ReturnValue) == 0x000148, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_GetDisplayName_ReturnValue_1) == 0x000158, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_IsEmpty_ReturnValue_1) == 0x000168, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, K2Node_MakeArray_Array_2) == 0x000170, "Member 'ShopMenuDetailsCurrency_C_GetDescription::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_Array_Get_Item_2) == 0x000180, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_IsEmpty_ReturnValue_2) == 0x000188, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_IsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_K2_GetRootComponent_ReturnValue_2) == 0x000190, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_K2_GetRootComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_GetDisplayName_ReturnValue_2) == 0x000198, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_GetDisplayName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, K2Node_MakeArray_Array_3) == 0x0001A8, "Member 'ShopMenuDetailsCurrency_C_GetDescription::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_Array_Get_Item_3) == 0x0001B8, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_K2_GetRootComponent_ReturnValue_3) == 0x0001C0, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_K2_GetRootComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_IsEmpty_ReturnValue_3) == 0x0001C8, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_IsEmpty_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_GetDisplayName_ReturnValue_3) == 0x0001D0, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_GetDisplayName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0001E0, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0001F0, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000200, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_GetTextFromAssetByName_ReturnValue_3) == 0x000210, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_GetTextFromAssetByName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_GetTextFromAssetByName_ReturnValue_4) == 0x000220, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_GetTextFromAssetByName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_GetTextFromAssetByName_ReturnValue_5) == 0x000230, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_GetTextFromAssetByName_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_GetDescription, CallFunc_GetTextFromAssetByName_ReturnValue_6) == 0x000240, "Member 'ShopMenuDetailsCurrency_C_GetDescription::CallFunc_GetTextFromAssetByName_ReturnValue_6' has a wrong offset!");

// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.IsVisibieShowProductForCurrency
// 0x00E0 (0x00E0 - 0x0000)
struct ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency final
{
public:
	ESBRewardItemType                             RewardType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_933A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemIndex;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bVisible;                                          // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_933B[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ButtonIndex;                                       // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	bool                                          CallFunc_FindCraftMaster_bIsValid;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_933C[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster;              // 0x0028(0x0088)()
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_933D[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x00DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency) == 0x000008, "Wrong alignment on ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency");
static_assert(sizeof(ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency) == 0x0000E0, "Wrong size on ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency");
static_assert(offsetof(ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency, RewardType) == 0x000000, "Member 'ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency::RewardType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency, ItemIndex) == 0x000004, "Member 'ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency::ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency, bVisible) == 0x000008, "Member 'ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency::bVisible' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency, ButtonIndex) == 0x00000C, "Member 'ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency::ButtonIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency, K2Node_MakeArray_Array) == 0x000010, "Member 'ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency, CallFunc_FindCraftMaster_bIsValid) == 0x000020, "Member 'ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency::CallFunc_FindCraftMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency, CallFunc_FindCraftMaster_CraftMaster) == 0x000028, "Member 'ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency::CallFunc_FindCraftMaster_CraftMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0000B8, "Member 'ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency, CallFunc_Not_PreBool_ReturnValue) == 0x0000C0, "Member 'ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency, CallFunc_GetDisplayName_ReturnValue) == 0x0000C8, "Member 'ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000D8, "Member 'ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000D9, "Member 'ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0000DA, "Member 'ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0000DB, "Member 'ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency, CallFunc_IsEmpty_ReturnValue) == 0x0000DC, "Member 'ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");

}

