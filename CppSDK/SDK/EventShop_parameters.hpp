#pragma once

 

// Package: EventShop

#include "Basic.hpp"

#include "E_SBDetailsZoomIn_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function EventShop.EventShop_C.ExecuteUbergraph_EventShop
// 0x05E0 (0x05E0 - 0x0000)
struct EventShop_C_ExecuteUbergraph_EventShop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6442[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDialog_TacticalAbilityLearning_C*      K2Node_CustomEvent_Dialog_1;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDialog_TacticalAbilityLearning_C*      K2Node_CustomEvent_Dialog;                         // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result_4;                       // 0x0044(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6443[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_3;                      // 0x0048(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6444[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBEventShopExchangeHistory>    K2Node_CustomEvent_History;                        // 0x0050(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0060(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0070(0x0018)()
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAdventureBoardComponent*       CallFunc_GetAdventureBoardComponent_ReturnValue;   // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6445[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result_3;                       // 0x00A8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6446[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x00AC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCryptoCurrency                      K2Node_CustomEvent_Cryptocurrency;                 // 0x00B0(0x0028)(ConstParm, NoDestructor)
	class USBRmShopComponent*                     CallFunc_GetRmShopComponent_ReturnValue;           // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Request_GetCryptocurrency_ReturnValue;    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6447[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UUMG_ProductDetailMenu_C* Sender)> K2Node_CreateDelegate_OutputDelegate;              // 0x00E8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Result, int32 RetCode, struct FSBCryptoCurrency& Cryptocurrency)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00F8(0x0010)(ZeroConstructor, NoDestructor)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0108(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bShow;                  // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6448[0x6];                                     // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                K2Node_ComponentBoundEvent_Data;                   // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ProductDetailMenu_C*               CallFunc_Create_ReturnValue;                       // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ProductDetailMenu_C*               K2Node_CustomEvent_Sender_1;                       // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SBDetailsZoomIn                             K2Node_ComponentBoundEvent_Type;                   // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6449[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                K2Node_CustomEvent_Sender;                         // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bTrying;                        // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_644A[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventShopProductBox_Item_C*            K2Node_DynamicCast_AsEvent_Shop_Product_Box_Item;  // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result_2;                       // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x018B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_2;            // 0x0190(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_InMessage;                      // 0x01A8(0x0018)()
	bool                                          CallFunc_GetSystemMessageManager_IsValid;          // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_644B[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSystemMessageManager*                CallFunc_GetSystemMessageManager_ReturnValue;      // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_644C[0x2];                                     // 0x01D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, int32 RetCode, TArray<struct FSBEventShopExchangeHistory>& History)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x01D4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_Result_1;                       // 0x01E4(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_644D[0x3];                                     // 0x01E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x01E8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_644E[0x3];                                     // 0x01ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x01F0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0200(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_644F[0x2];                                     // 0x022A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Selected;                       // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6450[0x3];                                     // 0x0231(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBEventShopProduct                    CallFunc_Array_Get_Item_1;                         // 0x0238(0x0070)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6451[0x3];                                     // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBEventShopProduct                    K2Node_MakeStruct_SBEventShopProduct;              // 0x02B0(0x0070)()
	class FName                                   Temp_name_Variable;                                // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0328(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0338(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0348(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array_1;                          // 0x0358(0x0010)(ConstParm, ReferenceParm)
	struct FSBEventShopPurchaseItemInfo           CallFunc_Array_Get_Item_2;                         // 0x0368(0x0030)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x039C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6452[0x3];                                     // 0x039D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x03A0(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x03B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBEventShopStorage                           CallFunc_GetEventShopStorageData_ReturnValue;      // 0x03B4(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x03B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6453[0x2];                                     // 0x03B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_1;                              // 0x03B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x03C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EShopType                                     Temp_byte_Variable;                                // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6454[0x3];                                     // 0x03D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x03D4(0x0010)(ZeroConstructor, NoDestructor)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x03E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6455[0x3];                                     // 0x03E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x03E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventShopProductBox_Item_C*            K2Node_DynamicCast_AsEvent_Shop_Product_Box_Item_1; // 0x03F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetTAbiiltyClass_ClassType;               // 0x03F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6456[0x2];                                     // 0x03FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_6;            // 0x03FC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x040C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EYesNoDialogResult                            K2Node_CustomEvent_Result;                         // 0x040D(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x040E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6457[0x1];                                     // 0x040F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0410(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0420(0x0018)()
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue;              // 0x0438(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_StorageCheckSelectItem_Ret;               // 0x0440(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6458[0x3];                                     // 0x0441(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0444(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0454(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6459[0x3];                                     // 0x0455(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x0458(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0468(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_645A[0x4];                                     // 0x046C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopProductBox_Item_C*            K2Node_CustomEvent_Item;                           // 0x0470(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bOnNumberInput;                 // 0x0478(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0479(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_645B[0x2];                                     // 0x047A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x047C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventShopCheckList_C*                  CallFunc_Create_ReturnValue_1;                     // 0x0480(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x0488(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_ComponentBoundEvent_Index;                  // 0x0498(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x049C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x04A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x04A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x04A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x04A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_645C[0x4];                                     // 0x04A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x04A8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue_1;                // 0x04B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x04B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;                    // 0x04B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x04BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_645D[0x5];                                     // 0x04BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_1;         // 0x04C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType_1;        // 0x04D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_645E[0x7];                                     // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x04D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x04E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_645F[0x3];                                     // 0x04E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedIndex_ReturnValue;             // 0x04EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedIndex_ReturnValue_1;           // 0x04F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_3;                     // 0x04F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x04F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x04FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x04FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6460[0x2];                                     // 0x04FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_1;                           // 0x0500(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Selected)>               K2Node_CreateDelegate_OutputDelegate_10;           // 0x0508(0x0010)(ZeroConstructor, NoDestructor)
	class UEventShopStorageSelect_C*              CallFunc_GetBpStorageSelect_Widget;                // 0x0518(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventShopStorageSelect_C*              CallFunc_GetBpStorageSelect_Widget_1;              // 0x0520(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USelectorDialog_C*                      CallFunc_Create_ReturnValue_2;                     // 0x0528(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDialog_TacticalAbilityLearning_C*      CallFunc_Create_ReturnValue_3;                     // 0x0530(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Ret;                            // 0x0538(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6461[0x4];                                     // 0x053C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_2;            // 0x0540(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(bool Result, int32 RetCode)>   K2Node_CreateDelegate_OutputDelegate_11;           // 0x0550(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0560(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0578(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6462[0x7];                                     // 0x0579(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBClassType>                          CallFunc_GetSortedPlayerClassList_ReturnValue;     // 0x0580(0x0010)(ReferenceParm)
	ESBClassType                                  CallFunc_Array_Get_Item_3;                         // 0x0590(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6463[0x3];                                     // 0x0591(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_12;           // 0x0594(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_RequestCharaSkillMasteryOthers_ReturnValue; // 0x05A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6464[0x3];                                     // 0x05A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x05A8(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x05B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x05B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x05B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x05B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x05B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x05B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6465[0x7];                                     // 0x05B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x05C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x05C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x05D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x05D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x05DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_ExecuteUbergraph_EventShop) == 0x000008, "Wrong alignment on EventShop_C_ExecuteUbergraph_EventShop");
static_assert(sizeof(EventShop_C_ExecuteUbergraph_EventShop) == 0x0005E0, "Wrong size on EventShop_C_ExecuteUbergraph_EventShop");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, EntryPoint) == 0x000000, "Member 'EventShop_C_ExecuteUbergraph_EventShop::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_Dialog_1) == 0x000008, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_Dialog_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_Dialog) == 0x000010, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_Dialog' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_PlaySE_ReturnValue) == 0x000040, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_Result_4) == 0x000044, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_Result_4' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_RetCode_3) == 0x000048, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_RetCode_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_History) == 0x000050, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_History' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetSBRetMessage_ReturnValue) == 0x000060, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000070, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetSBPlayerController_ReturnValue) == 0x000088, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetAdventureBoardComponent_ReturnValue) == 0x000090, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetAdventureBoardComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_RetCode_2) == 0x000098, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x0000A0, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_Result_3) == 0x0000A8, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_Result_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_RetCode_1) == 0x0000AC, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_Cryptocurrency) == 0x0000B0, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_Cryptocurrency' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetRmShopComponent_ReturnValue) == 0x0000D8, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetRmShopComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Request_GetCryptocurrency_ReturnValue) == 0x0000E0, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Request_GetCryptocurrency_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_PlaySE_ReturnValue_1) == 0x0000E4, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CreateDelegate_OutputDelegate) == 0x0000E8, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000F8, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_MakeArray_Array) == 0x000108, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Array_Get_Item) == 0x000118, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000120, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetDisplayName_ReturnValue) == 0x000128, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_ComponentBoundEvent_bShow) == 0x000138, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_ComponentBoundEvent_bShow' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Not_PreBool_ReturnValue) == 0x000139, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_ComponentBoundEvent_Data) == 0x000140, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_ComponentBoundEvent_Data' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetOwningPlayer_ReturnValue) == 0x000148, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Create_ReturnValue) == 0x000150, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_Sender_1) == 0x000158, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_AddChildToCanvas_ReturnValue) == 0x000160, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_ComponentBoundEvent_Type) == 0x000168, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_ComponentBoundEvent_Type' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_Sender) == 0x000170, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_bTrying) == 0x000178, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_bTrying' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, Temp_int_Array_Index_Variable) == 0x00017C, "Member 'EventShop_C_ExecuteUbergraph_EventShop::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_DynamicCast_AsEvent_Shop_Product_Box_Item) == 0x000180, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_DynamicCast_AsEvent_Shop_Product_Box_Item' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_DynamicCast_bSuccess) == 0x000188, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_IsValid_ReturnValue) == 0x000189, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_Result_2) == 0x00018A, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_Result_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_SwitchEnum_CmpSuccess) == 0x00018B, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, Temp_int_Array_Index_Variable_1) == 0x00018C, "Member 'EventShop_C_ExecuteUbergraph_EventShop::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CreateDelegate_OutputDelegate_2) == 0x000190, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, Temp_int_Loop_Counter_Variable) == 0x0001A0, "Member 'EventShop_C_ExecuteUbergraph_EventShop::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Add_IntInt_ReturnValue) == 0x0001A4, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_InMessage) == 0x0001A8, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_InMessage' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetSystemMessageManager_IsValid) == 0x0001C0, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetSystemMessageManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetSystemMessageManager_ReturnValue) == 0x0001C8, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetSystemMessageManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, Temp_bool_True_if_break_was_hit_Variable) == 0x0001D0, "Member 'EventShop_C_ExecuteUbergraph_EventShop::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001D1, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CreateDelegate_OutputDelegate_3) == 0x0001D4, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_Result_1) == 0x0001E4, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_RetCode) == 0x0001E8, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001EC, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x0001F0, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000200, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, Temp_int_Loop_Counter_Variable_1) == 0x000218, "Member 'EventShop_C_ExecuteUbergraph_EventShop::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Add_IntInt_ReturnValue_1) == 0x00021C, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_PlaySE_ReturnValue_2) == 0x000220, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Array_Length_ReturnValue) == 0x000224, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000228, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Not_PreBool_ReturnValue_2) == 0x000229, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_Selected) == 0x00022C, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_Selected' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_IsEmpty_ReturnValue) == 0x000230, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, Temp_int_Array_Index_Variable_2) == 0x000234, "Member 'EventShop_C_ExecuteUbergraph_EventShop::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Array_Get_Item_1) == 0x000238, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0002A8, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Subtract_IntInt_ReturnValue) == 0x0002AC, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_MakeStruct_SBEventShopProduct) == 0x0002B0, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_MakeStruct_SBEventShopProduct' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, Temp_name_Variable) == 0x000320, "Member 'EventShop_C_ExecuteUbergraph_EventShop::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000328, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000338, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000348, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_MakeArray_Array_1) == 0x000358, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Array_Get_Item_2) == 0x000368, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Array_Length_ReturnValue_1) == 0x000398, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Less_IntInt_ReturnValue) == 0x00039C, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CreateDelegate_OutputDelegate_4) == 0x0003A0, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Array_AddUnique_ReturnValue) == 0x0003B0, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetEventShopStorageData_ReturnValue) == 0x0003B4, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetEventShopStorageData_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_SwitchEnum_CmpSuccess_1) == 0x0003B5, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, Temp_name_Variable_1) == 0x0003B8, "Member 'EventShop_C_ExecuteUbergraph_EventShop::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, Temp_name_Variable_2) == 0x0003C0, "Member 'EventShop_C_ExecuteUbergraph_EventShop::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, Temp_name_Variable_3) == 0x0003C8, "Member 'EventShop_C_ExecuteUbergraph_EventShop::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, Temp_byte_Variable) == 0x0003D0, "Member 'EventShop_C_ExecuteUbergraph_EventShop::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CreateDelegate_OutputDelegate_5) == 0x0003D4, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetClassType_ReturnValue) == 0x0003E4, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetChildAt_ReturnValue) == 0x0003E8, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_DynamicCast_AsEvent_Shop_Product_Box_Item_1) == 0x0003F0, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_DynamicCast_AsEvent_Shop_Product_Box_Item_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_DynamicCast_bSuccess_1) == 0x0003F8, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetTAbiiltyClass_ClassType) == 0x0003F9, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetTAbiiltyClass_ClassType' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CreateDelegate_OutputDelegate_6) == 0x0003FC, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00040C, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_Result) == 0x00040D, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_SwitchEnum_CmpSuccess_2) == 0x00040E, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000410, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000420, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_ShowYesNoDialog_ReturnValue) == 0x000438, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_ShowYesNoDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_StorageCheckSelectItem_Ret) == 0x000440, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_StorageCheckSelectItem_Ret' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CreateDelegate_OutputDelegate_7) == 0x000444, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Not_PreBool_ReturnValue_3) == 0x000454, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CreateDelegate_OutputDelegate_8) == 0x000458, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, Temp_int_Loop_Counter_Variable_2) == 0x000468, "Member 'EventShop_C_ExecuteUbergraph_EventShop::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_Item) == 0x000470, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_bOnNumberInput) == 0x000478, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_bOnNumberInput' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Less_IntInt_ReturnValue_1) == 0x000479, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Add_IntInt_ReturnValue_2) == 0x00047C, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Create_ReturnValue_1) == 0x000480, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CreateDelegate_OutputDelegate_9) == 0x000488, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_ComponentBoundEvent_Index) == 0x000498, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_ComponentBoundEvent_Index' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_Index) == 0x00049C, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0004A0, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetVisibility_ReturnValue) == 0x0004A1, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0004A2, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, Temp_bool_Variable) == 0x0004A3, "Member 'EventShop_C_ExecuteUbergraph_EventShop::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_K2_SetTimer_ReturnValue) == 0x0004A8, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_K2_SetTimer_ReturnValue_1) == 0x0004B0, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_K2_SetTimer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, Temp_bool_Variable_1) == 0x0004B8, "Member 'EventShop_C_ExecuteUbergraph_EventShop::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_SwitchEnum_CmpSuccess_3) == 0x0004B9, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Not_PreBool_ReturnValue_4) == 0x0004BA, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_ComponentBoundEvent_SelectedItem_1) == 0x0004C0, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_ComponentBoundEvent_SelectedItem_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_ComponentBoundEvent_SelectionType_1) == 0x0004D0, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_ComponentBoundEvent_SelectionType_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_ComponentBoundEvent_SelectedItem) == 0x0004D8, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_ComponentBoundEvent_SelectionType) == 0x0004E8, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetSelectedIndex_ReturnValue) == 0x0004EC, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetSelectedIndex_ReturnValue_1) == 0x0004F0, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetSelectedIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_PlaySE_ReturnValue_3) == 0x0004F4, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_PlaySE_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, Temp_int_Variable) == 0x0004F8, "Member 'EventShop_C_ExecuteUbergraph_EventShop::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_Select_Default) == 0x0004FC, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0004FD, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_Select_Default_1) == 0x000500, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CreateDelegate_OutputDelegate_10) == 0x000508, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetBpStorageSelect_Widget) == 0x000518, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetBpStorageSelect_Widget' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetBpStorageSelect_Widget_1) == 0x000520, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetBpStorageSelect_Widget_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Create_ReturnValue_2) == 0x000528, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Create_ReturnValue_3) == 0x000530, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CustomEvent_Ret) == 0x000538, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CustomEvent_Ret' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetSBRetMessage_ReturnValue_2) == 0x000540, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetSBRetMessage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CreateDelegate_OutputDelegate_11) == 0x000550, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000560, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000578, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetSortedPlayerClassList_ReturnValue) == 0x000580, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetSortedPlayerClassList_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Array_Get_Item_3) == 0x000590, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_CreateDelegate_OutputDelegate_12) == 0x000594, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_RequestCharaSkillMasteryOthers_ReturnValue) == 0x0005A4, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_RequestCharaSkillMasteryOthers_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0005A8, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Array_Length_ReturnValue_2) == 0x0005B0, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_Less_IntInt_ReturnValue_2) == 0x0005B4, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_BooleanAND_ReturnValue) == 0x0005B5, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_ComponentBoundEvent_bIsChecked) == 0x0005B6, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, Temp_bool_Variable_2) == 0x0005B7, "Member 'EventShop_C_ExecuteUbergraph_EventShop::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetConfigSaveManager_IsValid) == 0x0005B8, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetConfigSaveManager_ReturnValue) == 0x0005C0, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_GetCharacterId_ReturnValue) == 0x0005C8, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_MakeLiteralByte_ReturnValue) == 0x0005D8, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0005D9, "Member 'EventShop_C_ExecuteUbergraph_EventShop::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ExecuteUbergraph_EventShop, K2Node_Select_Default_2) == 0x0005DA, "Member 'EventShop_C_ExecuteUbergraph_EventShop::K2Node_Select_Default_2' has a wrong offset!");

