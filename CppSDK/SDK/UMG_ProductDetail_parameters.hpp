#pragma once

 

// Package: UMG_ProductDetail

#include "Basic.hpp"

#include "E_SBDetailsZoomIn_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UMG_ProductDetail.UMG_ProductDetail_C.OnShowDetails__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_ProductDetail_C_OnShowDetails__DelegateSignature final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductDetail_C_OnShowDetails__DelegateSignature) == 0x000001, "Wrong alignment on UMG_ProductDetail_C_OnShowDetails__DelegateSignature");
static_assert(sizeof(UMG_ProductDetail_C_OnShowDetails__DelegateSignature) == 0x000001, "Wrong size on UMG_ProductDetail_C_OnShowDetails__DelegateSignature");
static_assert(offsetof(UMG_ProductDetail_C_OnShowDetails__DelegateSignature, bShow) == 0x000000, "Member 'UMG_ProductDetail_C_OnShowDetails__DelegateSignature::bShow' has a wrong offset!");

// Function UMG_ProductDetail.UMG_ProductDetail_C.OnClickZoomIn__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_ProductDetail_C_OnClickZoomIn__DelegateSignature final
{
public:
	E_SBDetailsZoomIn                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductDetail_C_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong alignment on UMG_ProductDetail_C_OnClickZoomIn__DelegateSignature");
static_assert(sizeof(UMG_ProductDetail_C_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong size on UMG_ProductDetail_C_OnClickZoomIn__DelegateSignature");
static_assert(offsetof(UMG_ProductDetail_C_OnClickZoomIn__DelegateSignature, Type) == 0x000000, "Member 'UMG_ProductDetail_C_OnClickZoomIn__DelegateSignature::Type' has a wrong offset!");

// Function UMG_ProductDetail.UMG_ProductDetail_C.OnClickItemBoxDetail__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_ProductDetail_C_OnClickItemBoxDetail__DelegateSignature final
{
public:
	class UBP_SBProductItemData_C*                Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductDetail_C_OnClickItemBoxDetail__DelegateSignature) == 0x000008, "Wrong alignment on UMG_ProductDetail_C_OnClickItemBoxDetail__DelegateSignature");
static_assert(sizeof(UMG_ProductDetail_C_OnClickItemBoxDetail__DelegateSignature) == 0x000008, "Wrong size on UMG_ProductDetail_C_OnClickItemBoxDetail__DelegateSignature");
static_assert(offsetof(UMG_ProductDetail_C_OnClickItemBoxDetail__DelegateSignature, Param_Data) == 0x000000, "Member 'UMG_ProductDetail_C_OnClickItemBoxDetail__DelegateSignature::Param_Data' has a wrong offset!");

// Function UMG_ProductDetail.UMG_ProductDetail_C.ExecuteUbergraph_UMG_ProductDetail
// 0x0070 (0x0070 - 0x0000)
struct UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_80F5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_ItemIndex;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bTrying;                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bShow;                  // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80F6[0x1];                                     // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_Map_Find_Value;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_SBDetailsZoomIn                             K2Node_ComponentBoundEvent_Type;                   // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80F7[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_Studio_C*      K2Node_ComponentBoundEvent_PlayerCapture;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bZoomIn;                        // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bOnlyDisplay;                   // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bAnimation_1;                   // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80F8[0x1];                                     // 0x004B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_GetDirectionalLightRotation_ReturnValue;  // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_CustomEvent_Data;                           // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bAnimation;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail) == 0x000008, "Wrong alignment on UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail");
static_assert(sizeof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail) == 0x000070, "Wrong size on UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail");
static_assert(offsetof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail, EntryPoint) == 0x000000, "Member 'UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail, CallFunc_PlayAnimation_ReturnValue_2) == 0x000018, "Member 'UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail, CallFunc_PlayAnimation_ReturnValue_3) == 0x000020, "Member 'UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail, K2Node_ComponentBoundEvent_ItemIndex) == 0x000028, "Member 'UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail::K2Node_ComponentBoundEvent_ItemIndex' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail, K2Node_ComponentBoundEvent_bTrying) == 0x00002C, "Member 'UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail::K2Node_ComponentBoundEvent_bTrying' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail, K2Node_ComponentBoundEvent_bShow) == 0x00002D, "Member 'UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail::K2Node_ComponentBoundEvent_bShow' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail, CallFunc_Map_Remove_ReturnValue) == 0x00002E, "Member 'UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail, CallFunc_Map_Find_Value) == 0x000030, "Member 'UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail, CallFunc_Map_Find_ReturnValue) == 0x000038, "Member 'UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail, K2Node_ComponentBoundEvent_Type) == 0x000039, "Member 'UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail::K2Node_ComponentBoundEvent_Type' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail, CallFunc_IsValid_ReturnValue) == 0x00003A, "Member 'UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail, K2Node_Event_IsDesignTime) == 0x00003B, "Member 'UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail, K2Node_ComponentBoundEvent_PlayerCapture) == 0x000040, "Member 'UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail::K2Node_ComponentBoundEvent_PlayerCapture' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail, K2Node_CustomEvent_bZoomIn) == 0x000048, "Member 'UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail::K2Node_CustomEvent_bZoomIn' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail, K2Node_CustomEvent_bOnlyDisplay) == 0x000049, "Member 'UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail::K2Node_CustomEvent_bOnlyDisplay' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail, K2Node_CustomEvent_bAnimation_1) == 0x00004A, "Member 'UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail::K2Node_CustomEvent_bAnimation_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail, CallFunc_GetDirectionalLightRotation_ReturnValue) == 0x00004C, "Member 'UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail::CallFunc_GetDirectionalLightRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail, K2Node_CustomEvent_Data) == 0x000058, "Member 'UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail, K2Node_CustomEvent_bAnimation) == 0x000068, "Member 'UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail::K2Node_CustomEvent_bAnimation' has a wrong offset!");

