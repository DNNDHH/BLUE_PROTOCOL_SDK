#pragma once

 

// Package: UMG_ProductItemList

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "E_SBProductDetailType_structs.hpp"


namespace SDK::Params
{

// Function UMG_ProductItemList.UMG_ProductItemList_C.OnItemClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_ProductItemList_C_OnItemClicked__DelegateSignature final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductItemList_C_OnItemClicked__DelegateSignature) == 0x000008, "Wrong alignment on UMG_ProductItemList_C_OnItemClicked__DelegateSignature");
static_assert(sizeof(UMG_ProductItemList_C_OnItemClicked__DelegateSignature) == 0x000008, "Wrong size on UMG_ProductItemList_C_OnItemClicked__DelegateSignature");
static_assert(offsetof(UMG_ProductItemList_C_OnItemClicked__DelegateSignature, Data) == 0x000000, "Member 'UMG_ProductItemList_C_OnItemClicked__DelegateSignature::Data' has a wrong offset!");

// Function UMG_ProductItemList.UMG_ProductItemList_C.OnSelectedItemData__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UMG_ProductItemList_C_OnSelectedItemData__DelegateSignature final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTrying;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductItemList_C_OnSelectedItemData__DelegateSignature) == 0x000008, "Wrong alignment on UMG_ProductItemList_C_OnSelectedItemData__DelegateSignature");
static_assert(sizeof(UMG_ProductItemList_C_OnSelectedItemData__DelegateSignature) == 0x000010, "Wrong size on UMG_ProductItemList_C_OnSelectedItemData__DelegateSignature");
static_assert(offsetof(UMG_ProductItemList_C_OnSelectedItemData__DelegateSignature, Data) == 0x000000, "Member 'UMG_ProductItemList_C_OnSelectedItemData__DelegateSignature::Data' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_OnSelectedItemData__DelegateSignature, bTrying) == 0x000008, "Member 'UMG_ProductItemList_C_OnSelectedItemData__DelegateSignature::bTrying' has a wrong offset!");

// Function UMG_ProductItemList.UMG_ProductItemList_C.OnBannerVisibilityChanged __DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_ProductItemList_C_OnBannerVisibilityChanged___DelegateSignature final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductItemList_C_OnBannerVisibilityChanged___DelegateSignature) == 0x000001, "Wrong alignment on UMG_ProductItemList_C_OnBannerVisibilityChanged___DelegateSignature");
static_assert(sizeof(UMG_ProductItemList_C_OnBannerVisibilityChanged___DelegateSignature) == 0x000001, "Wrong size on UMG_ProductItemList_C_OnBannerVisibilityChanged___DelegateSignature");
static_assert(offsetof(UMG_ProductItemList_C_OnBannerVisibilityChanged___DelegateSignature, Param_IsVisible) == 0x000000, "Member 'UMG_ProductItemList_C_OnBannerVisibilityChanged___DelegateSignature::Param_IsVisible' has a wrong offset!");

// Function UMG_ProductItemList.UMG_ProductItemList_C.ExecuteUbergraph_UMG_ProductItemList
// 0x0170 (0x0170 - 0x0000)
struct UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_952F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin_2;                        // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin_3;                        // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   K2Node_CustomEvent_URL;                            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IAssetRegistry>        CallFunc_GetAssetRegistry_ReturnValue;             // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          Temp_bool_Variable_3;                              // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9530[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAssetData                             CallFunc_GetAssetByObjectPath_ReturnValue;         // 0x0090(0x0060)(HasGetValueTypeHash)
	class UObject*                                CallFunc_GetAsset_ReturnValue;                     // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UObject>                 CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x00F8(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0122(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x0123(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9531[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                K2Node_CustomEvent_Data_1;                         // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9532[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                K2Node_CustomEvent_Data;                           // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bTrying;                        // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9533[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetScrollOffset_ReturnValue;              // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SBProductDetailType                         K2Node_CustomEvent_DetailType;                     // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsItemBox;                     // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9534[0x1];                                     // 0x014B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x014C(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x015D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9535[0x2];                                     // 0x015E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UShopMenuDetails_ItemIconL_C*>   K2Node_MakeArray_Array;                            // 0x0160(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList) == 0x000008, "Wrong alignment on UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList");
static_assert(sizeof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList) == 0x000170, "Wrong size on UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, EntryPoint) == 0x000000, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, Temp_object_Variable) == 0x000010, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, K2Node_DynamicCast_AsTexture_2D) == 0x000018, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000021, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000022, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000023, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, Temp_bool_Variable) == 0x000024, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000025, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, CallFunc_Not_PreBool_ReturnValue) == 0x000026, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x000027, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, CallFunc_BooleanAND_ReturnValue) == 0x000028, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, Temp_bool_Variable_1) == 0x000029, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, Temp_bool_Variable_2) == 0x00002A, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00002B, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x00002C, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, CallFunc_Not_PreBool_ReturnValue_1) == 0x00002D, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, CallFunc_BooleanAND_ReturnValue_1) == 0x00002E, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, CallFunc_Not_PreBool_ReturnValue_2) == 0x00002F, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, K2Node_MakeStruct_Margin) == 0x000030, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, K2Node_MakeStruct_Margin_1) == 0x000040, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, K2Node_MakeStruct_Margin_2) == 0x000050, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::K2Node_MakeStruct_Margin_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, K2Node_MakeStruct_Margin_3) == 0x000060, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::K2Node_MakeStruct_Margin_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, K2Node_CustomEvent_URL) == 0x000070, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::K2Node_CustomEvent_URL' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, CallFunc_GetAssetRegistry_ReturnValue) == 0x000078, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::CallFunc_GetAssetRegistry_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, Temp_bool_Variable_3) == 0x000088, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, CallFunc_GetAssetByObjectPath_ReturnValue) == 0x000090, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::CallFunc_GetAssetByObjectPath_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, CallFunc_GetAsset_ReturnValue) == 0x0000F0, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::CallFunc_GetAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x0000F8, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, K2Node_Event_IsDesignTime) == 0x000120, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, CallFunc_BooleanAND_ReturnValue_2) == 0x000121, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, K2Node_Select_Default) == 0x000122, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x000123, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, K2Node_CustomEvent_Data_1) == 0x000128, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::K2Node_CustomEvent_Data_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, K2Node_Select_Default_1) == 0x000130, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, K2Node_CustomEvent_Data) == 0x000138, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, K2Node_CustomEvent_bTrying) == 0x000140, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::K2Node_CustomEvent_bTrying' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, CallFunc_GetScrollOffset_ReturnValue) == 0x000144, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::CallFunc_GetScrollOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, K2Node_CustomEvent_DetailType) == 0x000148, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::K2Node_CustomEvent_DetailType' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, K2Node_CustomEvent_bIsItemBox) == 0x000149, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::K2Node_CustomEvent_bIsItemBox' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x00014A, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, K2Node_CreateDelegate_OutputDelegate) == 0x00014C, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, K2Node_Select_Default_2) == 0x00015C, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, K2Node_Select_Default_3) == 0x00015D, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList, K2Node_MakeArray_Array) == 0x000160, "Member 'UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList::K2Node_MakeArray_Array' has a wrong offset!");

// Function UMG_ProductItemList.UMG_ProductItemList_C.LayoutCheck
// 0x0002 (0x0002 - 0x0000)
struct UMG_ProductItemList_C_LayoutCheck final
{
public:
	E_SBProductDetailType                         Param_DetailType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_bIsItemBox;                                  // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductItemList_C_LayoutCheck) == 0x000001, "Wrong alignment on UMG_ProductItemList_C_LayoutCheck");
static_assert(sizeof(UMG_ProductItemList_C_LayoutCheck) == 0x000002, "Wrong size on UMG_ProductItemList_C_LayoutCheck");
static_assert(offsetof(UMG_ProductItemList_C_LayoutCheck, Param_DetailType) == 0x000000, "Member 'UMG_ProductItemList_C_LayoutCheck::Param_DetailType' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_LayoutCheck, Param_bIsItemBox) == 0x000001, "Member 'UMG_ProductItemList_C_LayoutCheck::Param_bIsItemBox' has a wrong offset!");

// Function UMG_ProductItemList.UMG_ProductItemList_C.SetSelectedItemData
// 0x0010 (0x0010 - 0x0000)
struct UMG_ProductItemList_C_SetSelectedItemData final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTrying;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductItemList_C_SetSelectedItemData) == 0x000008, "Wrong alignment on UMG_ProductItemList_C_SetSelectedItemData");
static_assert(sizeof(UMG_ProductItemList_C_SetSelectedItemData) == 0x000010, "Wrong size on UMG_ProductItemList_C_SetSelectedItemData");
static_assert(offsetof(UMG_ProductItemList_C_SetSelectedItemData, Data) == 0x000000, "Member 'UMG_ProductItemList_C_SetSelectedItemData::Data' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetSelectedItemData, bTrying) == 0x000008, "Member 'UMG_ProductItemList_C_SetSelectedItemData::bTrying' has a wrong offset!");

// Function UMG_ProductItemList.UMG_ProductItemList_C.OnItemClicked_Event
// 0x0008 (0x0008 - 0x0000)
struct UMG_ProductItemList_C_OnItemClicked_Event final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductItemList_C_OnItemClicked_Event) == 0x000008, "Wrong alignment on UMG_ProductItemList_C_OnItemClicked_Event");
static_assert(sizeof(UMG_ProductItemList_C_OnItemClicked_Event) == 0x000008, "Wrong size on UMG_ProductItemList_C_OnItemClicked_Event");
static_assert(offsetof(UMG_ProductItemList_C_OnItemClicked_Event, Data) == 0x000000, "Member 'UMG_ProductItemList_C_OnItemClicked_Event::Data' has a wrong offset!");

// Function UMG_ProductItemList.UMG_ProductItemList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UMG_ProductItemList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductItemList_C_PreConstruct) == 0x000001, "Wrong alignment on UMG_ProductItemList_C_PreConstruct");
static_assert(sizeof(UMG_ProductItemList_C_PreConstruct) == 0x000001, "Wrong size on UMG_ProductItemList_C_PreConstruct");
static_assert(offsetof(UMG_ProductItemList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UMG_ProductItemList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UMG_ProductItemList.UMG_ProductItemList_C.OnLoad_Icon
// 0x0008 (0x0008 - 0x0000)
struct UMG_ProductItemList_C_OnLoad_Icon final
{
public:
	class FName                                   URL;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductItemList_C_OnLoad_Icon) == 0x000004, "Wrong alignment on UMG_ProductItemList_C_OnLoad_Icon");
static_assert(sizeof(UMG_ProductItemList_C_OnLoad_Icon) == 0x000008, "Wrong size on UMG_ProductItemList_C_OnLoad_Icon");
static_assert(offsetof(UMG_ProductItemList_C_OnLoad_Icon, URL) == 0x000000, "Member 'UMG_ProductItemList_C_OnLoad_Icon::URL' has a wrong offset!");

// Function UMG_ProductItemList.UMG_ProductItemList_C.OnLoaded_2F958F004AA9A8D66934A2BF4E23E3D9
// 0x0008 (0x0008 - 0x0000)
struct UMG_ProductItemList_C_OnLoaded_2F958F004AA9A8D66934A2BF4E23E3D9 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductItemList_C_OnLoaded_2F958F004AA9A8D66934A2BF4E23E3D9) == 0x000008, "Wrong alignment on UMG_ProductItemList_C_OnLoaded_2F958F004AA9A8D66934A2BF4E23E3D9");
static_assert(sizeof(UMG_ProductItemList_C_OnLoaded_2F958F004AA9A8D66934A2BF4E23E3D9) == 0x000008, "Wrong size on UMG_ProductItemList_C_OnLoaded_2F958F004AA9A8D66934A2BF4E23E3D9");
static_assert(offsetof(UMG_ProductItemList_C_OnLoaded_2F958F004AA9A8D66934A2BF4E23E3D9, Loaded) == 0x000000, "Member 'UMG_ProductItemList_C_OnLoaded_2F958F004AA9A8D66934A2BF4E23E3D9::Loaded' has a wrong offset!");