// Function EventShop.EventShop_C.BndEvt__EventShop_Box_HideUnequipableItems_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct EventShop_C_BndEvt__EventShop_Box_HideUnequipableItems_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_BndEvt__EventShop_Box_HideUnequipableItems_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on EventShop_C_BndEvt__EventShop_Box_HideUnequipableItems_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(EventShop_C_BndEvt__EventShop_Box_HideUnequipableItems_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on EventShop_C_BndEvt__EventShop_Box_HideUnequipableItems_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(EventShop_C_BndEvt__EventShop_Box_HideUnequipableItems_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'EventShop_C_BndEvt__EventShop_Box_HideUnequipableItems_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function EventShop.EventShop_C.OnCharaSkillMasteryOthersInfo_Event
// 0x0004 (0x0004 - 0x0000)
struct EventShop_C_OnCharaSkillMasteryOthersInfo_Event final
{
public:
	int32                                         Ret;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_OnCharaSkillMasteryOthersInfo_Event) == 0x000004, "Wrong alignment on EventShop_C_OnCharaSkillMasteryOthersInfo_Event");
static_assert(sizeof(EventShop_C_OnCharaSkillMasteryOthersInfo_Event) == 0x000004, "Wrong size on EventShop_C_OnCharaSkillMasteryOthersInfo_Event");
static_assert(offsetof(EventShop_C_OnCharaSkillMasteryOthersInfo_Event, Ret) == 0x000000, "Member 'EventShop_C_OnCharaSkillMasteryOthersInfo_Event::Ret' has a wrong offset!");

// Function EventShop.EventShop_C.BndEvt__EventShop_txt_filter_list_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct EventShop_C_BndEvt__EventShop_txt_filter_list_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 Param_SelectedItem;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_BndEvt__EventShop_txt_filter_list_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on EventShop_C_BndEvt__EventShop_txt_filter_list_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(EventShop_C_BndEvt__EventShop_txt_filter_list_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on EventShop_C_BndEvt__EventShop_txt_filter_list_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(EventShop_C_BndEvt__EventShop_txt_filter_list_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature, Param_SelectedItem) == 0x000000, "Member 'EventShop_C_BndEvt__EventShop_txt_filter_list_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature::Param_SelectedItem' has a wrong offset!");
static_assert(offsetof(EventShop_C_BndEvt__EventShop_txt_filter_list_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'EventShop_C_BndEvt__EventShop_txt_filter_list_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function EventShop.EventShop_C.BndEvt__EventShop_txt_sort_list_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct EventShop_C_BndEvt__EventShop_txt_sort_list_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 Param_SelectedItem;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_BndEvt__EventShop_txt_sort_list_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on EventShop_C_BndEvt__EventShop_txt_sort_list_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(EventShop_C_BndEvt__EventShop_txt_sort_list_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on EventShop_C_BndEvt__EventShop_txt_sort_list_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(EventShop_C_BndEvt__EventShop_txt_sort_list_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature, Param_SelectedItem) == 0x000000, "Member 'EventShop_C_BndEvt__EventShop_txt_sort_list_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature::Param_SelectedItem' has a wrong offset!");
static_assert(offsetof(EventShop_C_BndEvt__EventShop_txt_sort_list_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'EventShop_C_BndEvt__EventShop_txt_sort_list_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function EventShop.EventShop_C.UpdateInfoClickedBanner
// 0x0004 (0x0004 - 0x0000)
struct EventShop_C_UpdateInfoClickedBanner final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_UpdateInfoClickedBanner) == 0x000004, "Wrong alignment on EventShop_C_UpdateInfoClickedBanner");
static_assert(sizeof(EventShop_C_UpdateInfoClickedBanner) == 0x000004, "Wrong size on EventShop_C_UpdateInfoClickedBanner");
static_assert(offsetof(EventShop_C_UpdateInfoClickedBanner, Param_Index) == 0x000000, "Member 'EventShop_C_UpdateInfoClickedBanner::Param_Index' has a wrong offset!");

// Function EventShop.EventShop_C.BndEvt__EventShopTabBox_K2Node_ComponentBoundEvent_5_OnClickBanner__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct EventShop_C_BndEvt__EventShopTabBox_K2Node_ComponentBoundEvent_5_OnClickBanner__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_BndEvt__EventShopTabBox_K2Node_ComponentBoundEvent_5_OnClickBanner__DelegateSignature) == 0x000004, "Wrong alignment on EventShop_C_BndEvt__EventShopTabBox_K2Node_ComponentBoundEvent_5_OnClickBanner__DelegateSignature");
static_assert(sizeof(EventShop_C_BndEvt__EventShopTabBox_K2Node_ComponentBoundEvent_5_OnClickBanner__DelegateSignature) == 0x000004, "Wrong size on EventShop_C_BndEvt__EventShopTabBox_K2Node_ComponentBoundEvent_5_OnClickBanner__DelegateSignature");
static_assert(offsetof(EventShop_C_BndEvt__EventShopTabBox_K2Node_ComponentBoundEvent_5_OnClickBanner__DelegateSignature, Param_Index) == 0x000000, "Member 'EventShop_C_BndEvt__EventShopTabBox_K2Node_ComponentBoundEvent_5_OnClickBanner__DelegateSignature::Param_Index' has a wrong offset!");

// Function EventShop.EventShop_C.OnListItemSelected
// 0x0010 (0x0010 - 0x0000)
struct EventShop_C_OnListItemSelected final
{
public:
	class UEventShopProductBox_Item_C*            Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOnNumberInput;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_OnListItemSelected) == 0x000008, "Wrong alignment on EventShop_C_OnListItemSelected");
static_assert(sizeof(EventShop_C_OnListItemSelected) == 0x000010, "Wrong size on EventShop_C_OnListItemSelected");
static_assert(offsetof(EventShop_C_OnListItemSelected, Item) == 0x000000, "Member 'EventShop_C_OnListItemSelected::Item' has a wrong offset!");
static_assert(offsetof(EventShop_C_OnListItemSelected, bOnNumberInput) == 0x000008, "Member 'EventShop_C_OnListItemSelected::bOnNumberInput' has a wrong offset!");

// Function EventShop.EventShop_C.OnEndCheckRequest
// 0x0001 (0x0001 - 0x0000)
struct EventShop_C_OnEndCheckRequest final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_OnEndCheckRequest) == 0x000001, "Wrong alignment on EventShop_C_OnEndCheckRequest");
static_assert(sizeof(EventShop_C_OnEndCheckRequest) == 0x000001, "Wrong size on EventShop_C_OnEndCheckRequest");
static_assert(offsetof(EventShop_C_OnEndCheckRequest, Result) == 0x000000, "Member 'EventShop_C_OnEndCheckRequest::Result' has a wrong offset!");

// Function EventShop.EventShop_C.OnStorageSelected
// 0x0004 (0x0004 - 0x0000)
struct EventShop_C_OnStorageSelected final
{
public:
	int32                                         Selected;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_OnStorageSelected) == 0x000004, "Wrong alignment on EventShop_C_OnStorageSelected");
static_assert(sizeof(EventShop_C_OnStorageSelected) == 0x000004, "Wrong size on EventShop_C_OnStorageSelected");
static_assert(offsetof(EventShop_C_OnStorageSelected, Selected) == 0x000000, "Member 'EventShop_C_OnStorageSelected::Selected' has a wrong offset!");

// Function EventShop.EventShop_C.OnExchangeItem_Event
// 0x0008 (0x0008 - 0x0000)
struct EventShop_C_OnExchangeItem_Event final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6466[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_OnExchangeItem_Event) == 0x000004, "Wrong alignment on EventShop_C_OnExchangeItem_Event");
static_assert(sizeof(EventShop_C_OnExchangeItem_Event) == 0x000008, "Wrong size on EventShop_C_OnExchangeItem_Event");
static_assert(offsetof(EventShop_C_OnExchangeItem_Event, Result) == 0x000000, "Member 'EventShop_C_OnExchangeItem_Event::Result' has a wrong offset!");
static_assert(offsetof(EventShop_C_OnExchangeItem_Event, RetCode) == 0x000004, "Member 'EventShop_C_OnExchangeItem_Event::RetCode' has a wrong offset!");

// Function EventShop.EventShop_C.ShowSystemMessageDialog
// 0x0018 (0x0018 - 0x0000)
struct EventShop_C_ShowSystemMessageDialog final
{
public:
	class FText                                   InMessage;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(EventShop_C_ShowSystemMessageDialog) == 0x000008, "Wrong alignment on EventShop_C_ShowSystemMessageDialog");
static_assert(sizeof(EventShop_C_ShowSystemMessageDialog) == 0x000018, "Wrong size on EventShop_C_ShowSystemMessageDialog");
static_assert(offsetof(EventShop_C_ShowSystemMessageDialog, InMessage) == 0x000000, "Member 'EventShop_C_ShowSystemMessageDialog::InMessage' has a wrong offset!");

// Function EventShop.EventShop_C.CloseConfirmDialog
// 0x0001 (0x0001 - 0x0000)
struct EventShop_C_CloseConfirmDialog final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_CloseConfirmDialog) == 0x000001, "Wrong alignment on EventShop_C_CloseConfirmDialog");
static_assert(sizeof(EventShop_C_CloseConfirmDialog) == 0x000001, "Wrong size on EventShop_C_CloseConfirmDialog");
static_assert(offsetof(EventShop_C_CloseConfirmDialog, Result) == 0x000000, "Member 'EventShop_C_CloseConfirmDialog::Result' has a wrong offset!");

// Function EventShop.EventShop_C.OnChangeTrying
// 0x0010 (0x0010 - 0x0000)
struct EventShop_C_OnChangeTrying final
{
public:
	class UBP_SBProductItemData_C*                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTrying;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_OnChangeTrying) == 0x000008, "Wrong alignment on EventShop_C_OnChangeTrying");
static_assert(sizeof(EventShop_C_OnChangeTrying) == 0x000010, "Wrong size on EventShop_C_OnChangeTrying");
static_assert(offsetof(EventShop_C_OnChangeTrying, Sender) == 0x000000, "Member 'EventShop_C_OnChangeTrying::Sender' has a wrong offset!");
static_assert(offsetof(EventShop_C_OnChangeTrying, bTrying) == 0x000008, "Member 'EventShop_C_OnChangeTrying::bTrying' has a wrong offset!");

// Function EventShop.EventShop_C.BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_3_OnClickZoomIn__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct EventShop_C_BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_3_OnClickZoomIn__DelegateSignature final
{
public:
	E_SBDetailsZoomIn                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_3_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong alignment on EventShop_C_BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_3_OnClickZoomIn__DelegateSignature");
static_assert(sizeof(EventShop_C_BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_3_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong size on EventShop_C_BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_3_OnClickZoomIn__DelegateSignature");
static_assert(offsetof(EventShop_C_BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_3_OnClickZoomIn__DelegateSignature, Type) == 0x000000, "Member 'EventShop_C_BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_3_OnClickZoomIn__DelegateSignature::Type' has a wrong offset!");

// Function EventShop.EventShop_C.OnCloseDetailMenu
// 0x0008 (0x0008 - 0x0000)
struct EventShop_C_OnCloseDetailMenu final
{
public:
	class UUMG_ProductDetailMenu_C*               Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_OnCloseDetailMenu) == 0x000008, "Wrong alignment on EventShop_C_OnCloseDetailMenu");
static_assert(sizeof(EventShop_C_OnCloseDetailMenu) == 0x000008, "Wrong size on EventShop_C_OnCloseDetailMenu");
static_assert(offsetof(EventShop_C_OnCloseDetailMenu, Sender) == 0x000000, "Member 'EventShop_C_OnCloseDetailMenu::Sender' has a wrong offset!");

// Function EventShop.EventShop_C.BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_4_OnClickItemBoxDetail__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct EventShop_C_BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_4_OnClickItemBoxDetail__DelegateSignature final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_4_OnClickItemBoxDetail__DelegateSignature) == 0x000008, "Wrong alignment on EventShop_C_BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_4_OnClickItemBoxDetail__DelegateSignature");
static_assert(sizeof(EventShop_C_BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_4_OnClickItemBoxDetail__DelegateSignature) == 0x000008, "Wrong size on EventShop_C_BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_4_OnClickItemBoxDetail__DelegateSignature");
static_assert(offsetof(EventShop_C_BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_4_OnClickItemBoxDetail__DelegateSignature, Data) == 0x000000, "Member 'EventShop_C_BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_4_OnClickItemBoxDetail__DelegateSignature::Data' has a wrong offset!");

// Function EventShop.EventShop_C.BndEvt__UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnShowDetails__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct EventShop_C_BndEvt__UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnShowDetails__DelegateSignature final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_BndEvt__UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnShowDetails__DelegateSignature) == 0x000001, "Wrong alignment on EventShop_C_BndEvt__UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnShowDetails__DelegateSignature");
static_assert(sizeof(EventShop_C_BndEvt__UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnShowDetails__DelegateSignature) == 0x000001, "Wrong size on EventShop_C_BndEvt__UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnShowDetails__DelegateSignature");
static_assert(offsetof(EventShop_C_BndEvt__UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnShowDetails__DelegateSignature, bShow) == 0x000000, "Member 'EventShop_C_BndEvt__UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnShowDetails__DelegateSignature::bShow' has a wrong offset!");

// Function EventShop.EventShop_C.OnGetCryptocurrency_Event
// 0x0030 (0x0030 - 0x0000)
struct EventShop_C_OnGetCryptocurrency_Event final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6467[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCryptoCurrency                      Cryptocurrency;                                    // 0x0008(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(EventShop_C_OnGetCryptocurrency_Event) == 0x000008, "Wrong alignment on EventShop_C_OnGetCryptocurrency_Event");
static_assert(sizeof(EventShop_C_OnGetCryptocurrency_Event) == 0x000030, "Wrong size on EventShop_C_OnGetCryptocurrency_Event");
static_assert(offsetof(EventShop_C_OnGetCryptocurrency_Event, Result) == 0x000000, "Member 'EventShop_C_OnGetCryptocurrency_Event::Result' has a wrong offset!");
static_assert(offsetof(EventShop_C_OnGetCryptocurrency_Event, RetCode) == 0x000004, "Member 'EventShop_C_OnGetCryptocurrency_Event::RetCode' has a wrong offset!");
static_assert(offsetof(EventShop_C_OnGetCryptocurrency_Event, Cryptocurrency) == 0x000008, "Member 'EventShop_C_OnGetCryptocurrency_Event::Cryptocurrency' has a wrong offset!");

// Function EventShop.EventShop_C.OnGetAdvBoard_Event
// 0x0004 (0x0004 - 0x0000)
struct EventShop_C_OnGetAdvBoard_Event final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_OnGetAdvBoard_Event) == 0x000004, "Wrong alignment on EventShop_C_OnGetAdvBoard_Event");
static_assert(sizeof(EventShop_C_OnGetAdvBoard_Event) == 0x000004, "Wrong size on EventShop_C_OnGetAdvBoard_Event");
static_assert(offsetof(EventShop_C_OnGetAdvBoard_Event, RetCode) == 0x000000, "Member 'EventShop_C_OnGetAdvBoard_Event::RetCode' has a wrong offset!");

// Function EventShop.EventShop_C.OnGetExchangeHistory_Event
// 0x0018 (0x0018 - 0x0000)
struct EventShop_C_OnGetExchangeHistory_Event final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6468[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBEventShopExchangeHistory>    History;                                           // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(EventShop_C_OnGetExchangeHistory_Event) == 0x000008, "Wrong alignment on EventShop_C_OnGetExchangeHistory_Event");
static_assert(sizeof(EventShop_C_OnGetExchangeHistory_Event) == 0x000018, "Wrong size on EventShop_C_OnGetExchangeHistory_Event");
static_assert(offsetof(EventShop_C_OnGetExchangeHistory_Event, Result) == 0x000000, "Member 'EventShop_C_OnGetExchangeHistory_Event::Result' has a wrong offset!");
static_assert(offsetof(EventShop_C_OnGetExchangeHistory_Event, RetCode) == 0x000004, "Member 'EventShop_C_OnGetExchangeHistory_Event::RetCode' has a wrong offset!");
static_assert(offsetof(EventShop_C_OnGetExchangeHistory_Event, History) == 0x000008, "Member 'EventShop_C_OnGetExchangeHistory_Event::History' has a wrong offset!");

// Function EventShop.EventShop_C.UnbindTacticalAbilityDialog
// 0x0008 (0x0008 - 0x0000)
struct EventShop_C_UnbindTacticalAbilityDialog final
{
public:
	class UDialog_TacticalAbilityLearning_C*      Dialog;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_UnbindTacticalAbilityDialog) == 0x000008, "Wrong alignment on EventShop_C_UnbindTacticalAbilityDialog");
static_assert(sizeof(EventShop_C_UnbindTacticalAbilityDialog) == 0x000008, "Wrong size on EventShop_C_UnbindTacticalAbilityDialog");
static_assert(offsetof(EventShop_C_UnbindTacticalAbilityDialog, Dialog) == 0x000000, "Member 'EventShop_C_UnbindTacticalAbilityDialog::Dialog' has a wrong offset!");

// Function EventShop.EventShop_C.BindTacticalAbilityDialog
// 0x0008 (0x0008 - 0x0000)
struct EventShop_C_BindTacticalAbilityDialog final
{
public:
	class UDialog_TacticalAbilityLearning_C*      Dialog;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_BindTacticalAbilityDialog) == 0x000008, "Wrong alignment on EventShop_C_BindTacticalAbilityDialog");
static_assert(sizeof(EventShop_C_BindTacticalAbilityDialog) == 0x000008, "Wrong size on EventShop_C_BindTacticalAbilityDialog");
static_assert(offsetof(EventShop_C_BindTacticalAbilityDialog, Dialog) == 0x000000, "Member 'EventShop_C_BindTacticalAbilityDialog::Dialog' has a wrong offset!");