// Function UMG_ProductDetail.UMG_ProductDetail_C.CloseItemDetail
// 0x0001 (0x0001 - 0x0000)
struct UMG_ProductDetail_C_CloseItemDetail final
{
public:
	bool                                          bAnimation;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductDetail_C_CloseItemDetail) == 0x000001, "Wrong alignment on UMG_ProductDetail_C_CloseItemDetail");
static_assert(sizeof(UMG_ProductDetail_C_CloseItemDetail) == 0x000001, "Wrong size on UMG_ProductDetail_C_CloseItemDetail");
static_assert(offsetof(UMG_ProductDetail_C_CloseItemDetail, bAnimation) == 0x000000, "Member 'UMG_ProductDetail_C_CloseItemDetail::bAnimation' has a wrong offset!");

// Function UMG_ProductDetail.UMG_ProductDetail_C.SetData
// 0x0010 (0x0010 - 0x0000)
struct UMG_ProductDetail_C_SetData final
{
public:
	TScriptInterface<class IBPI_SBProductData_C>  Param_Data;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductDetail_C_SetData) == 0x000008, "Wrong alignment on UMG_ProductDetail_C_SetData");
static_assert(sizeof(UMG_ProductDetail_C_SetData) == 0x000010, "Wrong size on UMG_ProductDetail_C_SetData");
static_assert(offsetof(UMG_ProductDetail_C_SetData, Param_Data) == 0x000000, "Member 'UMG_ProductDetail_C_SetData::Param_Data' has a wrong offset!");