// Function UMG_ProductItemList.UMG_ProductItemList_C.SetDetailType
// 0x00D8 (0x00D8 - 0x0000)
struct UMG_ProductItemList_C_SetDetailType final
{
public:
	E_SBProductDetailType                         InDetailType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_8;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9536[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         Temp_float_Variable_1;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_9;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_10;                             // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_8;        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_9;        // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_10;       // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_5;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_11;       // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_12;       // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_11;                             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_13;       // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_14;       // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_15;       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_6;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_7;                  // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_8;                  // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9537[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_1;                           // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9538[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9539[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                CallFunc_GetOffsets_ReturnValue;                   // 0x0054(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0064(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_953A[0x2];                                     // 0x0076(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default_3;                           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_4;                           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_5;                           // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_6;                           // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_7;                           // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_12;                             // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_953B[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default_8;                           // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_9;                           // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_953C[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default_10;                          // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_11;                          // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_953D[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default_12;                          // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductItemList_C_SetDetailType) == 0x000008, "Wrong alignment on UMG_ProductItemList_C_SetDetailType");
static_assert(sizeof(UMG_ProductItemList_C_SetDetailType) == 0x0000D8, "Wrong size on UMG_ProductItemList_C_SetDetailType");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, InDetailType) == 0x000000, "Member 'UMG_ProductItemList_C_SetDetailType::InDetailType' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, Temp_bool_Variable) == 0x000001, "Member 'UMG_ProductItemList_C_SetDetailType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, Temp_bool_Variable_1) == 0x000002, "Member 'UMG_ProductItemList_C_SetDetailType::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, Temp_bool_Variable_2) == 0x000003, "Member 'UMG_ProductItemList_C_SetDetailType::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, Temp_bool_Variable_3) == 0x000004, "Member 'UMG_ProductItemList_C_SetDetailType::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, Temp_bool_Variable_4) == 0x000005, "Member 'UMG_ProductItemList_C_SetDetailType::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, Temp_bool_Variable_5) == 0x000006, "Member 'UMG_ProductItemList_C_SetDetailType::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, Temp_bool_Variable_6) == 0x000007, "Member 'UMG_ProductItemList_C_SetDetailType::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, Temp_bool_Variable_7) == 0x000008, "Member 'UMG_ProductItemList_C_SetDetailType::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000009, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00000A, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00000B, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_BooleanOR_ReturnValue) == 0x00000C, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, Temp_bool_Variable_8) == 0x00000D, "Member 'UMG_ProductItemList_C_SetDetailType::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_BooleanOR_ReturnValue_1) == 0x00000E, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, Temp_float_Variable) == 0x000010, "Member 'UMG_ProductItemList_C_SetDetailType::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000014, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_Not_PreBool_ReturnValue) == 0x000015, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000016, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_BooleanAND_ReturnValue) == 0x000017, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, Temp_float_Variable_1) == 0x000018, "Member 'UMG_ProductItemList_C_SetDetailType::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_Not_PreBool_ReturnValue_1) == 0x00001C, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_MakeLiteralByte_ReturnValue) == 0x00001D, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_Not_PreBool_ReturnValue_2) == 0x00001E, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_BooleanAND_ReturnValue_1) == 0x00001F, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x000020, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x000021, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x000022, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_BooleanOR_ReturnValue_2) == 0x000023, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, Temp_bool_Variable_9) == 0x000024, "Member 'UMG_ProductItemList_C_SetDetailType::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_BooleanOR_ReturnValue_3) == 0x000025, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, Temp_bool_Variable_10) == 0x000026, "Member 'UMG_ProductItemList_C_SetDetailType::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000027, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_8) == 0x000028, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_9) == 0x000029, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_10) == 0x00002A, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_BooleanOR_ReturnValue_4) == 0x00002B, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_BooleanOR_ReturnValue_5) == 0x00002C, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_BooleanOR_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_11) == 0x00002D, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x00002E, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_Not_PreBool_ReturnValue_3) == 0x00002F, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_BooleanAND_ReturnValue_2) == 0x000030, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_12) == 0x000031, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_Not_PreBool_ReturnValue_4) == 0x000032, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_BooleanAND_ReturnValue_3) == 0x000033, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, Temp_bool_Variable_11) == 0x000034, "Member 'UMG_ProductItemList_C_SetDetailType::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, K2Node_Select_Default) == 0x000035, "Member 'UMG_ProductItemList_C_SetDetailType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_13) == 0x000036, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_14) == 0x000037, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_15) == 0x000038, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_BooleanOR_ReturnValue_6) == 0x000039, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_BooleanOR_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_BooleanOR_ReturnValue_7) == 0x00003A, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_BooleanOR_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_BooleanOR_ReturnValue_8) == 0x00003B, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_BooleanOR_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_BooleanAND_ReturnValue_4) == 0x00003C, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_Not_PreBool_ReturnValue_5) == 0x00003D, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, K2Node_Select_Default_1) == 0x000040, "Member 'UMG_ProductItemList_C_SetDetailType::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000044, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000048, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, K2Node_Select_Default_2) == 0x000050, "Member 'UMG_ProductItemList_C_SetDetailType::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_GetOffsets_ReturnValue) == 0x000054, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_GetOffsets_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, K2Node_MakeStruct_Margin) == 0x000064, "Member 'UMG_ProductItemList_C_SetDetailType::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x000074, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x000075, "Member 'UMG_ProductItemList_C_SetDetailType::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, K2Node_Select_Default_3) == 0x000078, "Member 'UMG_ProductItemList_C_SetDetailType::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, K2Node_Select_Default_4) == 0x000080, "Member 'UMG_ProductItemList_C_SetDetailType::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, K2Node_Select_Default_5) == 0x000088, "Member 'UMG_ProductItemList_C_SetDetailType::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, K2Node_Select_Default_6) == 0x000090, "Member 'UMG_ProductItemList_C_SetDetailType::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, K2Node_Select_Default_7) == 0x000098, "Member 'UMG_ProductItemList_C_SetDetailType::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, Temp_bool_Variable_12) == 0x0000A0, "Member 'UMG_ProductItemList_C_SetDetailType::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, K2Node_Select_Default_8) == 0x0000A8, "Member 'UMG_ProductItemList_C_SetDetailType::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, K2Node_Select_Default_9) == 0x0000B0, "Member 'UMG_ProductItemList_C_SetDetailType::K2Node_Select_Default_9' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, K2Node_Select_Default_10) == 0x0000B8, "Member 'UMG_ProductItemList_C_SetDetailType::K2Node_Select_Default_10' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, K2Node_Select_Default_11) == 0x0000C0, "Member 'UMG_ProductItemList_C_SetDetailType::K2Node_Select_Default_11' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, K2Node_SwitchEnum_CmpSuccess) == 0x0000C8, "Member 'UMG_ProductItemList_C_SetDetailType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetDetailType, K2Node_Select_Default_12) == 0x0000D0, "Member 'UMG_ProductItemList_C_SetDetailType::K2Node_Select_Default_12' has a wrong offset!");