// Function EventShop.EventShop_C.Initialize
// 0x0118 (0x0118 - 0x0000)
struct EventShop_C_Initialize final
{
public:
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6469[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnequipableItemsSettingEventShop_ReturnValue; // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_646A[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_646B[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_646C[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EShopType                                     Temp_byte_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_646D[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_646E[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_646F[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid_1;            // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6470[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue_1;        // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_OutIsValid; // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6471[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_ReturnValue; // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6472[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6473[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6474[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventShopComponent*                  CallFunc_GetEventShopComponent_ReturnValue;        // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_Initialize) == 0x000008, "Wrong alignment on EventShop_C_Initialize");
static_assert(sizeof(EventShop_C_Initialize) == 0x000118, "Wrong size on EventShop_C_Initialize");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_GetCharacterId_ReturnValue) == 0x000000, "Member 'EventShop_C_Initialize::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_GetConfigSaveManager_IsValid) == 0x000010, "Member 'EventShop_C_Initialize::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000018, "Member 'EventShop_C_Initialize::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_IsUnequipableItemsSettingEventShop_ReturnValue) == 0x000020, "Member 'EventShop_C_Initialize::CallFunc_IsUnequipableItemsSettingEventShop_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'EventShop_C_Initialize::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_GetSBPlayerController_ReturnValue) == 0x000038, "Member 'EventShop_C_Initialize::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue) == 0x000040, "Member 'EventShop_C_Initialize::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_GetPlayerController_ReturnValue) == 0x000048, "Member 'EventShop_C_Initialize::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000050, "Member 'EventShop_C_Initialize::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'EventShop_C_Initialize::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_GetNetworkDataCache_IsValid) == 0x000059, "Member 'EventShop_C_Initialize::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000060, "Member 'EventShop_C_Initialize::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, Temp_byte_Variable) == 0x000068, "Member 'EventShop_C_Initialize::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, K2Node_CreateDelegate_OutputDelegate_1) == 0x00006C, "Member 'EventShop_C_Initialize::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, Temp_int_Variable) == 0x00007C, "Member 'EventShop_C_Initialize::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, Temp_int_Variable_1) == 0x000080, "Member 'EventShop_C_Initialize::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_GetTextFromAsset_ReturnValue) == 0x000088, "Member 'EventShop_C_Initialize::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000098, "Member 'EventShop_C_Initialize::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000A8, "Member 'EventShop_C_Initialize::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_Add_IntInt_ReturnValue) == 0x0000AC, "Member 'EventShop_C_Initialize::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000B0, "Member 'EventShop_C_Initialize::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, Temp_int_Variable_2) == 0x0000B4, "Member 'EventShop_C_Initialize::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_GetNetworkDataCache_IsValid_1) == 0x0000B8, "Member 'EventShop_C_Initialize::CallFunc_GetNetworkDataCache_IsValid_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_GetNetworkDataCache_ReturnValue_1) == 0x0000C0, "Member 'EventShop_C_Initialize::CallFunc_GetNetworkDataCache_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_OutIsValid) == 0x0000C8, "Member 'EventShop_C_Initialize::CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_OutIsValid' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_ReturnValue) == 0x0000CC, "Member 'EventShop_C_Initialize::CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, Temp_int_Variable_3) == 0x0000D0, "Member 'EventShop_C_Initialize::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_GetMasterDataManager_IsValid) == 0x0000D4, "Member 'EventShop_C_Initialize::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000D8, "Member 'EventShop_C_Initialize::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_GetPlayerController_ReturnValue_1) == 0x0000E0, "Member 'EventShop_C_Initialize::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, Temp_int_Variable_4) == 0x0000E8, "Member 'EventShop_C_Initialize::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x0000F0, "Member 'EventShop_C_Initialize::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, K2Node_DynamicCast_bSuccess_1) == 0x0000F8, "Member 'EventShop_C_Initialize::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_GetEventShopComponent_ReturnValue) == 0x000100, "Member 'EventShop_C_Initialize::CallFunc_GetEventShopComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, Temp_int_Variable_5) == 0x000108, "Member 'EventShop_C_Initialize::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, K2Node_Select_Default) == 0x00010C, "Member 'EventShop_C_Initialize::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EventShop_C_Initialize, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000110, "Member 'EventShop_C_Initialize::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function EventShop.EventShop_C.Release
// 0x0010 (0x0010 - 0x0000)
struct EventShop_C_Release final
{
public:
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(EventShop_C_Release) == 0x000004, "Wrong alignment on EventShop_C_Release");
static_assert(sizeof(EventShop_C_Release) == 0x000010, "Wrong size on EventShop_C_Release");
static_assert(offsetof(EventShop_C_Release, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'EventShop_C_Release::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function EventShop.EventShop_C.CreateEventList
// 0x0088 (0x0088 - 0x0000)
struct EventShop_C_CreateEventList final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6475[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBEventShopMasterData>         CallFunc_BP_GetEventShopMaster_ReturnValue;        // 0x0010(0x0010)(ReferenceParm)
	struct FSBEventShopMasterData                 CallFunc_Array_Get_Item;                           // 0x0020(0x0058)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_Valid_Period_IsValid;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckShopType_IsOk;                       // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_CreateEventList) == 0x000008, "Wrong alignment on EventShop_C_CreateEventList");
static_assert(sizeof(EventShop_C_CreateEventList) == 0x000088, "Wrong size on EventShop_C_CreateEventList");
static_assert(offsetof(EventShop_C_CreateEventList, Temp_int_Array_Index_Variable) == 0x000000, "Member 'EventShop_C_CreateEventList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateEventList, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'EventShop_C_CreateEventList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateEventList, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'EventShop_C_CreateEventList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateEventList, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'EventShop_C_CreateEventList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateEventList, CallFunc_BP_GetEventShopMaster_ReturnValue) == 0x000010, "Member 'EventShop_C_CreateEventList::CallFunc_BP_GetEventShopMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateEventList, CallFunc_Array_Get_Item) == 0x000020, "Member 'EventShop_C_CreateEventList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateEventList, CallFunc_Array_Add_ReturnValue) == 0x000078, "Member 'EventShop_C_CreateEventList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateEventList, CallFunc_Array_Length_ReturnValue) == 0x00007C, "Member 'EventShop_C_CreateEventList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateEventList, CallFunc_Is_Valid_Period_IsValid) == 0x000080, "Member 'EventShop_C_CreateEventList::CallFunc_Is_Valid_Period_IsValid' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateEventList, CallFunc_Less_IntInt_ReturnValue) == 0x000081, "Member 'EventShop_C_CreateEventList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateEventList, CallFunc_CheckShopType_IsOk) == 0x000082, "Member 'EventShop_C_CreateEventList::CallFunc_CheckShopType_IsOk' has a wrong offset!");

// Function EventShop.EventShop_C.CreateProductItemList
// 0x0360 (0x0360 - 0x0000)
struct EventShop_C_CreateProductItemList final
{
public:
	struct FSBEventShopProduct                    L_List;                                            // 0x0000(0x0070)(Edit, BlueprintVisible)
	int32                                         L_CreateItemType;                                  // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6476[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   L_MasterDataMng;                                   // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6477[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UEventShopProductBox_Item_C* Item)> K2Node_CreateDelegate_OutputDelegate;              // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UEventShopProductBox_Item_C* Item)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6478[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBEventShopProduct>            CallFunc_SortProductList_OutProductList;           // 0x00B8(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6479[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopMasterData                 CallFunc_Array_Get_Item;                           // 0x00D0(0x0058)()
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue;  // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_647A[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SetProductLabel_OutId;                    // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPickupLabel_Out;                        // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_647B[0x2];                                     // 0x0132(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBEventShopItemMasterData>     CallFunc_BP_GetEventShopItemMaster_ReturnValue;    // 0x0150(0x0010)(ReferenceParm)
	struct FSBEventShopItemMasterData             CallFunc_Array_Get_Item_1;                         // 0x0160(0x0050)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckDate_IsOk;                           // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_647C[0x3];                                     // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterEventShopText_ReturnValue;       // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsAchieveRank_IsAchieve;               // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_647D[0x2];                                     // 0x01CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Is_Mastery_Skill_Ret;                     // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterEventShopText_ReturnValue_1;     // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckEquipGender_IsOk;                    // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsExchangable_Ret;                        // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckFilterSearch_IsOk;                   // 0x01EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_647E[0x1];                                     // 0x01EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetExchangeNum_Num;                       // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_647F[0x3];                                     // 0x01F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Sell_Type_Is_Sold_Out_Type;               // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6480[0x4];                                     // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopProduct                    K2Node_MakeStruct_SBEventShopProduct;              // 0x0200(0x0070)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0274(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6481[0x4];                                     // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopProduct                    CallFunc_Array_Get_Item_2;                         // 0x0280(0x0070)()
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x02F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6482[0x2];                                     // 0x02F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x02F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6483[0x3];                                     // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x02FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6484[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopProductBox_Item_C*            CallFunc_Create_ReturnValue;                       // 0x0308(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventShopProductBox_Label_C*           CallFunc_Create_ReturnValue_1;                     // 0x0310(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0318(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0328(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0338(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UEventShopProductBox_Item_C* Item, bool bOnNumberInput)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0340(0x0010)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0350(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0359(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_CreateProductItemList) == 0x000008, "Wrong alignment on EventShop_C_CreateProductItemList");
static_assert(sizeof(EventShop_C_CreateProductItemList) == 0x000360, "Wrong size on EventShop_C_CreateProductItemList");
static_assert(offsetof(EventShop_C_CreateProductItemList, L_List) == 0x000000, "Member 'EventShop_C_CreateProductItemList::L_List' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, L_CreateItemType) == 0x000070, "Member 'EventShop_C_CreateProductItemList::L_CreateItemType' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, L_MasterDataMng) == 0x000078, "Member 'EventShop_C_CreateProductItemList::L_MasterDataMng' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, Temp_byte_Variable) == 0x000080, "Member 'EventShop_C_CreateProductItemList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_DateTimeMinValue_ReturnValue) == 0x000088, "Member 'EventShop_C_CreateProductItemList::CallFunc_DateTimeMinValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, K2Node_CreateDelegate_OutputDelegate) == 0x000090, "Member 'EventShop_C_CreateProductItemList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000A0, "Member 'EventShop_C_CreateProductItemList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_Array_Length_ReturnValue) == 0x0000B0, "Member 'EventShop_C_CreateProductItemList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_SortProductList_OutProductList) == 0x0000B8, "Member 'EventShop_C_CreateProductItemList::CallFunc_SortProductList_OutProductList' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, Temp_int_Array_Index_Variable) == 0x0000C8, "Member 'EventShop_C_CreateProductItemList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'EventShop_C_CreateProductItemList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue) == 0x000128, "Member 'EventShop_C_CreateProductItemList::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_SetProductLabel_OutId) == 0x00012C, "Member 'EventShop_C_CreateProductItemList::CallFunc_SetProductLabel_OutId' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_SetDateTime_ReturnValue) == 0x000130, "Member 'EventShop_C_CreateProductItemList::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_IsPickupLabel_Out) == 0x000131, "Member 'EventShop_C_CreateProductItemList::CallFunc_IsPickupLabel_Out' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_Add_IntInt_ReturnValue) == 0x000134, "Member 'EventShop_C_CreateProductItemList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_GetTextFromAsset_ReturnValue) == 0x000138, "Member 'EventShop_C_CreateProductItemList::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_Array_Length_ReturnValue_1) == 0x000148, "Member 'EventShop_C_CreateProductItemList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_Subtract_IntInt_ReturnValue) == 0x00014C, "Member 'EventShop_C_CreateProductItemList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_BP_GetEventShopItemMaster_ReturnValue) == 0x000150, "Member 'EventShop_C_CreateProductItemList::CallFunc_BP_GetEventShopItemMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_Array_Get_Item_1) == 0x000160, "Member 'EventShop_C_CreateProductItemList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_Array_Length_ReturnValue_2) == 0x0001B0, "Member 'EventShop_C_CreateProductItemList::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_CheckDate_IsOk) == 0x0001B4, "Member 'EventShop_C_CreateProductItemList::CallFunc_CheckDate_IsOk' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_GetMasterEventShopText_ReturnValue) == 0x0001B8, "Member 'EventShop_C_CreateProductItemList::CallFunc_GetMasterEventShopText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001C8, "Member 'EventShop_C_CreateProductItemList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_GetIsAchieveRank_IsAchieve) == 0x0001C9, "Member 'EventShop_C_CreateProductItemList::CallFunc_GetIsAchieveRank_IsAchieve' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_SelectInt_ReturnValue) == 0x0001CC, "Member 'EventShop_C_CreateProductItemList::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_Array_AddUnique_ReturnValue) == 0x0001D0, "Member 'EventShop_C_CreateProductItemList::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_Is_Mastery_Skill_Ret) == 0x0001D4, "Member 'EventShop_C_CreateProductItemList::CallFunc_Is_Mastery_Skill_Ret' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_GetMasterEventShopText_ReturnValue_1) == 0x0001D8, "Member 'EventShop_C_CreateProductItemList::CallFunc_GetMasterEventShopText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_CheckEquipGender_IsOk) == 0x0001E8, "Member 'EventShop_C_CreateProductItemList::CallFunc_CheckEquipGender_IsOk' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_IsExchangable_Ret) == 0x0001E9, "Member 'EventShop_C_CreateProductItemList::CallFunc_IsExchangable_Ret' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_CheckFilterSearch_IsOk) == 0x0001EA, "Member 'EventShop_C_CreateProductItemList::CallFunc_CheckFilterSearch_IsOk' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_GetExchangeNum_Num) == 0x0001EC, "Member 'EventShop_C_CreateProductItemList::CallFunc_GetExchangeNum_Num' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0001F0, "Member 'EventShop_C_CreateProductItemList::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0001F4, "Member 'EventShop_C_CreateProductItemList::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_Sell_Type_Is_Sold_Out_Type) == 0x0001F8, "Member 'EventShop_C_CreateProductItemList::CallFunc_Sell_Type_Is_Sold_Out_Type' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, K2Node_MakeStruct_SBEventShopProduct) == 0x000200, "Member 'EventShop_C_CreateProductItemList::K2Node_MakeStruct_SBEventShopProduct' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_Array_Add_ReturnValue) == 0x000270, "Member 'EventShop_C_CreateProductItemList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, Temp_int_Loop_Counter_Variable) == 0x000274, "Member 'EventShop_C_CreateProductItemList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, Temp_int_Variable) == 0x000278, "Member 'EventShop_C_CreateProductItemList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_Array_Get_Item_2) == 0x000280, "Member 'EventShop_C_CreateProductItemList::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0002F0, "Member 'EventShop_C_CreateProductItemList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0002F1, "Member 'EventShop_C_CreateProductItemList::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_Add_IntInt_ReturnValue_1) == 0x0002F4, "Member 'EventShop_C_CreateProductItemList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_Less_IntInt_ReturnValue) == 0x0002F8, "Member 'EventShop_C_CreateProductItemList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_Add_IntInt_ReturnValue_2) == 0x0002FC, "Member 'EventShop_C_CreateProductItemList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, Temp_byte_Variable_1) == 0x000300, "Member 'EventShop_C_CreateProductItemList::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_Create_ReturnValue) == 0x000308, "Member 'EventShop_C_CreateProductItemList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_Create_ReturnValue_1) == 0x000310, "Member 'EventShop_C_CreateProductItemList::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, K2Node_MakeStruct_Margin) == 0x000318, "Member 'EventShop_C_CreateProductItemList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, K2Node_MakeStruct_Margin_1) == 0x000328, "Member 'EventShop_C_CreateProductItemList::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_AddChild_ReturnValue) == 0x000338, "Member 'EventShop_C_CreateProductItemList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, K2Node_CreateDelegate_OutputDelegate_2) == 0x000340, "Member 'EventShop_C_CreateProductItemList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, CallFunc_AddChild_ReturnValue_1) == 0x000350, "Member 'EventShop_C_CreateProductItemList::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, Temp_bool_Variable) == 0x000358, "Member 'EventShop_C_CreateProductItemList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList, K2Node_Select_Default) == 0x000359, "Member 'EventShop_C_CreateProductItemList::K2Node_Select_Default' has a wrong offset!");

