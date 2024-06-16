#pragma once

 

// Package: CommonItemStatusDescWithImageView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CommonItemStatusDescWithImageView.CommonItemStatusDescWithImageView_C.ExecuteUbergraph_CommonItemStatusDescWithImageView
// 0x02B0 (0x02B0 - 0x0000)
struct CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1413[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RecepiId;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1414[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCraftMasterData_isExists;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1415[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMasterData_ReturnValue;          // 0x0020(0x0088)(ConstParm)
	float                                         CallFunc_BreakVector2D_X;                          // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00B0(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1416[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x00F8(0x00D0)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x01C8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0208(0x0010)(ReferenceParm)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0220(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0238(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0249(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x024A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1417[0x5];                                     // 0x024B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0260(0x0010)(ZeroConstructor, NoDestructor)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetItemIconTexture_OutIconTexture;        // 0x0270(0x0028)(HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView) == 0x000008, "Wrong alignment on CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView");
static_assert(sizeof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView) == 0x0002B0, "Wrong size on CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, EntryPoint) == 0x000000, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, K2Node_Event_IsDesignTime) == 0x000004, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, K2Node_CustomEvent_RecepiId) == 0x000008, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::K2Node_CustomEvent_RecepiId' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, CallFunc_GetMasterDataManager_IsValid) == 0x00000C, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, CallFunc_FindCraftMasterData_isExists) == 0x000018, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::CallFunc_FindCraftMasterData_isExists' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, CallFunc_FindCraftMasterData_ReturnValue) == 0x000020, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::CallFunc_FindCraftMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, CallFunc_BreakVector2D_X) == 0x0000A8, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, CallFunc_BreakVector2D_Y) == 0x0000AC, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, K2Node_MakeStruct_FormatArgumentData) == 0x0000B0, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, CallFunc_GetItemMasterData_IsExists) == 0x0000F0, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, CallFunc_GetItemMasterData_ReturnValue) == 0x0000F8, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, K2Node_MakeStruct_FormatArgumentData_1) == 0x0001C8, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, K2Node_MakeArray_Array) == 0x000208, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, K2Node_CustomEvent_Loaded) == 0x000218, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, CallFunc_Format_ReturnValue) == 0x000220, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, CallFunc_Conv_TextToString_ReturnValue) == 0x000238, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, CallFunc_IsValid_ReturnValue) == 0x000248, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, CallFunc_IsValid_ReturnValue_1) == 0x000249, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, CallFunc_IsValid_ReturnValue_2) == 0x00024A, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, CallFunc_GetItemText_ReturnValue) == 0x000250, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, K2Node_CreateDelegate_OutputDelegate) == 0x000260, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, CallFunc_GetItemIconTexture_OutIconTexture) == 0x000270, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::CallFunc_GetItemIconTexture_OutIconTexture' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, Temp_object_Variable) == 0x000298, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, K2Node_DynamicCast_AsTexture_2D) == 0x0002A0, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView, K2Node_DynamicCast_bSuccess) == 0x0002A8, "Member 'CommonItemStatusDescWithImageView_C_ExecuteUbergraph_CommonItemStatusDescWithImageView::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function CommonItemStatusDescWithImageView.CommonItemStatusDescWithImageView_C.SetRecepiData
// 0x0004 (0x0004 - 0x0000)
struct CommonItemStatusDescWithImageView_C_SetRecepiData final
{
public:
	int32                                         RecepiId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonItemStatusDescWithImageView_C_SetRecepiData) == 0x000004, "Wrong alignment on CommonItemStatusDescWithImageView_C_SetRecepiData");
static_assert(sizeof(CommonItemStatusDescWithImageView_C_SetRecepiData) == 0x000004, "Wrong size on CommonItemStatusDescWithImageView_C_SetRecepiData");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_SetRecepiData, RecepiId) == 0x000000, "Member 'CommonItemStatusDescWithImageView_C_SetRecepiData::RecepiId' has a wrong offset!");