// Function UMG_ProductItemList.UMG_ProductItemList_C.SetProductData
// 0x00C8 (0x00C8 - 0x0000)
struct UMG_ProductItemList_C_SetProductData final
{
public:
	class UBP_SBProductData_C*                    Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTryingFirstItem_ReturnValue;            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSelectFirstItem_ReturnValue;            // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_953E[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHideList_ReturnValue;                   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSoldOut_ReturnValue;                    // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_953F[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_GetIconItemData_self_CastInput;           // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_SBProductItemData_C*                CallFunc_GetIconItemData_ItemData;                 // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9540[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetPurchasePeriod_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetPurchaseRestrictionCountText_ReturnValue; // 0x0048(0x0018)()
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_IsItemBox_self_CastInput;                 // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsItemBox_bReturnValue;                   // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasPurchaseRestriction_ReturnValue;       // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasPurchasePeriod_ReturnValue;            // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9541[0x5];                                     // 0x0073(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_GetDetailType_self_CastInput;             // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_SBProductDetailType                         CallFunc_GetDetailType_DetailType;                 // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x008F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetProductData_bValid;                    // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9542[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9543[0x2];                                     // 0x00A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetEmptyText_ReturnValue;                 // 0x00A8(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductItemList_C_SetProductData) == 0x000008, "Wrong alignment on UMG_ProductItemList_C_SetProductData");
static_assert(sizeof(UMG_ProductItemList_C_SetProductData) == 0x0000C8, "Wrong size on UMG_ProductItemList_C_SetProductData");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, Data) == 0x000000, "Member 'UMG_ProductItemList_C_SetProductData::Data' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, Temp_bool_Variable) == 0x000008, "Member 'UMG_ProductItemList_C_SetProductData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_IsTryingFirstItem_ReturnValue) == 0x000009, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_IsTryingFirstItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_IsSelectFirstItem_ReturnValue) == 0x00000A, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_IsSelectFirstItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_Array_Get_Item) == 0x000010, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_IsHideList_ReturnValue) == 0x000019, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_IsHideList_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_IsSoldOut_ReturnValue) == 0x00001B, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_IsSoldOut_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_GetIconItemData_self_CastInput) == 0x000020, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_GetIconItemData_self_CastInput' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_GetIconItemData_ItemData) == 0x000030, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_GetIconItemData_ItemData' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_Not_PreBool_ReturnValue_1) == 0x000038, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_GetPurchasePeriod_ReturnValue) == 0x000040, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_GetPurchasePeriod_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_GetPurchaseRestrictionCountText_ReturnValue) == 0x000048, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_GetPurchaseRestrictionCountText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_IsItemBox_self_CastInput) == 0x000060, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_IsItemBox_self_CastInput' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_IsItemBox_bReturnValue) == 0x000070, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_IsItemBox_bReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_HasPurchaseRestriction_ReturnValue) == 0x000071, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_HasPurchaseRestriction_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_HasPurchasePeriod_ReturnValue) == 0x000072, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_HasPurchasePeriod_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_GetDetailType_self_CastInput) == 0x000078, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_GetDetailType_self_CastInput' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_GetDetailType_DetailType) == 0x000088, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_GetDetailType_DetailType' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_BooleanOR_ReturnValue) == 0x000089, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_MakeLiteralByte_ReturnValue) == 0x00008A, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00008B, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x00008C, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, Temp_bool_Variable_1) == 0x00008D, "Member 'UMG_ProductItemList_C_SetProductData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00008E, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, K2Node_Select_Default) == 0x00008F, "Member 'UMG_ProductItemList_C_SetProductData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x000090, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, Temp_bool_Variable_2) == 0x000091, "Member 'UMG_ProductItemList_C_SetProductData::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, Temp_bool_Variable_3) == 0x000092, "Member 'UMG_ProductItemList_C_SetProductData::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, K2Node_Select_Default_1) == 0x000093, "Member 'UMG_ProductItemList_C_SetProductData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_SetProductData_bValid) == 0x000094, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_SetProductData_bValid' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_PlayAnimation_ReturnValue) == 0x000098, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x0000A0, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x0000A1, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x0000A2, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, K2Node_Select_Default_2) == 0x0000A3, "Member 'UMG_ProductItemList_C_SetProductData::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, K2Node_Select_Default_3) == 0x0000A4, "Member 'UMG_ProductItemList_C_SetProductData::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_SetDateTime_ReturnValue) == 0x0000A5, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_GetEmptyText_ReturnValue) == 0x0000A8, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_GetEmptyText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetProductData, CallFunc_NotEqual_TextText_ReturnValue) == 0x0000C0, "Member 'UMG_ProductItemList_C_SetProductData::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");