// Function EventShop.EventShop_C.CreateTokenList
// 0x003C (0x003C - 0x0000)
struct EventShop_C_CreateTokenList final
{
public:
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform;                 // 0x0020(0x001C)(NoDestructor)
};
static_assert(alignof(EventShop_C_CreateTokenList) == 0x000004, "Wrong alignment on EventShop_C_CreateTokenList");
static_assert(sizeof(EventShop_C_CreateTokenList) == 0x00003C, "Wrong size on EventShop_C_CreateTokenList");
static_assert(offsetof(EventShop_C_CreateTokenList, CallFunc_Array_Length_ReturnValue) == 0x000000, "Member 'EventShop_C_CreateTokenList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateTokenList, CallFunc_MakeLiteralInt_ReturnValue) == 0x000004, "Member 'EventShop_C_CreateTokenList::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateTokenList, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x000008, "Member 'EventShop_C_CreateTokenList::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateTokenList, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'EventShop_C_CreateTokenList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateTokenList, CallFunc_Multiply_IntInt_ReturnValue) == 0x000010, "Member 'EventShop_C_CreateTokenList::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateTokenList, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000014, "Member 'EventShop_C_CreateTokenList::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateTokenList, CallFunc_MakeVector2D_ReturnValue) == 0x000018, "Member 'EventShop_C_CreateTokenList::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateTokenList, K2Node_MakeStruct_WidgetTransform) == 0x000020, "Member 'EventShop_C_CreateTokenList::K2Node_MakeStruct_WidgetTransform' has a wrong offset!");

// Function EventShop.EventShop_C.SetSelectItemInfoRemake
// 0x0078 (0x0078 - 0x0000)
struct EventShop_C_SetSelectItemInfoRemake final
{
public:
	class UEventShopProductBox_Item_C*            Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOnNumberInput;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6485[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                L_ProductItemData;                                 // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     L_ItemTypeInvalid;                                 // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6486[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopProductBox_Item_C*            L_SelectedItem;                                    // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6487[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_Map_Find_Value;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6488[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UBP_SBProductItemData_C* Sender, bool bTrying)> K2Node_CreateDelegate_OutputDelegate;              // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6489[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                CallFunc_Map_Find_Value_1;                         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_648A[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_SetSelectItemInfoRemake) == 0x000008, "Wrong alignment on EventShop_C_SetSelectItemInfoRemake");
static_assert(sizeof(EventShop_C_SetSelectItemInfoRemake) == 0x000078, "Wrong size on EventShop_C_SetSelectItemInfoRemake");
static_assert(offsetof(EventShop_C_SetSelectItemInfoRemake, Item) == 0x000000, "Member 'EventShop_C_SetSelectItemInfoRemake::Item' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetSelectItemInfoRemake, bOnNumberInput) == 0x000008, "Member 'EventShop_C_SetSelectItemInfoRemake::bOnNumberInput' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetSelectItemInfoRemake, L_ProductItemData) == 0x000010, "Member 'EventShop_C_SetSelectItemInfoRemake::L_ProductItemData' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetSelectItemInfoRemake, L_ItemTypeInvalid) == 0x000018, "Member 'EventShop_C_SetSelectItemInfoRemake::L_ItemTypeInvalid' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetSelectItemInfoRemake, L_SelectedItem) == 0x000020, "Member 'EventShop_C_SetSelectItemInfoRemake::L_SelectedItem' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetSelectItemInfoRemake, CallFunc_Not_PreBool_ReturnValue) == 0x000028, "Member 'EventShop_C_SetSelectItemInfoRemake::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetSelectItemInfoRemake, CallFunc_Map_Find_Value) == 0x000030, "Member 'EventShop_C_SetSelectItemInfoRemake::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetSelectItemInfoRemake, CallFunc_Map_Find_ReturnValue) == 0x000038, "Member 'EventShop_C_SetSelectItemInfoRemake::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetSelectItemInfoRemake, K2Node_CreateDelegate_OutputDelegate) == 0x00003C, "Member 'EventShop_C_SetSelectItemInfoRemake::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetSelectItemInfoRemake, CallFunc_SpawnObject_ReturnValue) == 0x000050, "Member 'EventShop_C_SetSelectItemInfoRemake::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetSelectItemInfoRemake, CallFunc_Map_Find_Value_1) == 0x000058, "Member 'EventShop_C_SetSelectItemInfoRemake::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetSelectItemInfoRemake, CallFunc_Map_Find_ReturnValue_1) == 0x000060, "Member 'EventShop_C_SetSelectItemInfoRemake::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetSelectItemInfoRemake, CallFunc_PlayAnimation_ReturnValue) == 0x000068, "Member 'EventShop_C_SetSelectItemInfoRemake::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetSelectItemInfoRemake, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'EventShop_C_SetSelectItemInfoRemake::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetSelectItemInfoRemake, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000071, "Member 'EventShop_C_SetSelectItemInfoRemake::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function EventShop.EventShop_C.Set Select Message Visibility
// 0x0005 (0x0005 - 0x0000)
struct EventShop_C_Set_Select_Message_Visibility final
{
public:
	bool                                          IsSelect;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_Set_Select_Message_Visibility) == 0x000001, "Wrong alignment on EventShop_C_Set_Select_Message_Visibility");
static_assert(sizeof(EventShop_C_Set_Select_Message_Visibility) == 0x000005, "Wrong size on EventShop_C_Set_Select_Message_Visibility");
static_assert(offsetof(EventShop_C_Set_Select_Message_Visibility, IsSelect) == 0x000000, "Member 'EventShop_C_Set_Select_Message_Visibility::IsSelect' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Select_Message_Visibility, Temp_bool_Variable) == 0x000001, "Member 'EventShop_C_Set_Select_Message_Visibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Select_Message_Visibility, Temp_byte_Variable) == 0x000002, "Member 'EventShop_C_Set_Select_Message_Visibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Select_Message_Visibility, Temp_byte_Variable_1) == 0x000003, "Member 'EventShop_C_Set_Select_Message_Visibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Select_Message_Visibility, K2Node_Select_Default) == 0x000004, "Member 'EventShop_C_Set_Select_Message_Visibility::K2Node_Select_Default' has a wrong offset!");

// Function EventShop.EventShop_C.Set Exchange Cost Text Remake
// 0x0108 (0x0108 - 0x0000)
struct EventShop_C_Set_Exchange_Cost_Text_Remake final
{
public:
	class UEventShopProductBox_Item_C*            Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_TokenPrice;                                      // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_SubAmount;                                       // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          L_IsCheck;                                         // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_648B[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_TokenId;                                         // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_TokenAmount;                                     // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_648C[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopProductBox_Item_C*            L_SelectItem;                                      // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Num;                                             // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_648D[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_648E[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CalculateDiscountValue_OutDiscountValue;  // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumberOfProducts_Num;                  // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_648F[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBEventShopPurchaseItemInfo           K2Node_MakeStruct_SBEventShopPurchaseItemInfo;     // 0x0058(0x0030)()
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6490[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6491[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopPurchaseItemInfo           CallFunc_Array_Get_Item_1;                         // 0x0098(0x0030)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6492[0x5];                                     // 0x00CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopPurchaseItemInfo           K2Node_MakeStruct_SBEventShopPurchaseItemInfo_1;   // 0x00D0(0x0030)()
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_Set_Exchange_Cost_Text_Remake) == 0x000008, "Wrong alignment on EventShop_C_Set_Exchange_Cost_Text_Remake");
static_assert(sizeof(EventShop_C_Set_Exchange_Cost_Text_Remake) == 0x000108, "Wrong size on EventShop_C_Set_Exchange_Cost_Text_Remake");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, Item) == 0x000000, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::Item' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, L_TokenPrice) == 0x000008, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::L_TokenPrice' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, L_SubAmount) == 0x00000C, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::L_SubAmount' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, L_IsCheck) == 0x000010, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::L_IsCheck' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, L_TokenId) == 0x000014, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::L_TokenId' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, L_TokenAmount) == 0x000018, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::L_TokenAmount' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, L_SelectItem) == 0x000020, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::L_SelectItem' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, L_Num) == 0x000028, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::L_Num' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, CallFunc_Not_PreBool_ReturnValue) == 0x00002C, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, Temp_int_Array_Index_Variable) == 0x000030, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, CallFunc_Array_Find_ReturnValue) == 0x000034, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, CallFunc_Array_Get_Item) == 0x000038, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, Temp_bool_True_if_break_was_hit_Variable) == 0x000044, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, CallFunc_Not_PreBool_ReturnValue_1) == 0x000045, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, CallFunc_CalculateDiscountValue_OutDiscountValue) == 0x000048, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::CallFunc_CalculateDiscountValue_OutDiscountValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, CallFunc_GetNumberOfProducts_Num) == 0x00004C, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::CallFunc_GetNumberOfProducts_Num' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, Temp_bool_Variable) == 0x000050, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, CallFunc_IsValid_ReturnValue) == 0x000051, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, K2Node_Select_Default) == 0x000054, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, K2Node_MakeStruct_SBEventShopPurchaseItemInfo) == 0x000058, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::K2Node_MakeStruct_SBEventShopPurchaseItemInfo' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, CallFunc_Array_AddUnique_ReturnValue) == 0x000088, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00008C, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, CallFunc_Array_Get_Item_1) == 0x000098, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, CallFunc_Less_IntInt_ReturnValue) == 0x0000C8, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, CallFunc_Array_RemoveItem_ReturnValue) == 0x0000C9, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, CallFunc_BooleanAND_ReturnValue) == 0x0000CA, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, K2Node_MakeStruct_SBEventShopPurchaseItemInfo_1) == 0x0000D0, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::K2Node_MakeStruct_SBEventShopPurchaseItemInfo_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, CallFunc_Subtract_IntInt_ReturnValue) == 0x000100, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Set_Exchange_Cost_Text_Remake, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000104, "Member 'EventShop_C_Set_Exchange_Cost_Text_Remake::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function EventShop.EventShop_C.RandomPlayAnimation
// 0x0018 (0x0018 - 0x0000)
struct EventShop_C_RandomPlayAnimation final
{
public:
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6493[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_RandomPlayAnimation) == 0x000008, "Wrong alignment on EventShop_C_RandomPlayAnimation");
static_assert(sizeof(EventShop_C_RandomPlayAnimation) == 0x000018, "Wrong size on EventShop_C_RandomPlayAnimation");
static_assert(offsetof(EventShop_C_RandomPlayAnimation, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000000, "Member 'EventShop_C_RandomPlayAnimation::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_RandomPlayAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'EventShop_C_RandomPlayAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_RandomPlayAnimation, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'EventShop_C_RandomPlayAnimation::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function EventShop.EventShop_C.RandomPlayAnimation2
// 0x0018 (0x0018 - 0x0000)
struct EventShop_C_RandomPlayAnimation2 final
{
public:
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6494[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_RandomPlayAnimation2) == 0x000008, "Wrong alignment on EventShop_C_RandomPlayAnimation2");
static_assert(sizeof(EventShop_C_RandomPlayAnimation2) == 0x000018, "Wrong size on EventShop_C_RandomPlayAnimation2");
static_assert(offsetof(EventShop_C_RandomPlayAnimation2, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000000, "Member 'EventShop_C_RandomPlayAnimation2::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_RandomPlayAnimation2, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'EventShop_C_RandomPlayAnimation2::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_RandomPlayAnimation2, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'EventShop_C_RandomPlayAnimation2::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function EventShop.EventShop_C.GetExchangeNum
// 0x0038 (0x0038 - 0x0000)
struct EventShop_C_GetExchangeNum final
{
public:
	int32                                         EventId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemSetId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Num;                                               // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_ItemSetId;                                       // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_EventId;                                         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBEventShopExchangeHistory            CallFunc_Array_Get_Item;                           // 0x0018(0x000C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6495[0x1];                                     // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_GetExchangeNum) == 0x000004, "Wrong alignment on EventShop_C_GetExchangeNum");
static_assert(sizeof(EventShop_C_GetExchangeNum) == 0x000038, "Wrong size on EventShop_C_GetExchangeNum");
static_assert(offsetof(EventShop_C_GetExchangeNum, EventId) == 0x000000, "Member 'EventShop_C_GetExchangeNum::EventId' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetExchangeNum, ItemSetId) == 0x000004, "Member 'EventShop_C_GetExchangeNum::ItemSetId' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetExchangeNum, Num) == 0x000008, "Member 'EventShop_C_GetExchangeNum::Num' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetExchangeNum, L_ItemSetId) == 0x00000C, "Member 'EventShop_C_GetExchangeNum::L_ItemSetId' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetExchangeNum, L_EventId) == 0x000010, "Member 'EventShop_C_GetExchangeNum::L_EventId' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetExchangeNum, Temp_int_Variable) == 0x000014, "Member 'EventShop_C_GetExchangeNum::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetExchangeNum, CallFunc_Array_Get_Item) == 0x000018, "Member 'EventShop_C_GetExchangeNum::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetExchangeNum, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'EventShop_C_GetExchangeNum::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetExchangeNum, CallFunc_Subtract_IntInt_ReturnValue) == 0x000028, "Member 'EventShop_C_GetExchangeNum::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetExchangeNum, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00002C, "Member 'EventShop_C_GetExchangeNum::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetExchangeNum, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00002D, "Member 'EventShop_C_GetExchangeNum::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetExchangeNum, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00002E, "Member 'EventShop_C_GetExchangeNum::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetExchangeNum, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'EventShop_C_GetExchangeNum::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetExchangeNum, CallFunc_BooleanAND_ReturnValue) == 0x000034, "Member 'EventShop_C_GetExchangeNum::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function EventShop.EventShop_C.GetIsAchieveRank
// 0x0010 (0x0010 - 0x0000)
struct EventShop_C_GetIsAchieveRank final
{
public:
	int32                                         NeedRank;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAchieve;                                         // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6496[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_GetIsAchieveRank) == 0x000004, "Wrong alignment on EventShop_C_GetIsAchieveRank");
static_assert(sizeof(EventShop_C_GetIsAchieveRank) == 0x000010, "Wrong size on EventShop_C_GetIsAchieveRank");
static_assert(offsetof(EventShop_C_GetIsAchieveRank, NeedRank) == 0x000000, "Member 'EventShop_C_GetIsAchieveRank::NeedRank' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetIsAchieveRank, IsAchieve) == 0x000004, "Member 'EventShop_C_GetIsAchieveRank::IsAchieve' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetIsAchieveRank, CallFunc_GetAdventurerRank_ReturnValue) == 0x000008, "Member 'EventShop_C_GetIsAchieveRank::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetIsAchieveRank, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00000C, "Member 'EventShop_C_GetIsAchieveRank::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function EventShop.EventShop_C.GetIconTexture
// 0x0030 (0x0030 - 0x0000)
struct EventShop_C_GetIconTexture final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6497[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0008(0x0028)(Parm, OutParm, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_GetIconTexture) == 0x000008, "Wrong alignment on EventShop_C_GetIconTexture");
static_assert(sizeof(EventShop_C_GetIconTexture) == 0x000030, "Wrong size on EventShop_C_GetIconTexture");
static_assert(offsetof(EventShop_C_GetIconTexture, ID) == 0x000000, "Member 'EventShop_C_GetIconTexture::ID' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetIconTexture, Texture) == 0x000008, "Member 'EventShop_C_GetIconTexture::Texture' has a wrong offset!");

// Function EventShop.EventShop_C.CheckUseTokenList
// 0x002C (0x002C - 0x0000)
struct EventShop_C_CheckUseTokenList final
{
public:
	int32                                         TokenID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Price;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_TokenId;                                         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_ArrayId;                                         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_CheckUseTokenList) == 0x000004, "Wrong alignment on EventShop_C_CheckUseTokenList");
static_assert(sizeof(EventShop_C_CheckUseTokenList) == 0x00002C, "Wrong size on EventShop_C_CheckUseTokenList");
static_assert(offsetof(EventShop_C_CheckUseTokenList, TokenID) == 0x000000, "Member 'EventShop_C_CheckUseTokenList::TokenID' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckUseTokenList, Amount) == 0x000004, "Member 'EventShop_C_CheckUseTokenList::Amount' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckUseTokenList, Price) == 0x000008, "Member 'EventShop_C_CheckUseTokenList::Price' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckUseTokenList, L_TokenId) == 0x00000C, "Member 'EventShop_C_CheckUseTokenList::L_TokenId' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckUseTokenList, L_ArrayId) == 0x000010, "Member 'EventShop_C_CheckUseTokenList::L_ArrayId' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckUseTokenList, CallFunc_Multiply_IntInt_ReturnValue) == 0x000014, "Member 'EventShop_C_CheckUseTokenList::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckUseTokenList, CallFunc_Array_Get_Item) == 0x000018, "Member 'EventShop_C_CheckUseTokenList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckUseTokenList, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'EventShop_C_CheckUseTokenList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckUseTokenList, CallFunc_Array_Get_Item_1) == 0x000020, "Member 'EventShop_C_CheckUseTokenList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckUseTokenList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000024, "Member 'EventShop_C_CheckUseTokenList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckUseTokenList, CallFunc_Array_Find_ReturnValue) == 0x000028, "Member 'EventShop_C_CheckUseTokenList::CallFunc_Array_Find_ReturnValue' has a wrong offset!");

// Function EventShop.EventShop_C.Is Equip Shop
// 0x000F (0x000F - 0x0000)
struct EventShop_C_Is_Equip_Shop final
{
public:
	bool                                          L_IsActive;                                        // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EShopType                                     Temp_byte_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_Is_Equip_Shop) == 0x000001, "Wrong alignment on EventShop_C_Is_Equip_Shop");
static_assert(sizeof(EventShop_C_Is_Equip_Shop) == 0x00000F, "Wrong size on EventShop_C_Is_Equip_Shop");
static_assert(offsetof(EventShop_C_Is_Equip_Shop, L_IsActive) == 0x000000, "Member 'EventShop_C_Is_Equip_Shop::L_IsActive' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Equip_Shop, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'EventShop_C_Is_Equip_Shop::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Equip_Shop, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'EventShop_C_Is_Equip_Shop::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Equip_Shop, Temp_byte_Variable) == 0x000003, "Member 'EventShop_C_Is_Equip_Shop::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Equip_Shop, Temp_bool_Variable) == 0x000004, "Member 'EventShop_C_Is_Equip_Shop::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Equip_Shop, Temp_bool_Variable_1) == 0x000005, "Member 'EventShop_C_Is_Equip_Shop::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Equip_Shop, Temp_bool_Variable_2) == 0x000006, "Member 'EventShop_C_Is_Equip_Shop::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Equip_Shop, Temp_bool_Variable_3) == 0x000007, "Member 'EventShop_C_Is_Equip_Shop::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Equip_Shop, Temp_bool_Variable_4) == 0x000008, "Member 'EventShop_C_Is_Equip_Shop::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Equip_Shop, Temp_byte_Variable_1) == 0x000009, "Member 'EventShop_C_Is_Equip_Shop::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Equip_Shop, Temp_bool_Variable_5) == 0x00000A, "Member 'EventShop_C_Is_Equip_Shop::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Equip_Shop, K2Node_Select_Default) == 0x00000B, "Member 'EventShop_C_Is_Equip_Shop::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Equip_Shop, CallFunc_BooleanAND_ReturnValue) == 0x00000C, "Member 'EventShop_C_Is_Equip_Shop::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Equip_Shop, K2Node_Select_Default_1) == 0x00000D, "Member 'EventShop_C_Is_Equip_Shop::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Equip_Shop, K2Node_Select_Default_2) == 0x00000E, "Member 'EventShop_C_Is_Equip_Shop::K2Node_Select_Default_2' has a wrong offset!");

// Function EventShop.EventShop_C.UpdateTokenList
// 0x001C (0x001C - 0x0000)
struct EventShop_C_UpdateTokenList final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_UpdateTokenList) == 0x000004, "Wrong alignment on EventShop_C_UpdateTokenList");
static_assert(sizeof(EventShop_C_UpdateTokenList) == 0x00001C, "Wrong size on EventShop_C_UpdateTokenList");
static_assert(offsetof(EventShop_C_UpdateTokenList, Temp_int_Array_Index_Variable) == 0x000000, "Member 'EventShop_C_UpdateTokenList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_UpdateTokenList, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'EventShop_C_UpdateTokenList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_UpdateTokenList, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'EventShop_C_UpdateTokenList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_UpdateTokenList, CallFunc_Array_Get_Item) == 0x00000C, "Member 'EventShop_C_UpdateTokenList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShop_C_UpdateTokenList, CallFunc_Array_Get_Item_1) == 0x000010, "Member 'EventShop_C_UpdateTokenList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_UpdateTokenList, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'EventShop_C_UpdateTokenList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_UpdateTokenList, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'EventShop_C_UpdateTokenList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function EventShop.EventShop_C.On_txt_sort_list_GenerateWidget
// 0x0038 (0x0038 - 0x0000)
struct EventShop_C_On_txt_sort_list_GenerateWidget final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(EventShop_C_On_txt_sort_list_GenerateWidget) == 0x000008, "Wrong alignment on EventShop_C_On_txt_sort_list_GenerateWidget");
static_assert(sizeof(EventShop_C_On_txt_sort_list_GenerateWidget) == 0x000038, "Wrong size on EventShop_C_On_txt_sort_list_GenerateWidget");
static_assert(offsetof(EventShop_C_On_txt_sort_list_GenerateWidget, Item) == 0x000000, "Member 'EventShop_C_On_txt_sort_list_GenerateWidget::Item' has a wrong offset!");
static_assert(offsetof(EventShop_C_On_txt_sort_list_GenerateWidget, ReturnValue) == 0x000010, "Member 'EventShop_C_On_txt_sort_list_GenerateWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_On_txt_sort_list_GenerateWidget, CallFunc_Create_ReturnValue) == 0x000018, "Member 'EventShop_C_On_txt_sort_list_GenerateWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_On_txt_sort_list_GenerateWidget, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'EventShop_C_On_txt_sort_list_GenerateWidget::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function EventShop.EventShop_C.On_txt_filter_list_GenerateWidget
// 0x0038 (0x0038 - 0x0000)
struct EventShop_C_On_txt_filter_list_GenerateWidget final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(EventShop_C_On_txt_filter_list_GenerateWidget) == 0x000008, "Wrong alignment on EventShop_C_On_txt_filter_list_GenerateWidget");
static_assert(sizeof(EventShop_C_On_txt_filter_list_GenerateWidget) == 0x000038, "Wrong size on EventShop_C_On_txt_filter_list_GenerateWidget");
static_assert(offsetof(EventShop_C_On_txt_filter_list_GenerateWidget, Item) == 0x000000, "Member 'EventShop_C_On_txt_filter_list_GenerateWidget::Item' has a wrong offset!");
static_assert(offsetof(EventShop_C_On_txt_filter_list_GenerateWidget, ReturnValue) == 0x000010, "Member 'EventShop_C_On_txt_filter_list_GenerateWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_On_txt_filter_list_GenerateWidget, CallFunc_Create_ReturnValue) == 0x000018, "Member 'EventShop_C_On_txt_filter_list_GenerateWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_On_txt_filter_list_GenerateWidget, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'EventShop_C_On_txt_filter_list_GenerateWidget::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function EventShop.EventShop_C.CheckFilterSearch
// 0x0248 (0x0248 - 0x0000)
struct EventShop_C_CheckFilterSearch final
{
public:
	int32                                         ItemSetId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOk;                                              // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6498[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_ItemSetId;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_SortId;                                          // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_ItemId;                                          // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             CallFunc_GetRewardItemType_Type;                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_1;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_2;          // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_3;          // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_4;          // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6499[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0028(0x00D0)()
	int32                                         CallFunc_GetItemId_ItemId;                         // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x00FE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_8;        // 0x00FF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_9;        // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_10;       // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_11;       // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_12;       // 0x0103(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_649A[0x3];                                     // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x0108(0x0088)()
	struct FSBMasterImagine                       CallFunc_FindMasterImagine_ReturnValue;            // 0x0190(0x00B0)()
	bool                                          CallFunc_IsAccessory_IsAcc;                        // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_13;       // 0x0241(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0242(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_14;       // 0x0243(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_CheckFilterSearch) == 0x000008, "Wrong alignment on EventShop_C_CheckFilterSearch");
static_assert(sizeof(EventShop_C_CheckFilterSearch) == 0x000248, "Wrong size on EventShop_C_CheckFilterSearch");
static_assert(offsetof(EventShop_C_CheckFilterSearch, ItemSetId) == 0x000000, "Member 'EventShop_C_CheckFilterSearch::ItemSetId' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, IsOk) == 0x000004, "Member 'EventShop_C_CheckFilterSearch::IsOk' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, L_ItemSetId) == 0x000008, "Member 'EventShop_C_CheckFilterSearch::L_ItemSetId' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, L_SortId) == 0x00000C, "Member 'EventShop_C_CheckFilterSearch::L_SortId' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, L_ItemId) == 0x000010, "Member 'EventShop_C_CheckFilterSearch::L_ItemId' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_GetRewardItemType_Type) == 0x000014, "Member 'EventShop_C_CheckFilterSearch::CallFunc_GetRewardItemType_Type' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000015, "Member 'EventShop_C_CheckFilterSearch::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, K2Node_SwitchInteger_CmpSuccess) == 0x000016, "Member 'EventShop_C_CheckFilterSearch::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000017, "Member 'EventShop_C_CheckFilterSearch::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000018, "Member 'EventShop_C_CheckFilterSearch::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000019, "Member 'EventShop_C_CheckFilterSearch::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_NotEqual_BoolBool_ReturnValue_1) == 0x00001A, "Member 'EventShop_C_CheckFilterSearch::CallFunc_NotEqual_BoolBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_NotEqual_BoolBool_ReturnValue_2) == 0x00001B, "Member 'EventShop_C_CheckFilterSearch::CallFunc_NotEqual_BoolBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00001C, "Member 'EventShop_C_CheckFilterSearch::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x00001D, "Member 'EventShop_C_CheckFilterSearch::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_NotEqual_BoolBool_ReturnValue_3) == 0x00001E, "Member 'EventShop_C_CheckFilterSearch::CallFunc_NotEqual_BoolBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_NotEqual_BoolBool_ReturnValue_4) == 0x00001F, "Member 'EventShop_C_CheckFilterSearch::CallFunc_NotEqual_BoolBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_BooleanAND_ReturnValue) == 0x000020, "Member 'EventShop_C_CheckFilterSearch::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_BooleanAND_ReturnValue_1) == 0x000021, "Member 'EventShop_C_CheckFilterSearch::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_BooleanAND_ReturnValue_2) == 0x000022, "Member 'EventShop_C_CheckFilterSearch::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_BooleanAND_ReturnValue_3) == 0x000023, "Member 'EventShop_C_CheckFilterSearch::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_GetItemMasterData_IsExists) == 0x000024, "Member 'EventShop_C_CheckFilterSearch::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_GetItemMasterData_ReturnValue) == 0x000028, "Member 'EventShop_C_CheckFilterSearch::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_GetItemId_ItemId) == 0x0000F8, "Member 'EventShop_C_CheckFilterSearch::CallFunc_GetItemId_ItemId' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x0000FC, "Member 'EventShop_C_CheckFilterSearch::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x0000FD, "Member 'EventShop_C_CheckFilterSearch::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x0000FE, "Member 'EventShop_C_CheckFilterSearch::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_EqualEqual_ByteByte_ReturnValue_8) == 0x0000FF, "Member 'EventShop_C_CheckFilterSearch::CallFunc_EqualEqual_ByteByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_EqualEqual_ByteByte_ReturnValue_9) == 0x000100, "Member 'EventShop_C_CheckFilterSearch::CallFunc_EqualEqual_ByteByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_EqualEqual_ByteByte_ReturnValue_10) == 0x000101, "Member 'EventShop_C_CheckFilterSearch::CallFunc_EqualEqual_ByteByte_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_EqualEqual_ByteByte_ReturnValue_11) == 0x000102, "Member 'EventShop_C_CheckFilterSearch::CallFunc_EqualEqual_ByteByte_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_EqualEqual_ByteByte_ReturnValue_12) == 0x000103, "Member 'EventShop_C_CheckFilterSearch::CallFunc_EqualEqual_ByteByte_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_BP_FindCostumeMaster_IsExist) == 0x000104, "Member 'EventShop_C_CheckFilterSearch::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x000108, "Member 'EventShop_C_CheckFilterSearch::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_FindMasterImagine_ReturnValue) == 0x000190, "Member 'EventShop_C_CheckFilterSearch::CallFunc_FindMasterImagine_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_IsAccessory_IsAcc) == 0x000240, "Member 'EventShop_C_CheckFilterSearch::CallFunc_IsAccessory_IsAcc' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_EqualEqual_ByteByte_ReturnValue_13) == 0x000241, "Member 'EventShop_C_CheckFilterSearch::CallFunc_EqualEqual_ByteByte_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_Not_PreBool_ReturnValue) == 0x000242, "Member 'EventShop_C_CheckFilterSearch::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckFilterSearch, CallFunc_EqualEqual_ByteByte_ReturnValue_14) == 0x000243, "Member 'EventShop_C_CheckFilterSearch::CallFunc_EqualEqual_ByteByte_ReturnValue_14' has a wrong offset!");