// Function CommonItemStatusDescWithImageView.CommonItemStatusDescWithImageView_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommonItemStatusDescWithImageView_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonItemStatusDescWithImageView_C_PreConstruct) == 0x000001, "Wrong alignment on CommonItemStatusDescWithImageView_C_PreConstruct");
static_assert(sizeof(CommonItemStatusDescWithImageView_C_PreConstruct) == 0x000001, "Wrong size on CommonItemStatusDescWithImageView_C_PreConstruct");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommonItemStatusDescWithImageView_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommonItemStatusDescWithImageView.CommonItemStatusDescWithImageView_C.OnLoaded_6BB247B74447304424888C8D6990408A
// 0x0008 (0x0008 - 0x0000)
struct CommonItemStatusDescWithImageView_C_OnLoaded_6BB247B74447304424888C8D6990408A final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonItemStatusDescWithImageView_C_OnLoaded_6BB247B74447304424888C8D6990408A) == 0x000008, "Wrong alignment on CommonItemStatusDescWithImageView_C_OnLoaded_6BB247B74447304424888C8D6990408A");
static_assert(sizeof(CommonItemStatusDescWithImageView_C_OnLoaded_6BB247B74447304424888C8D6990408A) == 0x000008, "Wrong size on CommonItemStatusDescWithImageView_C_OnLoaded_6BB247B74447304424888C8D6990408A");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_OnLoaded_6BB247B74447304424888C8D6990408A, Loaded) == 0x000000, "Member 'CommonItemStatusDescWithImageView_C_OnLoaded_6BB247B74447304424888C8D6990408A::Loaded' has a wrong offset!");

// Function CommonItemStatusDescWithImageView.CommonItemStatusDescWithImageView_C.SetRateButtonView
// 0x0001 (0x0001 - 0x0000)
struct CommonItemStatusDescWithImageView_C_SetRateButtonView final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonItemStatusDescWithImageView_C_SetRateButtonView) == 0x000001, "Wrong alignment on CommonItemStatusDescWithImageView_C_SetRateButtonView");
static_assert(sizeof(CommonItemStatusDescWithImageView_C_SetRateButtonView) == 0x000001, "Wrong size on CommonItemStatusDescWithImageView_C_SetRateButtonView");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_SetRateButtonView, bVisible) == 0x000000, "Member 'CommonItemStatusDescWithImageView_C_SetRateButtonView::bVisible' has a wrong offset!");

// Function CommonItemStatusDescWithImageView.CommonItemStatusDescWithImageView_C.SetCraftNumView
// 0x0140 (0x0140 - 0x0000)
struct CommonItemStatusDescWithImageView_C_SetCraftNumView final
{
public:
	bool                                          Param_Visibility;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1418[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CraftCount;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpCraftCount;                                     // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1419[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CraftRecepi;                                       // 0x0010(0x0088)(Edit, BlueprintVisible)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_141A[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCraftMasterData_isExists;             // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_141B[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMasterData_ReturnValue;          // 0x00B8(0x0088)(ConstParm)
};
static_assert(alignof(CommonItemStatusDescWithImageView_C_SetCraftNumView) == 0x000008, "Wrong alignment on CommonItemStatusDescWithImageView_C_SetCraftNumView");
static_assert(sizeof(CommonItemStatusDescWithImageView_C_SetCraftNumView) == 0x000140, "Wrong size on CommonItemStatusDescWithImageView_C_SetCraftNumView");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_SetCraftNumView, Param_Visibility) == 0x000000, "Member 'CommonItemStatusDescWithImageView_C_SetCraftNumView::Param_Visibility' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_SetCraftNumView, CraftCount) == 0x000004, "Member 'CommonItemStatusDescWithImageView_C_SetCraftNumView::CraftCount' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_SetCraftNumView, TmpCraftCount) == 0x000008, "Member 'CommonItemStatusDescWithImageView_C_SetCraftNumView::TmpCraftCount' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_SetCraftNumView, CraftRecepi) == 0x000010, "Member 'CommonItemStatusDescWithImageView_C_SetCraftNumView::CraftRecepi' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_SetCraftNumView, CallFunc_GetMasterDataManager_IsValid) == 0x000098, "Member 'CommonItemStatusDescWithImageView_C_SetCraftNumView::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_SetCraftNumView, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000A0, "Member 'CommonItemStatusDescWithImageView_C_SetCraftNumView::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_SetCraftNumView, CallFunc_Multiply_IntInt_ReturnValue) == 0x0000A8, "Member 'CommonItemStatusDescWithImageView_C_SetCraftNumView::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_SetCraftNumView, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x0000AC, "Member 'CommonItemStatusDescWithImageView_C_SetCraftNumView::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_SetCraftNumView, CallFunc_Add_IntInt_ReturnValue) == 0x0000B0, "Member 'CommonItemStatusDescWithImageView_C_SetCraftNumView::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_SetCraftNumView, CallFunc_FindCraftMasterData_isExists) == 0x0000B4, "Member 'CommonItemStatusDescWithImageView_C_SetCraftNumView::CallFunc_FindCraftMasterData_isExists' has a wrong offset!");
static_assert(offsetof(CommonItemStatusDescWithImageView_C_SetCraftNumView, CallFunc_FindCraftMasterData_ReturnValue) == 0x0000B8, "Member 'CommonItemStatusDescWithImageView_C_SetCraftNumView::CallFunc_FindCraftMasterData_ReturnValue' has a wrong offset!");

}