// Function UMG_ProductItemList.UMG_ProductItemList_C.SetData
// 0x0078 (0x0078 - 0x0000)
struct UMG_ProductItemList_C_SetData final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_IsCostumeSet_self_CastInput;              // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCostumeSet_bReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9544[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSetItem_ReturnValue;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9545[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_GetIconItemData_self_CastInput;           // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_SBProductItemData_C*                CallFunc_GetIconItemData_ItemData;                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_IsItemBox_self_CastInput;                 // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsItemBox_bReturnValue;                   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetProductData_bValid;                    // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9546[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductItemList_C_SetData) == 0x000008, "Wrong alignment on UMG_ProductItemList_C_SetData");
static_assert(sizeof(UMG_ProductItemList_C_SetData) == 0x000078, "Wrong size on UMG_ProductItemList_C_SetData");
static_assert(offsetof(UMG_ProductItemList_C_SetData, Data) == 0x000000, "Member 'UMG_ProductItemList_C_SetData::Data' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetData, CallFunc_IsCostumeSet_self_CastInput) == 0x000008, "Member 'UMG_ProductItemList_C_SetData::CallFunc_IsCostumeSet_self_CastInput' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetData, CallFunc_IsCostumeSet_bReturnValue) == 0x000018, "Member 'UMG_ProductItemList_C_SetData::CallFunc_IsCostumeSet_bReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetData, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'UMG_ProductItemList_C_SetData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetData, CallFunc_Array_Get_Item) == 0x000020, "Member 'UMG_ProductItemList_C_SetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetData, CallFunc_IsSetItem_ReturnValue) == 0x000028, "Member 'UMG_ProductItemList_C_SetData::CallFunc_IsSetItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetData, CallFunc_GetIconItemData_self_CastInput) == 0x000030, "Member 'UMG_ProductItemList_C_SetData::CallFunc_GetIconItemData_self_CastInput' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetData, CallFunc_GetIconItemData_ItemData) == 0x000040, "Member 'UMG_ProductItemList_C_SetData::CallFunc_GetIconItemData_ItemData' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetData, CallFunc_IsItemBox_self_CastInput) == 0x000048, "Member 'UMG_ProductItemList_C_SetData::CallFunc_IsItemBox_self_CastInput' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetData, CallFunc_IsItemBox_bReturnValue) == 0x000058, "Member 'UMG_ProductItemList_C_SetData::CallFunc_IsItemBox_bReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetData, Temp_bool_Variable) == 0x000059, "Member 'UMG_ProductItemList_C_SetData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetData, Temp_bool_Variable_1) == 0x00005A, "Member 'UMG_ProductItemList_C_SetData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetData, CallFunc_MakeLiteralByte_ReturnValue) == 0x00005B, "Member 'UMG_ProductItemList_C_SetData::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetData, CallFunc_SetProductData_bValid) == 0x00005C, "Member 'UMG_ProductItemList_C_SetData::CallFunc_SetProductData_bValid' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetData, CallFunc_PlayAnimation_ReturnValue) == 0x000060, "Member 'UMG_ProductItemList_C_SetData::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetData, CallFunc_PlayAnimation_ReturnValue_1) == 0x000068, "Member 'UMG_ProductItemList_C_SetData::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetData, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000070, "Member 'UMG_ProductItemList_C_SetData::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetData, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000071, "Member 'UMG_ProductItemList_C_SetData::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetData, K2Node_Select_Default) == 0x000072, "Member 'UMG_ProductItemList_C_SetData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetData, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000073, "Member 'UMG_ProductItemList_C_SetData::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_SetData, K2Node_Select_Default_1) == 0x000074, "Member 'UMG_ProductItemList_C_SetData::K2Node_Select_Default_1' has a wrong offset!");

