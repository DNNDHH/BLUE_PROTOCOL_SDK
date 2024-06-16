#pragma once

 

// Package: UMG_SeasonPassItemReceiveMenu

#include "Basic.hpp"

#include "E_SBDetailsZoomIn_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.OnClick_Receive__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassItemReceiveMenu_C_OnClick_Receive__DelegateSignature final
{
public:
	class USBSeasonPassMenuRewardItemData*        Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassItemReceiveMenu_C_OnClick_Receive__DelegateSignature) == 0x000008, "Wrong alignment on UMG_SeasonPassItemReceiveMenu_C_OnClick_Receive__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassItemReceiveMenu_C_OnClick_Receive__DelegateSignature) == 0x000008, "Wrong size on UMG_SeasonPassItemReceiveMenu_C_OnClick_Receive__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_OnClick_Receive__DelegateSignature, Param_Data) == 0x000000, "Member 'UMG_SeasonPassItemReceiveMenu_C_OnClick_Receive__DelegateSignature::Param_Data' has a wrong offset!");

// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.OnClose__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassItemReceiveMenu_C_OnClose__DelegateSignature final
{
public:
	class UUMG_SeasonPassItemReceiveMenu_C*       Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassItemReceiveMenu_C_OnClose__DelegateSignature) == 0x000008, "Wrong alignment on UMG_SeasonPassItemReceiveMenu_C_OnClose__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassItemReceiveMenu_C_OnClose__DelegateSignature) == 0x000008, "Wrong size on UMG_SeasonPassItemReceiveMenu_C_OnClose__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_OnClose__DelegateSignature, Sender) == 0x000000, "Member 'UMG_SeasonPassItemReceiveMenu_C_OnClose__DelegateSignature::Sender' has a wrong offset!");

// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu
// 0x00B0 (0x00B0 - 0x0000)
struct UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9586[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                K2Node_ComponentBoundEvent_Data_2;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                K2Node_ComponentBoundEvent_Data_1;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bTrying;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bShow;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9587[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                K2Node_ComponentBoundEvent_Data;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SBDetailsZoomIn                             K2Node_ComponentBoundEvent_Type;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9588[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_SetProductData_Data_CastInput;            // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBSeasonPassMenuRewardItemData*        K2Node_CustomEvent_Data_1;                         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetParentData_bIsValid;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9589[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_GetParentData_ParentData;                 // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_CustomEvent_Data;                           // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_958A[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductData_C*                    CallFunc_SpawnObject_ReturnValue;                  // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_958B[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_SetProductData_Data_CastInput_1;          // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanReceive_ReturnValue;                   // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu) == 0x000008, "Wrong alignment on UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu");
static_assert(sizeof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu) == 0x0000B0, "Wrong size on UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, EntryPoint) == 0x000000, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, Temp_bool_Variable) == 0x000005, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, K2Node_ComponentBoundEvent_Data_2) == 0x000008, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::K2Node_ComponentBoundEvent_Data_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, K2Node_ComponentBoundEvent_Data_1) == 0x000010, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::K2Node_ComponentBoundEvent_Data_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, K2Node_ComponentBoundEvent_bTrying) == 0x000018, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::K2Node_ComponentBoundEvent_bTrying' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, K2Node_ComponentBoundEvent_bShow) == 0x000019, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::K2Node_ComponentBoundEvent_bShow' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, K2Node_ComponentBoundEvent_Data) == 0x000028, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::K2Node_ComponentBoundEvent_Data' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, K2Node_ComponentBoundEvent_Type) == 0x000030, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::K2Node_ComponentBoundEvent_Type' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, CallFunc_SetProductData_Data_CastInput) == 0x000038, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::CallFunc_SetProductData_Data_CastInput' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, K2Node_CustomEvent_Data_1) == 0x000048, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::K2Node_CustomEvent_Data_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, CallFunc_GetParentData_bIsValid) == 0x000050, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::CallFunc_GetParentData_bIsValid' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, CallFunc_GetParentData_ParentData) == 0x000058, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::CallFunc_GetParentData_ParentData' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, K2Node_CustomEvent_Data) == 0x000068, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000078, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, CallFunc_GetOwningPlayer_ReturnValue) == 0x000080, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, CallFunc_SpawnObject_ReturnValue) == 0x000088, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, K2Node_Select_Default) == 0x000090, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, CallFunc_SetProductData_Data_CastInput_1) == 0x000098, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::CallFunc_SetProductData_Data_CastInput_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, CallFunc_CanReceive_ReturnValue) == 0x0000A8, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::CallFunc_CanReceive_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000A9, "Member 'UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.SetProductData
// 0x0010 (0x0010 - 0x0000)
struct UMG_SeasonPassItemReceiveMenu_C_SetProductData final
{
public:
	TScriptInterface<class IBPI_SBProductData_C>  Param_Data;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_SeasonPassItemReceiveMenu_C_SetProductData) == 0x000008, "Wrong alignment on UMG_SeasonPassItemReceiveMenu_C_SetProductData");
static_assert(sizeof(UMG_SeasonPassItemReceiveMenu_C_SetProductData) == 0x000010, "Wrong size on UMG_SeasonPassItemReceiveMenu_C_SetProductData");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_SetProductData, Param_Data) == 0x000000, "Member 'UMG_SeasonPassItemReceiveMenu_C_SetProductData::Param_Data' has a wrong offset!");

// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.SetData
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassItemReceiveMenu_C_SetData final
{
public:
	class USBSeasonPassMenuRewardItemData*        Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassItemReceiveMenu_C_SetData) == 0x000008, "Wrong alignment on UMG_SeasonPassItemReceiveMenu_C_SetData");
static_assert(sizeof(UMG_SeasonPassItemReceiveMenu_C_SetData) == 0x000008, "Wrong size on UMG_SeasonPassItemReceiveMenu_C_SetData");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_SetData, Param_Data) == 0x000000, "Member 'UMG_SeasonPassItemReceiveMenu_C_SetData::Param_Data' has a wrong offset!");

// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature final
{
public:
	E_SBDetailsZoomIn                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong alignment on UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong size on UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature, Type) == 0x000000, "Member 'UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature::Type' has a wrong offset!");

// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature final
{
public:
	class UBP_SBProductItemData_C*                Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature) == 0x000008, "Wrong alignment on UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature) == 0x000008, "Wrong size on UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature, Param_Data) == 0x000000, "Member 'UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature::Param_Data' has a wrong offset!");

// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature) == 0x000001, "Wrong alignment on UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature) == 0x000001, "Wrong size on UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature, bShow) == 0x000000, "Member 'UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature::bShow' has a wrong offset!");

// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UMG_SeasonPassItemReceiveMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature final
{
public:
	class UBP_SBProductItemData_C*                Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTrying;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_SeasonPassItemReceiveMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature) == 0x000008, "Wrong alignment on UMG_SeasonPassItemReceiveMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassItemReceiveMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature) == 0x000010, "Wrong size on UMG_SeasonPassItemReceiveMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature, Param_Data) == 0x000000, "Member 'UMG_SeasonPassItemReceiveMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature::Param_Data' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature, bTrying) == 0x000008, "Member 'UMG_SeasonPassItemReceiveMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature::bTrying' has a wrong offset!");

// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassItemReceiveMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature final
{
public:
	class UBP_SBProductItemData_C*                Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassItemReceiveMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature) == 0x000008, "Wrong alignment on UMG_SeasonPassItemReceiveMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassItemReceiveMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature) == 0x000008, "Wrong size on UMG_SeasonPassItemReceiveMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature, Param_Data) == 0x000000, "Member 'UMG_SeasonPassItemReceiveMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature::Param_Data' has a wrong offset!");

// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.Show
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassItemReceiveMenu_C_Show final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassItemReceiveMenu_C_Show) == 0x000008, "Wrong alignment on UMG_SeasonPassItemReceiveMenu_C_Show");
static_assert(sizeof(UMG_SeasonPassItemReceiveMenu_C_Show) == 0x000008, "Wrong size on UMG_SeasonPassItemReceiveMenu_C_Show");
static_assert(offsetof(UMG_SeasonPassItemReceiveMenu_C_Show, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'UMG_SeasonPassItemReceiveMenu_C_Show::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