// Function EventShop.EventShop_C.GetRewardItemType
// 0x0050 (0x0050 - 0x0000)
struct EventShop_C_GetRewardItemType final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Type;                                              // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_649B[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetEventShopItemSetMasterById_IsExists; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_649C[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopItemSetMasterData          CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue; // 0x0014(0x0034)(NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_GetRewardItemType) == 0x000008, "Wrong alignment on EventShop_C_GetRewardItemType");
static_assert(sizeof(EventShop_C_GetRewardItemType) == 0x000050, "Wrong size on EventShop_C_GetRewardItemType");
static_assert(offsetof(EventShop_C_GetRewardItemType, ID) == 0x000000, "Member 'EventShop_C_GetRewardItemType::ID' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetRewardItemType, Type) == 0x000004, "Member 'EventShop_C_GetRewardItemType::Type' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetRewardItemType, CallFunc_GetMasterDataManager_IsValid) == 0x000005, "Member 'EventShop_C_GetRewardItemType::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetRewardItemType, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'EventShop_C_GetRewardItemType::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetRewardItemType, CallFunc_BP_GetEventShopItemSetMasterById_IsExists) == 0x000010, "Member 'EventShop_C_GetRewardItemType::CallFunc_BP_GetEventShopItemSetMasterById_IsExists' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetRewardItemType, CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue) == 0x000014, "Member 'EventShop_C_GetRewardItemType::CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetRewardItemType, CallFunc_Conv_IntToByte_ReturnValue) == 0x000048, "Member 'EventShop_C_GetRewardItemType::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetRewardItemType, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000049, "Member 'EventShop_C_GetRewardItemType::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetRewardItemType, CallFunc_GetValidValue_ReturnValue) == 0x00004A, "Member 'EventShop_C_GetRewardItemType::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetRewardItemType, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00004B, "Member 'EventShop_C_GetRewardItemType::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetRewardItemType, CallFunc_BooleanOR_ReturnValue) == 0x00004C, "Member 'EventShop_C_GetRewardItemType::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function EventShop.EventShop_C.GetItemId
// 0x0050 (0x0050 - 0x0000)
struct EventShop_C_GetItemId final
{
public:
	int32                                         ItemSetId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemId;                                            // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_649D[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetEventShopItemSetMasterById_IsExists; // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_649E[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopItemSetMasterData          CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue; // 0x001C(0x0034)(NoDestructor)
};
static_assert(alignof(EventShop_C_GetItemId) == 0x000008, "Wrong alignment on EventShop_C_GetItemId");
static_assert(sizeof(EventShop_C_GetItemId) == 0x000050, "Wrong size on EventShop_C_GetItemId");
static_assert(offsetof(EventShop_C_GetItemId, ItemSetId) == 0x000000, "Member 'EventShop_C_GetItemId::ItemSetId' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetItemId, ItemId) == 0x000004, "Member 'EventShop_C_GetItemId::ItemId' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetItemId, CallFunc_GetMasterDataManager_IsValid) == 0x000008, "Member 'EventShop_C_GetItemId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetItemId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'EventShop_C_GetItemId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetItemId, CallFunc_BP_GetEventShopItemSetMasterById_IsExists) == 0x000018, "Member 'EventShop_C_GetItemId::CallFunc_BP_GetEventShopItemSetMasterById_IsExists' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetItemId, CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue) == 0x00001C, "Member 'EventShop_C_GetItemId::CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue' has a wrong offset!");