// Function UMG_ProductItemList.UMG_ProductItemList_C.CreateItemList_Internal
// 0x0120 (0x0120 - 0x0000)
struct UMG_ProductItemList_C_CreateItemList_Internal final
{
public:
	TArray<class UBP_SBProductItemData_C*>        ItemDataList;                                      // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UGashaMenu_ProductListRateLine2_C*      WorkGashaFrame;                                    // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UsedGashaFrameIndex;                               // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPrevConfirm;                                     // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9547[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         UsedItemIndex;                                     // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9548[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFlatShop_ProductItem_DescItem_C*       WorkItem;                                          // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9549[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_954A[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_954B[0x2];                                     // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_954C[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGashaMenu_ProductListRateLine2_C*      CallFunc_Array_Get_Item_1;                         // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_954D[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGashaMenu_ProductListRateLine2_C*      CallFunc_Create_ReturnValue;                       // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_954E[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGashaMenu_ProductListRateLine2_C*      CallFunc_Array_Get_Item_2;                         // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_954F[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9550[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_Array_Get_Item_3;                         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9551[0x2];                                     // 0x00C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9552[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFlatShop_ProductItem_DescItem_C*       CallFunc_Array_Get_Item_4;                         // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9553[0x3];                                     // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFlatShop_ProductItem_DescItem_C*       CallFunc_Array_Get_Item_5;                         // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9554[0x1];                                     // 0x00EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UBP_SBProductItemData_C* Data)> K2Node_CreateDelegate_OutputDelegate;              // 0x00EC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_9555[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlatShop_ProductItem_DescItem_C*       CallFunc_Create_ReturnValue_1;                     // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductItemList_C_CreateItemList_Internal) == 0x000008, "Wrong alignment on UMG_ProductItemList_C_CreateItemList_Internal");
static_assert(sizeof(UMG_ProductItemList_C_CreateItemList_Internal) == 0x000120, "Wrong size on UMG_ProductItemList_C_CreateItemList_Internal");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, ItemDataList) == 0x000000, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::ItemDataList' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, WorkGashaFrame) == 0x000010, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::WorkGashaFrame' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, UsedGashaFrameIndex) == 0x000018, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::UsedGashaFrameIndex' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, IsPrevConfirm) == 0x00001C, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::IsPrevConfirm' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, UsedItemIndex) == 0x000020, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::UsedItemIndex' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, WorkItem) == 0x000028, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::WorkItem' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Array_LastIndex_ReturnValue) == 0x000038, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Add_IntInt_ReturnValue_1) == 0x00003C, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Add_IntInt_ReturnValue_2) == 0x000044, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_MakeLiteralByte_ReturnValue) == 0x000048, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, Temp_int_Loop_Counter_Variable_1) == 0x00004C, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Add_IntInt_ReturnValue_3) == 0x000050, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, Temp_int_Array_Index_Variable) == 0x000054, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, Temp_bool_Variable) == 0x000058, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, Temp_int_Variable) == 0x00005C, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Array_Get_Item) == 0x000060, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000069, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Add_IntInt_ReturnValue_4) == 0x00006C, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, Temp_int_Array_Index_Variable_1) == 0x000070, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000074, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Array_Get_Item_1) == 0x000078, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Array_Length_ReturnValue_1) == 0x000080, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Create_ReturnValue) == 0x000088, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Less_IntInt_ReturnValue_1) == 0x000090, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Array_Get_Item_2) == 0x000098, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Array_Add_ReturnValue) == 0x0000A0, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0000A4, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Add_IntInt_ReturnValue_5) == 0x0000A8, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Array_Get_Item_3) == 0x0000B0, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_AddChild_ReturnValue) == 0x0000B8, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Array_Length_ReturnValue_2) == 0x0000C0, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000C4, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x0000C5, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Add_IntInt_ReturnValue_6) == 0x0000C8, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000CC, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Array_Get_Item_4) == 0x0000D0, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Array_Length_ReturnValue_3) == 0x0000D8, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Less_IntInt_ReturnValue_3) == 0x0000DC, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Array_Get_Item_5) == 0x0000E0, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Array_IsValidIndex_ReturnValue_1) == 0x0000E8, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Array_IsValidIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000E9, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, K2Node_Select_Default) == 0x0000EA, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, K2Node_CreateDelegate_OutputDelegate) == 0x0000EC, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_GetOwningPlayer_ReturnValue) == 0x000100, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Create_ReturnValue_1) == 0x000108, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_AddChild_ReturnValue_1) == 0x000110, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_CreateItemList_Internal, CallFunc_Array_Add_ReturnValue_1) == 0x000118, "Member 'UMG_ProductItemList_C_CreateItemList_Internal::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