// Function UMG_ProductDetail.UMG_ProductDetail_C.SetZoomFlag
// 0x0003 (0x0003 - 0x0000)
struct UMG_ProductDetail_C_SetZoomFlag final
{
public:
	bool                                          Param_bZoomIn;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bOnlyDisplay;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bAnimation;                                        // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductDetail_C_SetZoomFlag) == 0x000001, "Wrong alignment on UMG_ProductDetail_C_SetZoomFlag");
static_assert(sizeof(UMG_ProductDetail_C_SetZoomFlag) == 0x000003, "Wrong size on UMG_ProductDetail_C_SetZoomFlag");
static_assert(offsetof(UMG_ProductDetail_C_SetZoomFlag, Param_bZoomIn) == 0x000000, "Member 'UMG_ProductDetail_C_SetZoomFlag::Param_bZoomIn' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetZoomFlag, bOnlyDisplay) == 0x000001, "Member 'UMG_ProductDetail_C_SetZoomFlag::bOnlyDisplay' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetZoomFlag, bAnimation) == 0x000002, "Member 'UMG_ProductDetail_C_SetZoomFlag::bAnimation' has a wrong offset!");

// Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnCreatePlayerCapture__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnCreatePlayerCapture__DelegateSignature final
{
public:
	class ABP_PlayerSceneCapture2D_Studio_C*      PlayerCapture;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnCreatePlayerCapture__DelegateSignature) == 0x000008, "Wrong alignment on UMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnCreatePlayerCapture__DelegateSignature");
static_assert(sizeof(UMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnCreatePlayerCapture__DelegateSignature) == 0x000008, "Wrong size on UMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnCreatePlayerCapture__DelegateSignature");
static_assert(offsetof(UMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnCreatePlayerCapture__DelegateSignature, PlayerCapture) == 0x000000, "Member 'UMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnCreatePlayerCapture__DelegateSignature::PlayerCapture' has a wrong offset!");