// Function EventShop.EventShop_C.CheckShopType
// 0x0014 (0x0014 - 0x0000)
struct EventShop_C_CheckShopType final
{
public:
	int32                                         Param_ShopType;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOk;                                              // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_649F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_ShopTypeId;                                      // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_CheckShopType) == 0x000004, "Wrong alignment on EventShop_C_CheckShopType");
static_assert(sizeof(EventShop_C_CheckShopType) == 0x000014, "Wrong size on EventShop_C_CheckShopType");
static_assert(offsetof(EventShop_C_CheckShopType, Param_ShopType) == 0x000000, "Member 'EventShop_C_CheckShopType::Param_ShopType' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckShopType, IsOk) == 0x000004, "Member 'EventShop_C_CheckShopType::IsOk' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckShopType, L_ShopTypeId) == 0x000008, "Member 'EventShop_C_CheckShopType::L_ShopTypeId' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckShopType, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000C, "Member 'EventShop_C_CheckShopType::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckShopType, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00000D, "Member 'EventShop_C_CheckShopType::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckShopType, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x00000E, "Member 'EventShop_C_CheckShopType::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckShopType, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x00000F, "Member 'EventShop_C_CheckShopType::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckShopType, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'EventShop_C_CheckShopType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function EventShop.EventShop_C.IsExchangable
// 0x0148 (0x0148 - 0x0000)
struct EventShop_C_IsExchangable final
{
public:
	int32                                         ItemSetId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64A0[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_ProductItemId;                                   // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             L_ProductRewardType;                               // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64A1[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_ItemSetId;                                       // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64A2[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBImagineLabComponent*                 CallFunc_GetImaginLabComp_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBWarehouseAbilityComponent*           CallFunc_GetWarehouseAbilityComponent_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLearned_ReturnValue;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindCharacterInfoByRecipeId_bExist;       // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64A3[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWarehouseAbilityCharacterInfo       CallFunc_FindCharacterInfoByRecipeId_ReturnValue;  // 0x002C(0x0008)(ConstParm, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64A4[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCraftComponent*                CallFunc_GetCraftComponent_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLearned_ReturnValue_1;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAchievementPossession_ReturnValue;      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHaveBoard_Ret;                          // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64A5[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerStampPossession_ReturnValue;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerEmotePossession_ReturnValue;      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLearnedRecipeSet_ReturnValue;           // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;                // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0057(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetEventShopItemSetMasterById_IsExists; // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64A6[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopItemSetMasterData          CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue; // 0x0064(0x0034)(NoDestructor)
	bool                                          CallFunc_IsHaveCutomPartsById_Ret;                 // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_7;                // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x009B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_GetEventShopItemSetMasterById_IsExists_1; // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64A7[0x2];                                     // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopItemSetMasterData          CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue_1; // 0x00A0(0x0034)(NoDestructor)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64A8[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x00D8(0x0058)()
	bool                                          CallFunc_IsMasterySkill_ReturnValue;               // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64A9[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue; // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue_1; // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64AA[0x2];                                     // 0x013E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetClassLevelFromClassType_ReturnValue;   // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0145(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0146(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_IsExchangable) == 0x000008, "Wrong alignment on EventShop_C_IsExchangable");
static_assert(sizeof(EventShop_C_IsExchangable) == 0x000148, "Wrong size on EventShop_C_IsExchangable");
static_assert(offsetof(EventShop_C_IsExchangable, ItemSetId) == 0x000000, "Member 'EventShop_C_IsExchangable::ItemSetId' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, Ret) == 0x000004, "Member 'EventShop_C_IsExchangable::Ret' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, L_ProductItemId) == 0x000008, "Member 'EventShop_C_IsExchangable::L_ProductItemId' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, L_ProductRewardType) == 0x00000C, "Member 'EventShop_C_IsExchangable::L_ProductRewardType' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, L_ItemSetId) == 0x000010, "Member 'EventShop_C_IsExchangable::L_ItemSetId' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_GetImaginLabComp_ReturnValue) == 0x000018, "Member 'EventShop_C_IsExchangable::CallFunc_GetImaginLabComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_GetWarehouseAbilityComponent_ReturnValue) == 0x000020, "Member 'EventShop_C_IsExchangable::CallFunc_GetWarehouseAbilityComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_IsLearned_ReturnValue) == 0x000028, "Member 'EventShop_C_IsExchangable::CallFunc_IsLearned_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_FindCharacterInfoByRecipeId_bExist) == 0x000029, "Member 'EventShop_C_IsExchangable::CallFunc_FindCharacterInfoByRecipeId_bExist' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_FindCharacterInfoByRecipeId_ReturnValue) == 0x00002C, "Member 'EventShop_C_IsExchangable::CallFunc_FindCharacterInfoByRecipeId_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_Not_PreBool_ReturnValue) == 0x000034, "Member 'EventShop_C_IsExchangable::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000035, "Member 'EventShop_C_IsExchangable::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_GetCraftComponent_ReturnValue) == 0x000038, "Member 'EventShop_C_IsExchangable::CallFunc_GetCraftComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_IsLearned_ReturnValue_1) == 0x000040, "Member 'EventShop_C_IsExchangable::CallFunc_IsLearned_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_IsAchievementPossession_ReturnValue) == 0x000041, "Member 'EventShop_C_IsExchangable::CallFunc_IsAchievementPossession_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_Not_PreBool_ReturnValue_1) == 0x000042, "Member 'EventShop_C_IsExchangable::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_Not_PreBool_ReturnValue_2) == 0x000043, "Member 'EventShop_C_IsExchangable::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_IsHaveBoard_Ret) == 0x000044, "Member 'EventShop_C_IsExchangable::CallFunc_IsHaveBoard_Ret' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_Not_PreBool_ReturnValue_3) == 0x000045, "Member 'EventShop_C_IsExchangable::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_GetSBPlayerState_ReturnValue) == 0x000048, "Member 'EventShop_C_IsExchangable::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_IsPlayerStampPossession_ReturnValue) == 0x000050, "Member 'EventShop_C_IsExchangable::CallFunc_IsPlayerStampPossession_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_IsPlayerEmotePossession_ReturnValue) == 0x000051, "Member 'EventShop_C_IsExchangable::CallFunc_IsPlayerEmotePossession_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_Not_PreBool_ReturnValue_4) == 0x000052, "Member 'EventShop_C_IsExchangable::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_Not_PreBool_ReturnValue_5) == 0x000053, "Member 'EventShop_C_IsExchangable::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_IsLearnedRecipeSet_ReturnValue) == 0x000054, "Member 'EventShop_C_IsExchangable::CallFunc_IsLearnedRecipeSet_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_Not_PreBool_ReturnValue_6) == 0x000055, "Member 'EventShop_C_IsExchangable::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, K2Node_SwitchEnum_CmpSuccess) == 0x000056, "Member 'EventShop_C_IsExchangable::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_GetMasterDataManager_IsValid) == 0x000057, "Member 'EventShop_C_IsExchangable::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_GetMasterDataManager_ReturnValue) == 0x000058, "Member 'EventShop_C_IsExchangable::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_BP_GetEventShopItemSetMasterById_IsExists) == 0x000060, "Member 'EventShop_C_IsExchangable::CallFunc_BP_GetEventShopItemSetMasterById_IsExists' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue) == 0x000064, "Member 'EventShop_C_IsExchangable::CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_IsHaveCutomPartsById_Ret) == 0x000098, "Member 'EventShop_C_IsExchangable::CallFunc_IsHaveCutomPartsById_Ret' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_Not_PreBool_ReturnValue_7) == 0x000099, "Member 'EventShop_C_IsExchangable::CallFunc_Not_PreBool_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_Conv_IntToByte_ReturnValue) == 0x00009A, "Member 'EventShop_C_IsExchangable::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_GetValidValue_ReturnValue) == 0x00009B, "Member 'EventShop_C_IsExchangable::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00009C, "Member 'EventShop_C_IsExchangable::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_BP_GetEventShopItemSetMasterById_IsExists_1) == 0x00009D, "Member 'EventShop_C_IsExchangable::CallFunc_BP_GetEventShopItemSetMasterById_IsExists_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue_1) == 0x0000A0, "Member 'EventShop_C_IsExchangable::CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x0000D4, "Member 'EventShop_C_IsExchangable::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x0000D8, "Member 'EventShop_C_IsExchangable::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_IsMasterySkill_ReturnValue) == 0x000130, "Member 'EventShop_C_IsExchangable::CallFunc_IsMasterySkill_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue) == 0x000134, "Member 'EventShop_C_IsExchangable::CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue_1) == 0x000138, "Member 'EventShop_C_IsExchangable::CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00013C, "Member 'EventShop_C_IsExchangable::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x00013D, "Member 'EventShop_C_IsExchangable::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_GetClassLevelFromClassType_ReturnValue) == 0x000140, "Member 'EventShop_C_IsExchangable::CallFunc_GetClassLevelFromClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x000144, "Member 'EventShop_C_IsExchangable::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_BooleanAND_ReturnValue) == 0x000145, "Member 'EventShop_C_IsExchangable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsExchangable, CallFunc_BooleanAND_ReturnValue_1) == 0x000146, "Member 'EventShop_C_IsExchangable::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function EventShop.EventShop_C.ResultGetTacticalAbility
// 0x00A8 (0x00A8 - 0x0000)
struct EventShop_C_ResultGetTacticalAbility final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64AB[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64AC[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64AD[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopPurchaseItemInfo           CallFunc_Array_Get_Item;                           // 0x0020(0x0030)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_GetEventShopItemSetMasterById_IsExists; // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64AE[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopItemSetMasterData          CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue; // 0x0054(0x0034)(NoDestructor)
	struct FSBSkillParam                          K2Node_MakeStruct_SBSkillParam;                    // 0x0088(0x0018)()
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_ResultGetTacticalAbility) == 0x000008, "Wrong alignment on EventShop_C_ResultGetTacticalAbility");
static_assert(sizeof(EventShop_C_ResultGetTacticalAbility) == 0x0000A8, "Wrong size on EventShop_C_ResultGetTacticalAbility");
static_assert(offsetof(EventShop_C_ResultGetTacticalAbility, Temp_int_Array_Index_Variable) == 0x000000, "Member 'EventShop_C_ResultGetTacticalAbility::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_ResultGetTacticalAbility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000004, "Member 'EventShop_C_ResultGetTacticalAbility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ResultGetTacticalAbility, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'EventShop_C_ResultGetTacticalAbility::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_ResultGetTacticalAbility, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'EventShop_C_ResultGetTacticalAbility::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ResultGetTacticalAbility, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'EventShop_C_ResultGetTacticalAbility::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ResultGetTacticalAbility, CallFunc_Greater_IntInt_ReturnValue) == 0x000014, "Member 'EventShop_C_ResultGetTacticalAbility::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ResultGetTacticalAbility, CallFunc_Array_Length_ReturnValue_1) == 0x000018, "Member 'EventShop_C_ResultGetTacticalAbility::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_ResultGetTacticalAbility, CallFunc_Array_Get_Item) == 0x000020, "Member 'EventShop_C_ResultGetTacticalAbility::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShop_C_ResultGetTacticalAbility, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'EventShop_C_ResultGetTacticalAbility::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ResultGetTacticalAbility, CallFunc_BP_GetEventShopItemSetMasterById_IsExists) == 0x000051, "Member 'EventShop_C_ResultGetTacticalAbility::CallFunc_BP_GetEventShopItemSetMasterById_IsExists' has a wrong offset!");
static_assert(offsetof(EventShop_C_ResultGetTacticalAbility, CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue) == 0x000054, "Member 'EventShop_C_ResultGetTacticalAbility::CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_ResultGetTacticalAbility, K2Node_MakeStruct_SBSkillParam) == 0x000088, "Member 'EventShop_C_ResultGetTacticalAbility::K2Node_MakeStruct_SBSkillParam' has a wrong offset!");
static_assert(offsetof(EventShop_C_ResultGetTacticalAbility, CallFunc_Array_AddUnique_ReturnValue) == 0x0000A0, "Member 'EventShop_C_ResultGetTacticalAbility::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

// Function EventShop.EventShop_C.SetProductLabel
// 0x0018 (0x0018 - 0x0000)
struct EventShop_C_SetProductLabel final
{
public:
	int32                                         InId;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutId;                                             // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64AF[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64B0[0x1];                                     // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_SetProductLabel) == 0x000004, "Wrong alignment on EventShop_C_SetProductLabel");
static_assert(sizeof(EventShop_C_SetProductLabel) == 0x000018, "Wrong size on EventShop_C_SetProductLabel");
static_assert(offsetof(EventShop_C_SetProductLabel, InId) == 0x000000, "Member 'EventShop_C_SetProductLabel::InId' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetProductLabel, OutId) == 0x000004, "Member 'EventShop_C_SetProductLabel::OutId' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetProductLabel, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000008, "Member 'EventShop_C_SetProductLabel::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetProductLabel, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000009, "Member 'EventShop_C_SetProductLabel::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetProductLabel, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'EventShop_C_SetProductLabel::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetProductLabel, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000010, "Member 'EventShop_C_SetProductLabel::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetProductLabel, CallFunc_BooleanOR_ReturnValue) == 0x000011, "Member 'EventShop_C_SetProductLabel::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetProductLabel, CallFunc_BooleanAND_ReturnValue) == 0x000012, "Member 'EventShop_C_SetProductLabel::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetProductLabel, CallFunc_SelectInt_ReturnValue) == 0x000014, "Member 'EventShop_C_SetProductLabel::CallFunc_SelectInt_ReturnValue' has a wrong offset!");

// Function EventShop.EventShop_C.AdjustProductList
// 0x0030 (0x0030 - 0x0000)
struct EventShop_C_AdjustProductList final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64B1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              NewLocalVar_0;                                     // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64B2[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Temp_struct_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_1;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_AdjustProductList) == 0x000008, "Wrong alignment on EventShop_C_AdjustProductList");
static_assert(sizeof(EventShop_C_AdjustProductList) == 0x000030, "Wrong size on EventShop_C_AdjustProductList");
static_assert(offsetof(EventShop_C_AdjustProductList, Enable) == 0x000000, "Member 'EventShop_C_AdjustProductList::Enable' has a wrong offset!");
static_assert(offsetof(EventShop_C_AdjustProductList, NewLocalVar_0) == 0x000004, "Member 'EventShop_C_AdjustProductList::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(EventShop_C_AdjustProductList, Temp_bool_Variable) == 0x00000C, "Member 'EventShop_C_AdjustProductList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_AdjustProductList, Temp_struct_Variable) == 0x000010, "Member 'EventShop_C_AdjustProductList::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_AdjustProductList, Temp_struct_Variable_1) == 0x000018, "Member 'EventShop_C_AdjustProductList::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_AdjustProductList, K2Node_Select_Default) == 0x000020, "Member 'EventShop_C_AdjustProductList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EventShop_C_AdjustProductList, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000028, "Member 'EventShop_C_AdjustProductList::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function EventShop.EventShop_C.SetupByShopType
// 0x0008 (0x0008 - 0x0000)
struct EventShop_C_SetupByShopType final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64B3[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_SetupByShopType) == 0x000004, "Wrong alignment on EventShop_C_SetupByShopType");
static_assert(sizeof(EventShop_C_SetupByShopType) == 0x000008, "Wrong size on EventShop_C_SetupByShopType");
static_assert(offsetof(EventShop_C_SetupByShopType, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'EventShop_C_SetupByShopType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetupByShopType, K2Node_SwitchEnum_CmpSuccess_1) == 0x000001, "Member 'EventShop_C_SetupByShopType::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetupByShopType, CallFunc_GetValidValue_ReturnValue) == 0x000002, "Member 'EventShop_C_SetupByShopType::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetupByShopType, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'EventShop_C_SetupByShopType::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");

// Function EventShop.EventShop_C.IsPickupLabel
// 0x0010 (0x0010 - 0x0000)
struct EventShop_C_IsPickupLabel final
{
public:
	int32                                         In;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Out;                                               // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64B4[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_IsPickupLabel) == 0x000004, "Wrong alignment on EventShop_C_IsPickupLabel");
static_assert(sizeof(EventShop_C_IsPickupLabel) == 0x000010, "Wrong size on EventShop_C_IsPickupLabel");
static_assert(offsetof(EventShop_C_IsPickupLabel, In) == 0x000000, "Member 'EventShop_C_IsPickupLabel::In' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsPickupLabel, Out) == 0x000004, "Member 'EventShop_C_IsPickupLabel::Out' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsPickupLabel, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000005, "Member 'EventShop_C_IsPickupLabel::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsPickupLabel, CallFunc_SelectInt_ReturnValue) == 0x000008, "Member 'EventShop_C_IsPickupLabel::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsPickupLabel, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000C, "Member 'EventShop_C_IsPickupLabel::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function EventShop.EventShop_C.CheckNeedLabel
// 0x0001 (0x0001 - 0x0000)
struct EventShop_C_CheckNeedLabel final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_CheckNeedLabel) == 0x000001, "Wrong alignment on EventShop_C_CheckNeedLabel");
static_assert(sizeof(EventShop_C_CheckNeedLabel) == 0x000001, "Wrong size on EventShop_C_CheckNeedLabel");
static_assert(offsetof(EventShop_C_CheckNeedLabel, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'EventShop_C_CheckNeedLabel::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function EventShop.EventShop_C.SetBtnVisibility
// 0x001F (0x001F - 0x0000)
struct EventShop_C_SetBtnVisibility final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EShopType                                     Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EShopType                                     Temp_byte_Variable_1;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_8;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_9;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EShopType                                     Temp_byte_Variable_2;                              // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_10;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_11;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_12;                             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_13;                             // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_14;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_1;                           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_4;                           // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_5;                           // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_SetBtnVisibility) == 0x000001, "Wrong alignment on EventShop_C_SetBtnVisibility");
static_assert(sizeof(EventShop_C_SetBtnVisibility) == 0x00001F, "Wrong size on EventShop_C_SetBtnVisibility");
static_assert(offsetof(EventShop_C_SetBtnVisibility, Temp_bool_Variable) == 0x000000, "Member 'EventShop_C_SetBtnVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'EventShop_C_SetBtnVisibility::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'EventShop_C_SetBtnVisibility::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000003, "Member 'EventShop_C_SetBtnVisibility::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, Temp_byte_Variable) == 0x000004, "Member 'EventShop_C_SetBtnVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, Temp_bool_Variable_1) == 0x000005, "Member 'EventShop_C_SetBtnVisibility::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, Temp_bool_Variable_2) == 0x000006, "Member 'EventShop_C_SetBtnVisibility::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, Temp_bool_Variable_3) == 0x000007, "Member 'EventShop_C_SetBtnVisibility::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, Temp_bool_Variable_4) == 0x000008, "Member 'EventShop_C_SetBtnVisibility::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, Temp_bool_Variable_5) == 0x000009, "Member 'EventShop_C_SetBtnVisibility::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, Temp_byte_Variable_1) == 0x00000A, "Member 'EventShop_C_SetBtnVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, Temp_bool_Variable_6) == 0x00000B, "Member 'EventShop_C_SetBtnVisibility::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, Temp_bool_Variable_7) == 0x00000C, "Member 'EventShop_C_SetBtnVisibility::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, Temp_bool_Variable_8) == 0x00000D, "Member 'EventShop_C_SetBtnVisibility::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, Temp_bool_Variable_9) == 0x00000E, "Member 'EventShop_C_SetBtnVisibility::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, Temp_byte_Variable_2) == 0x00000F, "Member 'EventShop_C_SetBtnVisibility::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, Temp_bool_Variable_10) == 0x000010, "Member 'EventShop_C_SetBtnVisibility::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, Temp_bool_Variable_11) == 0x000011, "Member 'EventShop_C_SetBtnVisibility::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, Temp_bool_Variable_12) == 0x000012, "Member 'EventShop_C_SetBtnVisibility::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, Temp_bool_Variable_13) == 0x000013, "Member 'EventShop_C_SetBtnVisibility::Temp_bool_Variable_13' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000014, "Member 'EventShop_C_SetBtnVisibility::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, Temp_bool_Variable_14) == 0x000015, "Member 'EventShop_C_SetBtnVisibility::Temp_bool_Variable_14' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x000016, "Member 'EventShop_C_SetBtnVisibility::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x000017, "Member 'EventShop_C_SetBtnVisibility::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, K2Node_Select_Default) == 0x000018, "Member 'EventShop_C_SetBtnVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, K2Node_Select_Default_1) == 0x000019, "Member 'EventShop_C_SetBtnVisibility::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, K2Node_Select_Default_2) == 0x00001A, "Member 'EventShop_C_SetBtnVisibility::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, K2Node_Select_Default_3) == 0x00001B, "Member 'EventShop_C_SetBtnVisibility::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, K2Node_Select_Default_4) == 0x00001C, "Member 'EventShop_C_SetBtnVisibility::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, CallFunc_Not_PreBool_ReturnValue) == 0x00001D, "Member 'EventShop_C_SetBtnVisibility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_SetBtnVisibility, K2Node_Select_Default_5) == 0x00001E, "Member 'EventShop_C_SetBtnVisibility::K2Node_Select_Default_5' has a wrong offset!");

// Function EventShop.EventShop_C.Is Valid Period
// 0x0050 (0x0050 - 0x0000)
struct EventShop_C_Is_Valid_Period final
{
public:
	struct FDateTime                              Start;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              End;                                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsValidEnd;                                        // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsValidStart;                                      // 0x0012(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64B5[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_SBUtcNow_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_DateTimeDateTime_ReturnValue;   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64B6[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_SBUtcNow_ReturnValue_1;                   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DateTimeDateTime_ReturnValue_1; // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_DateTimeDateTime_ReturnValue;    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64B7[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue_1;           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_DateTimeDateTime_ReturnValue_1;  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_Is_Valid_Period) == 0x000008, "Wrong alignment on EventShop_C_Is_Valid_Period");
static_assert(sizeof(EventShop_C_Is_Valid_Period) == 0x000050, "Wrong size on EventShop_C_Is_Valid_Period");
static_assert(offsetof(EventShop_C_Is_Valid_Period, Start) == 0x000000, "Member 'EventShop_C_Is_Valid_Period::Start' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Valid_Period, End) == 0x000008, "Member 'EventShop_C_Is_Valid_Period::End' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Valid_Period, IsValid) == 0x000010, "Member 'EventShop_C_Is_Valid_Period::IsValid' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Valid_Period, IsValidEnd) == 0x000011, "Member 'EventShop_C_Is_Valid_Period::IsValidEnd' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Valid_Period, IsValidStart) == 0x000012, "Member 'EventShop_C_Is_Valid_Period::IsValidStart' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Valid_Period, CallFunc_SBUtcNow_ReturnValue) == 0x000018, "Member 'EventShop_C_Is_Valid_Period::CallFunc_SBUtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Valid_Period, CallFunc_BooleanAND_ReturnValue) == 0x000020, "Member 'EventShop_C_Is_Valid_Period::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Valid_Period, CallFunc_LessEqual_DateTimeDateTime_ReturnValue) == 0x000021, "Member 'EventShop_C_Is_Valid_Period::CallFunc_LessEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Valid_Period, CallFunc_SBUtcNow_ReturnValue_1) == 0x000028, "Member 'EventShop_C_Is_Valid_Period::CallFunc_SBUtcNow_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Valid_Period, CallFunc_DateTimeMinValue_ReturnValue) == 0x000030, "Member 'EventShop_C_Is_Valid_Period::CallFunc_DateTimeMinValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Valid_Period, CallFunc_LessEqual_DateTimeDateTime_ReturnValue_1) == 0x000038, "Member 'EventShop_C_Is_Valid_Period::CallFunc_LessEqual_DateTimeDateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Valid_Period, CallFunc_NotEqual_DateTimeDateTime_ReturnValue) == 0x000039, "Member 'EventShop_C_Is_Valid_Period::CallFunc_NotEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Valid_Period, CallFunc_DateTimeMinValue_ReturnValue_1) == 0x000040, "Member 'EventShop_C_Is_Valid_Period::CallFunc_DateTimeMinValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Valid_Period, CallFunc_NotEqual_DateTimeDateTime_ReturnValue_1) == 0x000048, "Member 'EventShop_C_Is_Valid_Period::CallFunc_NotEqual_DateTimeDateTime_ReturnValue_1' has a wrong offset!");