// Function UMG_ProductItemList.UMG_ProductItemList_C.UpdateItemBoxIcon
// 0x0098 (0x0098 - 0x0000)
struct UMG_ProductItemList_C_UpdateItemBoxIcon final
{
public:
	EUMGSequencePlayMode                          AnimPlayMode;                                      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9556[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PrevItemBoxDepthIndex;                             // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ItemBoxAnim;                                       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  ItemBoxData;                                       // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bValidData;                                        // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9557[0x1];                                     // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9558[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9559[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_955A[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemBoxDepthIndex_Index;               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemBoxDepthIndex_Index_1;             // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_955B[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_GetIconItemData_ItemData;                 // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             CallFunc_GetRewardType_RewardType;                 // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_955C[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemIndex_ItemIndex;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemBoxDepthIndex_Index_2;             // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShopMenuDetails_ItemIconL_C*           CallFunc_Array_Get_Item;                           // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsItemBox_bReturnValue;                   // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetParentData_bIsValid;                   // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_955D[0x5];                                     // 0x007B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_GetParentData_ParentData;                 // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsItemBox_bReturnValue_1;                 // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductItemList_C_UpdateItemBoxIcon) == 0x000008, "Wrong alignment on UMG_ProductItemList_C_UpdateItemBoxIcon");
static_assert(sizeof(UMG_ProductItemList_C_UpdateItemBoxIcon) == 0x000098, "Wrong size on UMG_ProductItemList_C_UpdateItemBoxIcon");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, AnimPlayMode) == 0x000000, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::AnimPlayMode' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, PrevItemBoxDepthIndex) == 0x000004, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::PrevItemBoxDepthIndex' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, ItemBoxAnim) == 0x000008, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::ItemBoxAnim' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, ItemBoxData) == 0x000010, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::ItemBoxData' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, bValidData) == 0x000020, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::bValidData' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, Temp_byte_Variable) == 0x000021, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, Temp_byte_Variable_1) == 0x000022, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, Temp_int_Variable) == 0x000024, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, Temp_bool_Variable) == 0x000030, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000038, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, CallFunc_GetItemBoxDepthIndex_Index) == 0x00004C, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::CallFunc_GetItemBoxDepthIndex_Index' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, CallFunc_GetItemBoxDepthIndex_Index_1) == 0x000050, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::CallFunc_GetItemBoxDepthIndex_Index_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, CallFunc_Greater_IntInt_ReturnValue) == 0x000054, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, CallFunc_GetIconItemData_ItemData) == 0x000058, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::CallFunc_GetIconItemData_ItemData' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, CallFunc_GetRewardType_RewardType) == 0x000060, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::CallFunc_GetRewardType_RewardType' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, K2Node_Select_Default) == 0x000061, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, CallFunc_GetItemIndex_ItemIndex) == 0x000064, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::CallFunc_GetItemIndex_ItemIndex' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, CallFunc_GetItemBoxDepthIndex_Index_2) == 0x000068, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::CallFunc_GetItemBoxDepthIndex_Index_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, CallFunc_Max_ReturnValue) == 0x00006C, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, CallFunc_Array_Get_Item) == 0x000070, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, K2Node_SwitchInteger_CmpSuccess) == 0x000078, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, CallFunc_IsItemBox_bReturnValue) == 0x000079, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::CallFunc_IsItemBox_bReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, CallFunc_GetParentData_bIsValid) == 0x00007A, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::CallFunc_GetParentData_bIsValid' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, CallFunc_GetParentData_ParentData) == 0x000080, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::CallFunc_GetParentData_ParentData' has a wrong offset!");
static_assert(offsetof(UMG_ProductItemList_C_UpdateItemBoxIcon, CallFunc_IsItemBox_bReturnValue_1) == 0x000090, "Member 'UMG_ProductItemList_C_UpdateItemBoxIcon::CallFunc_IsItemBox_bReturnValue_1' has a wrong offset!");

}