// Function UMG_ProductDetail.UMG_ProductDetail_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UMG_ProductDetail_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductDetail_C_PreConstruct) == 0x000001, "Wrong alignment on UMG_ProductDetail_C_PreConstruct");
static_assert(sizeof(UMG_ProductDetail_C_PreConstruct) == 0x000001, "Wrong size on UMG_ProductDetail_C_PreConstruct");
static_assert(offsetof(UMG_ProductDetail_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UMG_ProductDetail_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_ProductDetail_C_BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature final
{
public:
	E_SBDetailsZoomIn                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductDetail_C_BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong alignment on UMG_ProductDetail_C_BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature");
static_assert(sizeof(UMG_ProductDetail_C_BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong size on UMG_ProductDetail_C_BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature");
static_assert(offsetof(UMG_ProductDetail_C_BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature, Type) == 0x000000, "Member 'UMG_ProductDetail_C_BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature::Type' has a wrong offset!");

// Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__ExchangeShop_2_K2Node_ComponentBoundEvent_3_OnShow__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_ProductDetail_C_BndEvt__ExchangeShop_2_K2Node_ComponentBoundEvent_3_OnShow__DelegateSignature final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductDetail_C_BndEvt__ExchangeShop_2_K2Node_ComponentBoundEvent_3_OnShow__DelegateSignature) == 0x000001, "Wrong alignment on UMG_ProductDetail_C_BndEvt__ExchangeShop_2_K2Node_ComponentBoundEvent_3_OnShow__DelegateSignature");
static_assert(sizeof(UMG_ProductDetail_C_BndEvt__ExchangeShop_2_K2Node_ComponentBoundEvent_3_OnShow__DelegateSignature) == 0x000001, "Wrong size on UMG_ProductDetail_C_BndEvt__ExchangeShop_2_K2Node_ComponentBoundEvent_3_OnShow__DelegateSignature");
static_assert(offsetof(UMG_ProductDetail_C_BndEvt__ExchangeShop_2_K2Node_ComponentBoundEvent_3_OnShow__DelegateSignature, bShow) == 0x000000, "Member 'UMG_ProductDetail_C_BndEvt__ExchangeShop_2_K2Node_ComponentBoundEvent_3_OnShow__DelegateSignature::bShow' has a wrong offset!");

// Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTrying;                                           // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature) == 0x000004, "Wrong alignment on UMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature");
static_assert(sizeof(UMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature) == 0x000008, "Wrong size on UMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature");
static_assert(offsetof(UMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature, ItemIndex) == 0x000000, "Member 'UMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature::ItemIndex' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature, bTrying) == 0x000004, "Member 'UMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature::bTrying' has a wrong offset!");

// Function UMG_ProductDetail.UMG_ProductDetail_C.SetTryingCostumeItemData
// 0x0130 (0x0130 - 0x0000)
struct UMG_ProductDetail_C_SetTryingCostumeItemData final
{
public:
	class UBP_SBProductItemData_C*                Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTrying;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bUpdateCapture;                                    // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80F9[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       WorkCostumeMasterData;                             // 0x0010(0x0088)(Edit, BlueprintVisible)
	class UObject*                                WorkData;                                          // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTrying_bTrying;                        // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCostumeData_bFlag;                      // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80FA[0x5];                                     // 0x00A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_GetCostumeMasterData_CostumeMasterData;   // 0x00A8(0x0088)()
};
static_assert(alignof(UMG_ProductDetail_C_SetTryingCostumeItemData) == 0x000008, "Wrong alignment on UMG_ProductDetail_C_SetTryingCostumeItemData");
static_assert(sizeof(UMG_ProductDetail_C_SetTryingCostumeItemData) == 0x000130, "Wrong size on UMG_ProductDetail_C_SetTryingCostumeItemData");
static_assert(offsetof(UMG_ProductDetail_C_SetTryingCostumeItemData, Param_Data) == 0x000000, "Member 'UMG_ProductDetail_C_SetTryingCostumeItemData::Param_Data' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetTryingCostumeItemData, bTrying) == 0x000008, "Member 'UMG_ProductDetail_C_SetTryingCostumeItemData::bTrying' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetTryingCostumeItemData, bUpdateCapture) == 0x000009, "Member 'UMG_ProductDetail_C_SetTryingCostumeItemData::bUpdateCapture' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetTryingCostumeItemData, WorkCostumeMasterData) == 0x000010, "Member 'UMG_ProductDetail_C_SetTryingCostumeItemData::WorkCostumeMasterData' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetTryingCostumeItemData, WorkData) == 0x000098, "Member 'UMG_ProductDetail_C_SetTryingCostumeItemData::WorkData' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetTryingCostumeItemData, CallFunc_GetTrying_bTrying) == 0x0000A0, "Member 'UMG_ProductDetail_C_SetTryingCostumeItemData::CallFunc_GetTrying_bTrying' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetTryingCostumeItemData, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x0000A1, "Member 'UMG_ProductDetail_C_SetTryingCostumeItemData::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetTryingCostumeItemData, CallFunc_IsCostumeData_bFlag) == 0x0000A2, "Member 'UMG_ProductDetail_C_SetTryingCostumeItemData::CallFunc_IsCostumeData_bFlag' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetTryingCostumeItemData, CallFunc_GetCostumeMasterData_CostumeMasterData) == 0x0000A8, "Member 'UMG_ProductDetail_C_SetTryingCostumeItemData::CallFunc_GetCostumeMasterData_CostumeMasterData' has a wrong offset!");

// Function UMG_ProductDetail.UMG_ProductDetail_C.SetTryingAllIfCostumeSet
// 0x0040 (0x0040 - 0x0000)
struct UMG_ProductDetail_C_SetTryingAllIfCostumeSet final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCostumeSet_bReturnValue;                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80FB[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80FC[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UBP_SBProductItemData_C*>        CallFunc_GetItemDataList_ReturnValue;              // 0x0020(0x0010)(ReferenceParm)
	class UBP_SBProductItemData_C*                CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductDetail_C_SetTryingAllIfCostumeSet) == 0x000008, "Wrong alignment on UMG_ProductDetail_C_SetTryingAllIfCostumeSet");
static_assert(sizeof(UMG_ProductDetail_C_SetTryingAllIfCostumeSet) == 0x000040, "Wrong size on UMG_ProductDetail_C_SetTryingAllIfCostumeSet");
static_assert(offsetof(UMG_ProductDetail_C_SetTryingAllIfCostumeSet, Temp_int_Array_Index_Variable) == 0x000000, "Member 'UMG_ProductDetail_C_SetTryingAllIfCostumeSet::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetTryingAllIfCostumeSet, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'UMG_ProductDetail_C_SetTryingAllIfCostumeSet::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetTryingAllIfCostumeSet, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'UMG_ProductDetail_C_SetTryingAllIfCostumeSet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetTryingAllIfCostumeSet, CallFunc_IsCostumeSet_bReturnValue) == 0x00000C, "Member 'UMG_ProductDetail_C_SetTryingAllIfCostumeSet::CallFunc_IsCostumeSet_bReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetTryingAllIfCostumeSet, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000010, "Member 'UMG_ProductDetail_C_SetTryingAllIfCostumeSet::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetTryingAllIfCostumeSet, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'UMG_ProductDetail_C_SetTryingAllIfCostumeSet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetTryingAllIfCostumeSet, CallFunc_GetItemDataList_ReturnValue) == 0x000020, "Member 'UMG_ProductDetail_C_SetTryingAllIfCostumeSet::CallFunc_GetItemDataList_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetTryingAllIfCostumeSet, CallFunc_Array_Get_Item) == 0x000030, "Member 'UMG_ProductDetail_C_SetTryingAllIfCostumeSet::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetTryingAllIfCostumeSet, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'UMG_ProductDetail_C_SetTryingAllIfCostumeSet::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetTryingAllIfCostumeSet, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'UMG_ProductDetail_C_SetTryingAllIfCostumeSet::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function UMG_ProductDetail.UMG_ProductDetail_C.SetSelectedItemData
// 0x00A8 (0x00A8 - 0x0000)
struct UMG_ProductDetail_C_SetSelectedItemData final
{
public:
	class UBP_SBProductItemData_C*                ItemData;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bToggleTrying;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bForceTrying;                                      // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasItemBoxContent_bResult;                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasRewardType_bResult;                    // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMasterReward_bResult;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCostumeData_bFlag;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80FD[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_GetCostumeMasterData_CostumeMasterData;   // 0x0010(0x0088)()
	int32                                         CallFunc_GetItemIndex_ItemIndex;                   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetVisibleIfValidCostumeData_bVisible;    // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x009E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetTrying_bTrying;                        // 0x009F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCostumeData_bFlag_1;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductDetail_C_SetSelectedItemData) == 0x000008, "Wrong alignment on UMG_ProductDetail_C_SetSelectedItemData");
static_assert(sizeof(UMG_ProductDetail_C_SetSelectedItemData) == 0x0000A8, "Wrong size on UMG_ProductDetail_C_SetSelectedItemData");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedItemData, ItemData) == 0x000000, "Member 'UMG_ProductDetail_C_SetSelectedItemData::ItemData' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedItemData, bToggleTrying) == 0x000008, "Member 'UMG_ProductDetail_C_SetSelectedItemData::bToggleTrying' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedItemData, bForceTrying) == 0x000009, "Member 'UMG_ProductDetail_C_SetSelectedItemData::bForceTrying' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedItemData, CallFunc_HasItemBoxContent_bResult) == 0x00000A, "Member 'UMG_ProductDetail_C_SetSelectedItemData::CallFunc_HasItemBoxContent_bResult' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedItemData, CallFunc_HasRewardType_bResult) == 0x00000B, "Member 'UMG_ProductDetail_C_SetSelectedItemData::CallFunc_HasRewardType_bResult' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedItemData, CallFunc_HasMasterReward_bResult) == 0x00000C, "Member 'UMG_ProductDetail_C_SetSelectedItemData::CallFunc_HasMasterReward_bResult' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedItemData, CallFunc_IsCostumeData_bFlag) == 0x00000D, "Member 'UMG_ProductDetail_C_SetSelectedItemData::CallFunc_IsCostumeData_bFlag' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedItemData, CallFunc_GetCostumeMasterData_CostumeMasterData) == 0x000010, "Member 'UMG_ProductDetail_C_SetSelectedItemData::CallFunc_GetCostumeMasterData_CostumeMasterData' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedItemData, CallFunc_GetItemIndex_ItemIndex) == 0x000098, "Member 'UMG_ProductDetail_C_SetSelectedItemData::CallFunc_GetItemIndex_ItemIndex' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedItemData, CallFunc_IsValid_ReturnValue) == 0x00009C, "Member 'UMG_ProductDetail_C_SetSelectedItemData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedItemData, CallFunc_SetVisibleIfValidCostumeData_bVisible) == 0x00009D, "Member 'UMG_ProductDetail_C_SetSelectedItemData::CallFunc_SetVisibleIfValidCostumeData_bVisible' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedItemData, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00009E, "Member 'UMG_ProductDetail_C_SetSelectedItemData::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedItemData, CallFunc_GetTrying_bTrying) == 0x00009F, "Member 'UMG_ProductDetail_C_SetSelectedItemData::CallFunc_GetTrying_bTrying' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedItemData, CallFunc_IsCostumeData_bFlag_1) == 0x0000A0, "Member 'UMG_ProductDetail_C_SetSelectedItemData::CallFunc_IsCostumeData_bFlag_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedItemData, CallFunc_Not_PreBool_ReturnValue) == 0x0000A1, "Member 'UMG_ProductDetail_C_SetSelectedItemData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedItemData, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x0000A2, "Member 'UMG_ProductDetail_C_SetSelectedItemData::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedItemData, CallFunc_BooleanOR_ReturnValue) == 0x0000A3, "Member 'UMG_ProductDetail_C_SetSelectedItemData::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function UMG_ProductDetail.UMG_ProductDetail_C.UnsetTryingCostumeItemData
// 0x0010 (0x0010 - 0x0000)
struct UMG_ProductDetail_C_UnsetTryingCostumeItemData final
{
public:
	class UBP_SBProductItemData_C*                Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTrying_bTrying;                        // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductDetail_C_UnsetTryingCostumeItemData) == 0x000008, "Wrong alignment on UMG_ProductDetail_C_UnsetTryingCostumeItemData");
static_assert(sizeof(UMG_ProductDetail_C_UnsetTryingCostumeItemData) == 0x000010, "Wrong size on UMG_ProductDetail_C_UnsetTryingCostumeItemData");
static_assert(offsetof(UMG_ProductDetail_C_UnsetTryingCostumeItemData, Param_Data) == 0x000000, "Member 'UMG_ProductDetail_C_UnsetTryingCostumeItemData::Param_Data' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_UnsetTryingCostumeItemData, CallFunc_GetTrying_bTrying) == 0x000008, "Member 'UMG_ProductDetail_C_UnsetTryingCostumeItemData::CallFunc_GetTrying_bTrying' has a wrong offset!");

// Function UMG_ProductDetail.UMG_ProductDetail_C.UnsetSelectedItemData
// 0x0010 (0x0010 - 0x0000)
struct UMG_ProductDetail_C_UnsetSelectedItemData final
{
public:
	class UBP_SBProductItemData_C*                ItemData;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductDetail_C_UnsetSelectedItemData) == 0x000008, "Wrong alignment on UMG_ProductDetail_C_UnsetSelectedItemData");
static_assert(sizeof(UMG_ProductDetail_C_UnsetSelectedItemData) == 0x000010, "Wrong size on UMG_ProductDetail_C_UnsetSelectedItemData");
static_assert(offsetof(UMG_ProductDetail_C_UnsetSelectedItemData, ItemData) == 0x000000, "Member 'UMG_ProductDetail_C_UnsetSelectedItemData::ItemData' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_UnsetSelectedItemData, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000008, "Member 'UMG_ProductDetail_C_UnsetSelectedItemData::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function UMG_ProductDetail.UMG_ProductDetail_C.SetSelectedSimpleItemData
// 0x0050 (0x0050 - 0x0000)
struct UMG_ProductDetail_C_SetSelectedSimpleItemData final
{
public:
	EItemType                                     ItemType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_80FE[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemIndex;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bToggleTrying;                                     // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bForceTrying;                                      // 0x000D(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80FF[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                TempItemData;                                      // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8100[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8101[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8102[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemIndex_ItemIndex;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductDetail_C_SetSelectedSimpleItemData) == 0x000008, "Wrong alignment on UMG_ProductDetail_C_SetSelectedSimpleItemData");
static_assert(sizeof(UMG_ProductDetail_C_SetSelectedSimpleItemData) == 0x000050, "Wrong size on UMG_ProductDetail_C_SetSelectedSimpleItemData");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedSimpleItemData, ItemType) == 0x000000, "Member 'UMG_ProductDetail_C_SetSelectedSimpleItemData::ItemType' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedSimpleItemData, ItemIndex) == 0x000004, "Member 'UMG_ProductDetail_C_SetSelectedSimpleItemData::ItemIndex' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedSimpleItemData, Amount) == 0x000008, "Member 'UMG_ProductDetail_C_SetSelectedSimpleItemData::Amount' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedSimpleItemData, bToggleTrying) == 0x00000C, "Member 'UMG_ProductDetail_C_SetSelectedSimpleItemData::bToggleTrying' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedSimpleItemData, bForceTrying) == 0x00000D, "Member 'UMG_ProductDetail_C_SetSelectedSimpleItemData::bForceTrying' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedSimpleItemData, TempItemData) == 0x000010, "Member 'UMG_ProductDetail_C_SetSelectedSimpleItemData::TempItemData' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedSimpleItemData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000018, "Member 'UMG_ProductDetail_C_SetSelectedSimpleItemData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedSimpleItemData, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'UMG_ProductDetail_C_SetSelectedSimpleItemData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedSimpleItemData, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'UMG_ProductDetail_C_SetSelectedSimpleItemData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedSimpleItemData, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'UMG_ProductDetail_C_SetSelectedSimpleItemData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedSimpleItemData, CallFunc_SpawnObject_ReturnValue) == 0x000028, "Member 'UMG_ProductDetail_C_SetSelectedSimpleItemData::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedSimpleItemData, CallFunc_Array_Add_ReturnValue) == 0x000030, "Member 'UMG_ProductDetail_C_SetSelectedSimpleItemData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedSimpleItemData, CallFunc_IsValid_ReturnValue) == 0x000034, "Member 'UMG_ProductDetail_C_SetSelectedSimpleItemData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedSimpleItemData, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000035, "Member 'UMG_ProductDetail_C_SetSelectedSimpleItemData::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedSimpleItemData, CallFunc_Array_Get_Item) == 0x000038, "Member 'UMG_ProductDetail_C_SetSelectedSimpleItemData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedSimpleItemData, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'UMG_ProductDetail_C_SetSelectedSimpleItemData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedSimpleItemData, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'UMG_ProductDetail_C_SetSelectedSimpleItemData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedSimpleItemData, CallFunc_GetItemIndex_ItemIndex) == 0x000048, "Member 'UMG_ProductDetail_C_SetSelectedSimpleItemData::CallFunc_GetItemIndex_ItemIndex' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetail_C_SetSelectedSimpleItemData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00004C, "Member 'UMG_ProductDetail_C_SetSelectedSimpleItemData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function UMG_ProductDetail.UMG_ProductDetail_C.SetButtonPosition_Posing
// 0x0001 (0x0001 - 0x0000)
struct UMG_ProductDetail_C_SetButtonPosition_Posing final
{
public:
	EShopType                                     IsExchangeShop;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductDetail_C_SetButtonPosition_Posing) == 0x000001, "Wrong alignment on UMG_ProductDetail_C_SetButtonPosition_Posing");
static_assert(sizeof(UMG_ProductDetail_C_SetButtonPosition_Posing) == 0x000001, "Wrong size on UMG_ProductDetail_C_SetButtonPosition_Posing");
static_assert(offsetof(UMG_ProductDetail_C_SetButtonPosition_Posing, IsExchangeShop) == 0x000000, "Member 'UMG_ProductDetail_C_SetButtonPosition_Posing::IsExchangeShop' has a wrong offset!");

}