// Function EventShop.EventShop_C.GetBpStorageSelect
// 0x0030 (0x0030 - 0x0000)
struct EventShop_C_GetBpStorageSelect final
{
public:
	class UEventShopStorageSelect_C*              Widget;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64B8[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_64B9[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopStorageSelect_C*              CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_GetBpStorageSelect) == 0x000008, "Wrong alignment on EventShop_C_GetBpStorageSelect");
static_assert(sizeof(EventShop_C_GetBpStorageSelect) == 0x000030, "Wrong size on EventShop_C_GetBpStorageSelect");
static_assert(offsetof(EventShop_C_GetBpStorageSelect, Widget) == 0x000000, "Member 'EventShop_C_GetBpStorageSelect::Widget' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetBpStorageSelect, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'EventShop_C_GetBpStorageSelect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetBpStorageSelect, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'EventShop_C_GetBpStorageSelect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetBpStorageSelect, CallFunc_Create_ReturnValue) == 0x000020, "Member 'EventShop_C_GetBpStorageSelect::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetBpStorageSelect, CallFunc_AddChild_ReturnValue) == 0x000028, "Member 'EventShop_C_GetBpStorageSelect::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function EventShop.EventShop_C.CheckItemRewardType
// 0x000C (0x000C - 0x0000)
struct EventShop_C_CheckItemRewardType final
{
public:
	ESBRewardItemType                             ItemRewardType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64BA[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemSetId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRewardItemType                             CallFunc_GetRewardItemType_Type;                   // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_CheckItemRewardType) == 0x000004, "Wrong alignment on EventShop_C_CheckItemRewardType");
static_assert(sizeof(EventShop_C_CheckItemRewardType) == 0x00000C, "Wrong size on EventShop_C_CheckItemRewardType");
static_assert(offsetof(EventShop_C_CheckItemRewardType, ItemRewardType) == 0x000000, "Member 'EventShop_C_CheckItemRewardType::ItemRewardType' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckItemRewardType, ItemSetId) == 0x000004, "Member 'EventShop_C_CheckItemRewardType::ItemSetId' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckItemRewardType, Ret) == 0x000008, "Member 'EventShop_C_CheckItemRewardType::Ret' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckItemRewardType, CallFunc_GetRewardItemType_Type) == 0x000009, "Member 'EventShop_C_CheckItemRewardType::CallFunc_GetRewardItemType_Type' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckItemRewardType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000A, "Member 'EventShop_C_CheckItemRewardType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function EventShop.EventShop_C.IsAccessory
// 0x0018 (0x0018 - 0x0000)
struct EventShop_C_IsAccessory final
{
public:
	EProtectorCategory                            Category;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAcc;                                             // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64BB[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_IsAccessory) == 0x000004, "Wrong alignment on EventShop_C_IsAccessory");
static_assert(sizeof(EventShop_C_IsAccessory) == 0x000018, "Wrong size on EventShop_C_IsAccessory");
static_assert(offsetof(EventShop_C_IsAccessory, Category) == 0x000000, "Member 'EventShop_C_IsAccessory::Category' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsAccessory, IsAcc) == 0x000001, "Member 'EventShop_C_IsAccessory::IsAcc' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsAccessory, CallFunc_MakeLiteralByte_ReturnValue) == 0x000002, "Member 'EventShop_C_IsAccessory::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsAccessory, CallFunc_GetValidValue_ReturnValue) == 0x000003, "Member 'EventShop_C_IsAccessory::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsAccessory, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'EventShop_C_IsAccessory::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsAccessory, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000008, "Member 'EventShop_C_IsAccessory::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsAccessory, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00000C, "Member 'EventShop_C_IsAccessory::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsAccessory, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00000D, "Member 'EventShop_C_IsAccessory::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsAccessory, CallFunc_Conv_ByteToInt_ReturnValue_2) == 0x000010, "Member 'EventShop_C_IsAccessory::CallFunc_Conv_ByteToInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsAccessory, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000014, "Member 'EventShop_C_IsAccessory::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsAccessory, CallFunc_BooleanAND_ReturnValue) == 0x000015, "Member 'EventShop_C_IsAccessory::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function EventShop.EventShop_C.CheckDate
// 0x0040 (0x0040 - 0x0000)
struct EventShop_C_CheckDate final
{
public:
	struct FDateTime                              StartDate;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              EndDate;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOk;                                              // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64BC[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              L_EndDate;                                         // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              L_StartDate;                                       // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              L_DefaultDateTime;                                 // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_SBUtcNow_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DateTimeDateTime_ReturnValue;        // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue;  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_DateTimeDateTime_ReturnValue;   // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_CheckDate) == 0x000008, "Wrong alignment on EventShop_C_CheckDate");
static_assert(sizeof(EventShop_C_CheckDate) == 0x000040, "Wrong size on EventShop_C_CheckDate");
static_assert(offsetof(EventShop_C_CheckDate, StartDate) == 0x000000, "Member 'EventShop_C_CheckDate::StartDate' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckDate, EndDate) == 0x000008, "Member 'EventShop_C_CheckDate::EndDate' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckDate, IsOk) == 0x000010, "Member 'EventShop_C_CheckDate::IsOk' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckDate, L_EndDate) == 0x000018, "Member 'EventShop_C_CheckDate::L_EndDate' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckDate, L_StartDate) == 0x000020, "Member 'EventShop_C_CheckDate::L_StartDate' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckDate, L_DefaultDateTime) == 0x000028, "Member 'EventShop_C_CheckDate::L_DefaultDateTime' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckDate, CallFunc_SBUtcNow_ReturnValue) == 0x000030, "Member 'EventShop_C_CheckDate::CallFunc_SBUtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckDate, CallFunc_Less_DateTimeDateTime_ReturnValue) == 0x000038, "Member 'EventShop_C_CheckDate::CallFunc_Less_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckDate, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue) == 0x000039, "Member 'EventShop_C_CheckDate::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckDate, CallFunc_LessEqual_DateTimeDateTime_ReturnValue) == 0x00003A, "Member 'EventShop_C_CheckDate::CallFunc_LessEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");

// Function EventShop.EventShop_C.GetInventory
// 0x0040 (0x0040 - 0x0000)
struct EventShop_C_GetInventory final
{
public:
	class USBOwnItemListContainer*                CallFunc_GetOrnamentStorage_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue_1;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue;                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue_2;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue_3;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_GetInventory) == 0x000008, "Wrong alignment on EventShop_C_GetInventory");
static_assert(sizeof(EventShop_C_GetInventory) == 0x000040, "Wrong size on EventShop_C_GetInventory");
static_assert(offsetof(EventShop_C_GetInventory, CallFunc_GetOrnamentStorage_ReturnValue) == 0x000000, "Member 'EventShop_C_GetInventory::CallFunc_GetOrnamentStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetInventory, CallFunc_GetStorage_ReturnValue) == 0x000008, "Member 'EventShop_C_GetInventory::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetInventory, CallFunc_GetTemporallyStorage_ReturnValue) == 0x000010, "Member 'EventShop_C_GetInventory::CallFunc_GetTemporallyStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetInventory, CallFunc_GetTemporallyStorage_ReturnValue_1) == 0x000018, "Member 'EventShop_C_GetInventory::CallFunc_GetTemporallyStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetInventory, CallFunc_GetCharacterStorage_ReturnValue) == 0x000020, "Member 'EventShop_C_GetInventory::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetInventory, CallFunc_GetInventory_ReturnValue) == 0x000028, "Member 'EventShop_C_GetInventory::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetInventory, CallFunc_GetTemporallyStorage_ReturnValue_2) == 0x000030, "Member 'EventShop_C_GetInventory::CallFunc_GetTemporallyStorage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetInventory, CallFunc_GetTemporallyStorage_ReturnValue_3) == 0x000038, "Member 'EventShop_C_GetInventory::CallFunc_GetTemporallyStorage_ReturnValue_3' has a wrong offset!");

// Function EventShop.EventShop_C.CreateProductItemList_Filtering
// 0x0390 (0x0390 - 0x0000)
struct EventShop_C_CreateProductItemList_Filtering final
{
public:
	struct FSBEventShopProduct                    L_List;                                            // 0x0000(0x0070)(Edit, BlueprintVisible)
	int32                                         L_CreateItemType;                                  // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64BD[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   L_MasterDataMng;                                   // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64BE[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBEventShopProduct>            CallFunc_SortProductList_OutProductList;           // 0x0090(0x0010)(ReferenceParm)
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue;             // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64BF[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UEventShopProductBox_Item_C* Item)> K2Node_CreateDelegate_OutputDelegate;              // 0x00AC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UEventShopProductBox_Item_C* Item)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00BC(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBEventShopPurchaseItemInfo           CallFunc_Array_Get_Item;                           // 0x00D0(0x0030)()
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64C0[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopMasterData                 CallFunc_Array_Get_Item_1;                         // 0x0108(0x0058)()
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue;  // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64C1[0x2];                                     // 0x0162(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SetProductLabel_OutId;                    // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPickupLabel_Out;                        // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64C2[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBEventShopProduct                    CallFunc_Array_Get_Item_2;                         // 0x0180(0x0070)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x01FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64C3[0x5];                                     // 0x01FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBEventShopItemMasterData>     CallFunc_BP_GetEventShopItemMaster_ReturnValue;    // 0x0200(0x0010)(ReferenceParm)
	struct FSBEventShopItemMasterData             CallFunc_Array_Get_Item_3;                         // 0x0210(0x0050)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckDate_IsOk;                           // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64C4[0x3];                                     // 0x0265(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterEventShopText_ReturnValue;       // 0x0268(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsAchieveRank_IsAchieve;               // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64C5[0x3];                                     // 0x0279(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Is_Mastery_Skill_Ret;                     // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterEventShopText_ReturnValue_1;     // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckEquipGender_IsOk;                    // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsExchangable_Ret;                        // 0x0291(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckFilterSearch_IsOk;                   // 0x0292(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64C6[0x1];                                     // 0x0293(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetExchangeNum_Num;                       // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x029C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64C7[0x3];                                     // 0x029D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Sell_Type_Is_Sold_Out_Type;               // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64C8[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopProduct                    K2Node_MakeStruct_SBEventShopProduct;              // 0x02A8(0x0070)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x031C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0324(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64C9[0x3];                                     // 0x0325(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x032C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64CA[0x3];                                     // 0x032D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64CB[0x4];                                     // 0x0334(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopProductBox_Item_C*            CallFunc_Create_ReturnValue;                       // 0x0338(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventShopProductBox_Label_C*           CallFunc_Create_ReturnValue_1;                     // 0x0340(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0348(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0358(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0360(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64CC[0x3];                                     // 0x0371(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UEventShopProductBox_Item_C* Item, bool bOnNumberInput)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0374(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0384(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0385(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64CD[0x2];                                     // 0x0386(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0388(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_CreateProductItemList_Filtering) == 0x000008, "Wrong alignment on EventShop_C_CreateProductItemList_Filtering");
static_assert(sizeof(EventShop_C_CreateProductItemList_Filtering) == 0x000390, "Wrong size on EventShop_C_CreateProductItemList_Filtering");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, L_List) == 0x000000, "Member 'EventShop_C_CreateProductItemList_Filtering::L_List' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, L_CreateItemType) == 0x000070, "Member 'EventShop_C_CreateProductItemList_Filtering::L_CreateItemType' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, L_MasterDataMng) == 0x000078, "Member 'EventShop_C_CreateProductItemList_Filtering::L_MasterDataMng' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, Temp_int_Variable) == 0x000084, "Member 'EventShop_C_CreateProductItemList_Filtering::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_Add_IntInt_ReturnValue) == 0x000088, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_SortProductList_OutProductList) == 0x000090, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_SortProductList_OutProductList' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_DateTimeMinValue_ReturnValue) == 0x0000A0, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_DateTimeMinValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, Temp_bool_Variable) == 0x0000A8, "Member 'EventShop_C_CreateProductItemList_Filtering::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, K2Node_CreateDelegate_OutputDelegate) == 0x0000AC, "Member 'EventShop_C_CreateProductItemList_Filtering::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000BC, "Member 'EventShop_C_CreateProductItemList_Filtering::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, Temp_int_Array_Index_Variable) == 0x0000CC, "Member 'EventShop_C_CreateProductItemList_Filtering::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, Temp_int_Array_Index_Variable_1) == 0x000100, "Member 'EventShop_C_CreateProductItemList_Filtering::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_Array_Get_Item_1) == 0x000108, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue) == 0x000160, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_SetDateTime_ReturnValue) == 0x000161, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_SetProductLabel_OutId) == 0x000164, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_SetProductLabel_OutId' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_IsPickupLabel_Out) == 0x000168, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_IsPickupLabel_Out' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_Add_IntInt_ReturnValue_1) == 0x00016C, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_GetTextFromAsset_ReturnValue) == 0x000170, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_Array_Get_Item_2) == 0x000180, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_Array_Length_ReturnValue_1) == 0x0001F0, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_Subtract_IntInt_ReturnValue) == 0x0001F4, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001F8, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0001F9, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0001FA, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_BP_GetEventShopItemMaster_ReturnValue) == 0x000200, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_BP_GetEventShopItemMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_Array_Get_Item_3) == 0x000210, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_Array_Length_ReturnValue_2) == 0x000260, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_CheckDate_IsOk) == 0x000264, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_CheckDate_IsOk' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_GetMasterEventShopText_ReturnValue) == 0x000268, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_GetMasterEventShopText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_GetIsAchieveRank_IsAchieve) == 0x000278, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_GetIsAchieveRank_IsAchieve' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_Is_Mastery_Skill_Ret) == 0x00027C, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_Is_Mastery_Skill_Ret' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_GetMasterEventShopText_ReturnValue_1) == 0x000280, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_GetMasterEventShopText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_CheckEquipGender_IsOk) == 0x000290, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_CheckEquipGender_IsOk' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_IsExchangable_Ret) == 0x000291, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_IsExchangable_Ret' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_CheckFilterSearch_IsOk) == 0x000292, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_CheckFilterSearch_IsOk' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_GetExchangeNum_Num) == 0x000294, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_GetExchangeNum_Num' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000298, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00029C, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_Sell_Type_Is_Sold_Out_Type) == 0x0002A0, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_Sell_Type_Is_Sold_Out_Type' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, K2Node_MakeStruct_SBEventShopProduct) == 0x0002A8, "Member 'EventShop_C_CreateProductItemList_Filtering::K2Node_MakeStruct_SBEventShopProduct' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_Array_Add_ReturnValue) == 0x000318, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, Temp_int_Loop_Counter_Variable) == 0x00031C, "Member 'EventShop_C_CreateProductItemList_Filtering::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, Temp_int_Loop_Counter_Variable_1) == 0x000320, "Member 'EventShop_C_CreateProductItemList_Filtering::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_Less_IntInt_ReturnValue) == 0x000324, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_Add_IntInt_ReturnValue_2) == 0x000328, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_Less_IntInt_ReturnValue_1) == 0x00032C, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_Add_IntInt_ReturnValue_3) == 0x000330, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_Create_ReturnValue) == 0x000338, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_Create_ReturnValue_1) == 0x000340, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, K2Node_MakeStruct_Margin) == 0x000348, "Member 'EventShop_C_CreateProductItemList_Filtering::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_AddChild_ReturnValue) == 0x000358, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, K2Node_MakeStruct_Margin_1) == 0x000360, "Member 'EventShop_C_CreateProductItemList_Filtering::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, Temp_byte_Variable) == 0x000370, "Member 'EventShop_C_CreateProductItemList_Filtering::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, K2Node_CreateDelegate_OutputDelegate_2) == 0x000374, "Member 'EventShop_C_CreateProductItemList_Filtering::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, Temp_byte_Variable_1) == 0x000384, "Member 'EventShop_C_CreateProductItemList_Filtering::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, K2Node_Select_Default) == 0x000385, "Member 'EventShop_C_CreateProductItemList_Filtering::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EventShop_C_CreateProductItemList_Filtering, CallFunc_AddChild_ReturnValue_1) == 0x000388, "Member 'EventShop_C_CreateProductItemList_Filtering::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");

// Function EventShop.EventShop_C.IsHaveBoard
// 0x0050 (0x0050 - 0x0000)
struct EventShop_C_IsHaveBoard final
{
public:
	int32                                         BoardId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64CE[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_BoardId;                                         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBAdventureBoardParam>         CallFunc_GetBoardParamList_ReturnValue;            // 0x0018(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64CF[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAdventureBoardParam                 CallFunc_Array_Get_Item;                           // 0x0030(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_IsHaveBoard) == 0x000008, "Wrong alignment on EventShop_C_IsHaveBoard");
static_assert(sizeof(EventShop_C_IsHaveBoard) == 0x000050, "Wrong size on EventShop_C_IsHaveBoard");
static_assert(offsetof(EventShop_C_IsHaveBoard, BoardId) == 0x000000, "Member 'EventShop_C_IsHaveBoard::BoardId' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveBoard, Ret) == 0x000004, "Member 'EventShop_C_IsHaveBoard::Ret' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveBoard, L_BoardId) == 0x000008, "Member 'EventShop_C_IsHaveBoard::L_BoardId' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveBoard, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'EventShop_C_IsHaveBoard::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveBoard, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'EventShop_C_IsHaveBoard::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveBoard, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'EventShop_C_IsHaveBoard::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveBoard, CallFunc_GetBoardParamList_ReturnValue) == 0x000018, "Member 'EventShop_C_IsHaveBoard::CallFunc_GetBoardParamList_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveBoard, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'EventShop_C_IsHaveBoard::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveBoard, CallFunc_Array_Get_Item) == 0x000030, "Member 'EventShop_C_IsHaveBoard::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveBoard, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'EventShop_C_IsHaveBoard::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveBoard, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000049, "Member 'EventShop_C_IsHaveBoard::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function EventShop.EventShop_C.GetNumberOfProducts
// 0x0044 (0x0044 - 0x0000)
struct EventShop_C_GetNumberOfProducts final
{
public:
	int32                                         ItemSetId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Num;                                               // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetEventShopItemSetMasterById_IsExists; // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64D0[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopItemSetMasterData          CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue; // 0x000C(0x0034)(NoDestructor)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_GetNumberOfProducts) == 0x000004, "Wrong alignment on EventShop_C_GetNumberOfProducts");
static_assert(sizeof(EventShop_C_GetNumberOfProducts) == 0x000044, "Wrong size on EventShop_C_GetNumberOfProducts");
static_assert(offsetof(EventShop_C_GetNumberOfProducts, ItemSetId) == 0x000000, "Member 'EventShop_C_GetNumberOfProducts::ItemSetId' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetNumberOfProducts, Num) == 0x000004, "Member 'EventShop_C_GetNumberOfProducts::Num' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetNumberOfProducts, CallFunc_BP_GetEventShopItemSetMasterById_IsExists) == 0x000008, "Member 'EventShop_C_GetNumberOfProducts::CallFunc_BP_GetEventShopItemSetMasterById_IsExists' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetNumberOfProducts, CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue) == 0x00000C, "Member 'EventShop_C_GetNumberOfProducts::CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_GetNumberOfProducts, CallFunc_SelectInt_ReturnValue) == 0x000040, "Member 'EventShop_C_GetNumberOfProducts::CallFunc_SelectInt_ReturnValue' has a wrong offset!");

// Function EventShop.EventShop_C.StorageCheckSelectItem
// 0x00A0 (0x00A0 - 0x0000)
struct EventShop_C_StorageCheckSelectItem final
{
public:
	TArray<struct FSBEventShopPurchaseItemInfo>   List;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Ret;                                               // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64D1[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBEventShopPurchaseItemInfo           CallFunc_Array_Get_Item;                           // 0x0020(0x0030)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64D2[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetEventShopItemSetMasterById_IsExists; // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64D3[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopItemSetMasterData          CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue; // 0x005C(0x0034)(NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0096(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0097(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x009B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_StorageCheckSelectItem) == 0x000008, "Wrong alignment on EventShop_C_StorageCheckSelectItem");
static_assert(sizeof(EventShop_C_StorageCheckSelectItem) == 0x0000A0, "Wrong size on EventShop_C_StorageCheckSelectItem");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, List) == 0x000000, "Member 'EventShop_C_StorageCheckSelectItem::List' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, Ret) == 0x000010, "Member 'EventShop_C_StorageCheckSelectItem::Ret' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'EventShop_C_StorageCheckSelectItem::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, Temp_int_Array_Index_Variable) == 0x000018, "Member 'EventShop_C_StorageCheckSelectItem::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'EventShop_C_StorageCheckSelectItem::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, CallFunc_Array_Get_Item) == 0x000020, "Member 'EventShop_C_StorageCheckSelectItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'EventShop_C_StorageCheckSelectItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'EventShop_C_StorageCheckSelectItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, CallFunc_BP_GetEventShopItemSetMasterById_IsExists) == 0x000058, "Member 'EventShop_C_StorageCheckSelectItem::CallFunc_BP_GetEventShopItemSetMasterById_IsExists' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue) == 0x00005C, "Member 'EventShop_C_StorageCheckSelectItem::CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, CallFunc_Conv_IntToByte_ReturnValue) == 0x000090, "Member 'EventShop_C_StorageCheckSelectItem::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000091, "Member 'EventShop_C_StorageCheckSelectItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, CallFunc_GetValidValue_ReturnValue) == 0x000092, "Member 'EventShop_C_StorageCheckSelectItem::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000093, "Member 'EventShop_C_StorageCheckSelectItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000094, "Member 'EventShop_C_StorageCheckSelectItem::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000095, "Member 'EventShop_C_StorageCheckSelectItem::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000096, "Member 'EventShop_C_StorageCheckSelectItem::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000097, "Member 'EventShop_C_StorageCheckSelectItem::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, CallFunc_BooleanOR_ReturnValue) == 0x000098, "Member 'EventShop_C_StorageCheckSelectItem::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, CallFunc_BooleanOR_ReturnValue_1) == 0x000099, "Member 'EventShop_C_StorageCheckSelectItem::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, CallFunc_BooleanOR_ReturnValue_2) == 0x00009A, "Member 'EventShop_C_StorageCheckSelectItem::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, CallFunc_BooleanOR_ReturnValue_3) == 0x00009B, "Member 'EventShop_C_StorageCheckSelectItem::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_StorageCheckSelectItem, CallFunc_BooleanOR_ReturnValue_4) == 0x00009C, "Member 'EventShop_C_StorageCheckSelectItem::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");

// Function EventShop.EventShop_C.Sell Type Is Sold Out
// 0x001C (0x001C - 0x0000)
struct EventShop_C_Sell_Type_Is_Sold_Out final
{
public:
	int32                                         SellType;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Limit;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Stock;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsExchangable;                                     // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64D4[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Type;                                              // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64D5[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_C_Sell_Type_Is_Sold_Out) == 0x000004, "Wrong alignment on EventShop_C_Sell_Type_Is_Sold_Out");
static_assert(sizeof(EventShop_C_Sell_Type_Is_Sold_Out) == 0x00001C, "Wrong size on EventShop_C_Sell_Type_Is_Sold_Out");
static_assert(offsetof(EventShop_C_Sell_Type_Is_Sold_Out, SellType) == 0x000000, "Member 'EventShop_C_Sell_Type_Is_Sold_Out::SellType' has a wrong offset!");
static_assert(offsetof(EventShop_C_Sell_Type_Is_Sold_Out, Limit) == 0x000004, "Member 'EventShop_C_Sell_Type_Is_Sold_Out::Limit' has a wrong offset!");
static_assert(offsetof(EventShop_C_Sell_Type_Is_Sold_Out, Stock) == 0x000008, "Member 'EventShop_C_Sell_Type_Is_Sold_Out::Stock' has a wrong offset!");
static_assert(offsetof(EventShop_C_Sell_Type_Is_Sold_Out, IsExchangable) == 0x00000C, "Member 'EventShop_C_Sell_Type_Is_Sold_Out::IsExchangable' has a wrong offset!");
static_assert(offsetof(EventShop_C_Sell_Type_Is_Sold_Out, Type) == 0x000010, "Member 'EventShop_C_Sell_Type_Is_Sold_Out::Type' has a wrong offset!");
static_assert(offsetof(EventShop_C_Sell_Type_Is_Sold_Out, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000014, "Member 'EventShop_C_Sell_Type_Is_Sold_Out::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Sell_Type_Is_Sold_Out, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000015, "Member 'EventShop_C_Sell_Type_Is_Sold_Out::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Sell_Type_Is_Sold_Out, CallFunc_BooleanAND_ReturnValue) == 0x000016, "Member 'EventShop_C_Sell_Type_Is_Sold_Out::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Sell_Type_Is_Sold_Out, CallFunc_SelectInt_ReturnValue) == 0x000018, "Member 'EventShop_C_Sell_Type_Is_Sold_Out::CallFunc_SelectInt_ReturnValue' has a wrong offset!");

// Function EventShop.EventShop_C.CheckEquipGender
// 0x02D8 (0x02D8 - 0x0000)
struct EventShop_C_CheckEquipGender final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOk;                                              // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EEquipableGender                              L_cos_gender;                                      // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64D6[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64D7[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64D8[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnequipableItemsSettingEventShop_ReturnValue; // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            CallFunc_GetPlayerGender_OutGender;                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64D9[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            CallFunc_GetPlayerGender_OutGender_1;              // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64DA[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetEventShopItemSetMasterById_IsExists; // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64DB[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopItemSetMasterData          CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue; // 0x0054(0x0034)(NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64DC[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterItemBox                       CallFunc_GetItemBoxMasterData_ReturnValue;         // 0x0090(0x0020)()
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64DD[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x00B8(0x00D0)()
	struct FSBItemBoxContentParam                 CallFunc_Array_Get_Item;                           // 0x0188(0x0020)(NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64DE[0x6];                                     // 0x01AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x01B0(0x0088)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64DF[0x3];                                     // 0x0239(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0245(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist_1;           // 0x0246(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64E0[0x1];                                     // 0x0247(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue_1;       // 0x0248(0x0088)()
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_3;             // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_CheckEquipGender) == 0x000008, "Wrong alignment on EventShop_C_CheckEquipGender");
static_assert(sizeof(EventShop_C_CheckEquipGender) == 0x0002D8, "Wrong size on EventShop_C_CheckEquipGender");
static_assert(offsetof(EventShop_C_CheckEquipGender, ID) == 0x000000, "Member 'EventShop_C_CheckEquipGender::ID' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, IsOk) == 0x000004, "Member 'EventShop_C_CheckEquipGender::IsOk' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, L_cos_gender) == 0x000005, "Member 'EventShop_C_CheckEquipGender::L_cos_gender' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'EventShop_C_CheckEquipGender::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'EventShop_C_CheckEquipGender::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'EventShop_C_CheckEquipGender::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_GetCharacterId_ReturnValue) == 0x000018, "Member 'EventShop_C_CheckEquipGender::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_GetConfigSaveManager_IsValid) == 0x000028, "Member 'EventShop_C_CheckEquipGender::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000030, "Member 'EventShop_C_CheckEquipGender::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_IsUnequipableItemsSettingEventShop_ReturnValue) == 0x000038, "Member 'EventShop_C_CheckEquipGender::CallFunc_IsUnequipableItemsSettingEventShop_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_GetPlayerGender_OutGender) == 0x000039, "Member 'EventShop_C_CheckEquipGender::CallFunc_GetPlayerGender_OutGender' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00003C, "Member 'EventShop_C_CheckEquipGender::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_Add_IntInt_ReturnValue_1) == 0x000040, "Member 'EventShop_C_CheckEquipGender::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_GetPlayerGender_OutGender_1) == 0x000044, "Member 'EventShop_C_CheckEquipGender::CallFunc_GetPlayerGender_OutGender_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000048, "Member 'EventShop_C_CheckEquipGender::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_Add_IntInt_ReturnValue_2) == 0x00004C, "Member 'EventShop_C_CheckEquipGender::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_BP_GetEventShopItemSetMasterById_IsExists) == 0x000050, "Member 'EventShop_C_CheckEquipGender::CallFunc_BP_GetEventShopItemSetMasterById_IsExists' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue) == 0x000054, "Member 'EventShop_C_CheckEquipGender::CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, K2Node_SwitchInteger_CmpSuccess) == 0x000088, "Member 'EventShop_C_CheckEquipGender::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_GetItemBoxMasterData_ReturnValue) == 0x000090, "Member 'EventShop_C_CheckEquipGender::CallFunc_GetItemBoxMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_GetItemMasterData_IsExists) == 0x0000B0, "Member 'EventShop_C_CheckEquipGender::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_GetItemMasterData_ReturnValue) == 0x0000B8, "Member 'EventShop_C_CheckEquipGender::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_Array_Get_Item) == 0x000188, "Member 'EventShop_C_CheckEquipGender::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001A8, "Member 'EventShop_C_CheckEquipGender::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_BP_FindCostumeMaster_IsExist) == 0x0001A9, "Member 'EventShop_C_CheckEquipGender::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x0001B0, "Member 'EventShop_C_CheckEquipGender::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000238, "Member 'EventShop_C_CheckEquipGender::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_Conv_ByteToInt_ReturnValue_2) == 0x00023C, "Member 'EventShop_C_CheckEquipGender::CallFunc_Conv_ByteToInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_Array_Length_ReturnValue) == 0x000240, "Member 'EventShop_C_CheckEquipGender::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000244, "Member 'EventShop_C_CheckEquipGender::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_Less_IntInt_ReturnValue) == 0x000245, "Member 'EventShop_C_CheckEquipGender::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_BP_FindCostumeMaster_IsExist_1) == 0x000246, "Member 'EventShop_C_CheckEquipGender::CallFunc_BP_FindCostumeMaster_IsExist_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_BP_FindCostumeMaster_ReturnValue_1) == 0x000248, "Member 'EventShop_C_CheckEquipGender::CallFunc_BP_FindCostumeMaster_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_Conv_ByteToInt_ReturnValue_3) == 0x0002D0, "Member 'EventShop_C_CheckEquipGender::CallFunc_Conv_ByteToInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventShop_C_CheckEquipGender, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0002D4, "Member 'EventShop_C_CheckEquipGender::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function EventShop.EventShop_C.Is Mastery Skill
// 0x0060 (0x0060 - 0x0000)
struct EventShop_C_Is_Mastery_Skill final
{
public:
	int32                                         ItemSetId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SellType;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Ret;                                               // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64E1[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetEventShopItemSetMasterById_IsExists; // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64E2[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopItemSetMasterData          CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue; // 0x001C(0x0034)(NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMasterySkill_ReturnValue;               // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64E3[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_Is_Mastery_Skill) == 0x000008, "Wrong alignment on EventShop_C_Is_Mastery_Skill");
static_assert(sizeof(EventShop_C_Is_Mastery_Skill) == 0x000060, "Wrong size on EventShop_C_Is_Mastery_Skill");
static_assert(offsetof(EventShop_C_Is_Mastery_Skill, ItemSetId) == 0x000000, "Member 'EventShop_C_Is_Mastery_Skill::ItemSetId' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Mastery_Skill, SellType) == 0x000004, "Member 'EventShop_C_Is_Mastery_Skill::SellType' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Mastery_Skill, Ret) == 0x000008, "Member 'EventShop_C_Is_Mastery_Skill::Ret' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Mastery_Skill, CallFunc_GetMasterDataManager_IsValid) == 0x00000C, "Member 'EventShop_C_Is_Mastery_Skill::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Mastery_Skill, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'EventShop_C_Is_Mastery_Skill::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Mastery_Skill, CallFunc_BP_GetEventShopItemSetMasterById_IsExists) == 0x000018, "Member 'EventShop_C_Is_Mastery_Skill::CallFunc_BP_GetEventShopItemSetMasterById_IsExists' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Mastery_Skill, CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue) == 0x00001C, "Member 'EventShop_C_Is_Mastery_Skill::CallFunc_BP_GetEventShopItemSetMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Mastery_Skill, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000050, "Member 'EventShop_C_Is_Mastery_Skill::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Mastery_Skill, CallFunc_IsMasterySkill_ReturnValue) == 0x000051, "Member 'EventShop_C_Is_Mastery_Skill::CallFunc_IsMasterySkill_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Mastery_Skill, CallFunc_SelectInt_ReturnValue) == 0x000054, "Member 'EventShop_C_Is_Mastery_Skill::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Mastery_Skill, CallFunc_Conv_IntToByte_ReturnValue) == 0x000058, "Member 'EventShop_C_Is_Mastery_Skill::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Mastery_Skill, CallFunc_GetValidValue_ReturnValue) == 0x000059, "Member 'EventShop_C_Is_Mastery_Skill::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_Is_Mastery_Skill, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00005A, "Member 'EventShop_C_Is_Mastery_Skill::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function EventShop.EventShop_C.IsHaveCutomPartsById
// 0x0048 (0x0048 - 0x0000)
struct EventShop_C_IsHaveCutomPartsById final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsHave;                                            // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64E4[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64E5[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDecorationData>                CallFunc_GetAdventureCardDecorationDataList_ReturnValue; // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64E6[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDecorationData                        CallFunc_Array_Get_Item;                           // 0x0030(0x0010)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShop_C_IsHaveCutomPartsById) == 0x000008, "Wrong alignment on EventShop_C_IsHaveCutomPartsById");
static_assert(sizeof(EventShop_C_IsHaveCutomPartsById) == 0x000048, "Wrong size on EventShop_C_IsHaveCutomPartsById");
static_assert(offsetof(EventShop_C_IsHaveCutomPartsById, ID) == 0x000000, "Member 'EventShop_C_IsHaveCutomPartsById::ID' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveCutomPartsById, Ret) == 0x000004, "Member 'EventShop_C_IsHaveCutomPartsById::Ret' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveCutomPartsById, IsHave) == 0x000005, "Member 'EventShop_C_IsHaveCutomPartsById::IsHave' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveCutomPartsById, Temp_bool_True_if_break_was_hit_Variable) == 0x000006, "Member 'EventShop_C_IsHaveCutomPartsById::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveCutomPartsById, Temp_int_Array_Index_Variable) == 0x000008, "Member 'EventShop_C_IsHaveCutomPartsById::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveCutomPartsById, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'EventShop_C_IsHaveCutomPartsById::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveCutomPartsById, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'EventShop_C_IsHaveCutomPartsById::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveCutomPartsById, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'EventShop_C_IsHaveCutomPartsById::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveCutomPartsById, CallFunc_GetAdventureCardDecorationDataList_ReturnValue) == 0x000018, "Member 'EventShop_C_IsHaveCutomPartsById::CallFunc_GetAdventureCardDecorationDataList_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveCutomPartsById, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'EventShop_C_IsHaveCutomPartsById::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveCutomPartsById, CallFunc_Array_Get_Item) == 0x000030, "Member 'EventShop_C_IsHaveCutomPartsById::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveCutomPartsById, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'EventShop_C_IsHaveCutomPartsById::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveCutomPartsById, CallFunc_BooleanAND_ReturnValue) == 0x000041, "Member 'EventShop_C_IsHaveCutomPartsById::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShop_C_IsHaveCutomPartsById, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000042, "Member 'EventShop_C_IsHaveCutomPartsById::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

