#pragma once

 

// Package: LibraryMenu_LoginBonus

#include "Basic.hpp"

#include "ST_LoginBonusBanner_structs.hpp"
#include "E_SBDetailsZoomIn_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.ExecuteUbergraph_LibraryMenu_LoginBonus
// 0x0128 (0x0128 - 0x0000)
struct LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6583[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 DataCount)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UUMG_ProductDetailMenu_C* Sender)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UObject*                                Temp_object_Variable;                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6584[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6585[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_LoginBonusBanner                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x0050(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6586[0x1];                                     // 0x007B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6587[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_DataCount;                      // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6588[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_2;            // 0x009C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetLoginBonusAllData_Valid;               // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6589[0x2];                                     // 0x00AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 ID)>                     K2Node_CreateDelegate_OutputDelegate_3;            // 0x00B0(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_658A[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_658B[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                K2Node_ComponentBoundEvent_Data;                   // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_4;            // 0x00F0(0x0010)(ZeroConstructor, NoDestructor)
	class UUMG_ProductDetailMenu_C*               CallFunc_Create_ReturnValue;                       // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ProductDetailMenu_C*               K2Node_CustomEvent_Sender;                         // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SBDetailsZoomIn                             K2Node_ComponentBoundEvent_Type;                   // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_658C[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus");
static_assert(sizeof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus) == 0x000128, "Wrong size on LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, EntryPoint) == 0x000000, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, Temp_object_Variable) == 0x000028, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, K2Node_DynamicCast_AsTexture_2D) == 0x000030, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_Conv_StringToName_ReturnValue) == 0x000044, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_GetDataTableRowFromName_OutRow) == 0x000050, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000078, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_IsEmpty_ReturnValue) == 0x000079, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x00007A, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_Array_Add_ReturnValue) == 0x00007C, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_Array_Add_ReturnValue_1) == 0x000080, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, K2Node_CustomEvent_Loaded) == 0x000088, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, K2Node_CustomEvent_DataCount) == 0x000090, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::K2Node_CustomEvent_DataCount' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, K2Node_CustomEvent_Index) == 0x000094, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000098, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, K2Node_CreateDelegate_OutputDelegate_2) == 0x00009C, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000AC, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_GetLoginBonusAllData_Valid) == 0x0000AD, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_GetLoginBonusAllData_Valid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000B0, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000C0, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, Temp_int_Variable) == 0x0000C4, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000C8, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000CC, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_Array_IsValidIndex_ReturnValue_1) == 0x0000D0, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_Array_IsValidIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, K2Node_ComponentBoundEvent_Data) == 0x0000E0, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::K2Node_ComponentBoundEvent_Data' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000E8, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000F0, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_Create_ReturnValue) == 0x000100, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, K2Node_CustomEvent_Sender) == 0x000108, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_AddChildToCanvas_ReturnValue) == 0x000110, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, K2Node_ComponentBoundEvent_Type) == 0x000118, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::K2Node_ComponentBoundEvent_Type' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus, CallFunc_PlayAnimation_ReturnValue) == 0x000120, "Member 'LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature final
{
public:
	E_SBDetailsZoomIn                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong alignment on LibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature");
static_assert(sizeof(LibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong size on LibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature");
static_assert(offsetof(LibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature, Type) == 0x000000, "Member 'LibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature::Type' has a wrong offset!");

// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.OnCloseDetailMenu
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_LoginBonus_C_OnCloseDetailMenu final
{
public:
	class UUMG_ProductDetailMenu_C*               Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonus_C_OnCloseDetailMenu) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonus_C_OnCloseDetailMenu");
static_assert(sizeof(LibraryMenu_LoginBonus_C_OnCloseDetailMenu) == 0x000008, "Wrong size on LibraryMenu_LoginBonus_C_OnCloseDetailMenu");
static_assert(offsetof(LibraryMenu_LoginBonus_C_OnCloseDetailMenu, Sender) == 0x000000, "Member 'LibraryMenu_LoginBonus_C_OnCloseDetailMenu::Sender' has a wrong offset!");

// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature");
static_assert(sizeof(LibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature) == 0x000008, "Wrong size on LibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature");
static_assert(offsetof(LibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature, Data) == 0x000000, "Member 'LibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature::Data' has a wrong offset!");

// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.LoginBonusListChange
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_LoginBonus_C_LoginBonusListChange final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonus_C_LoginBonusListChange) == 0x000004, "Wrong alignment on LibraryMenu_LoginBonus_C_LoginBonusListChange");
static_assert(sizeof(LibraryMenu_LoginBonus_C_LoginBonusListChange) == 0x000004, "Wrong size on LibraryMenu_LoginBonus_C_LoginBonusListChange");
static_assert(offsetof(LibraryMenu_LoginBonus_C_LoginBonusListChange, Param_Index) == 0x000000, "Member 'LibraryMenu_LoginBonus_C_LoginBonusListChange::Param_Index' has a wrong offset!");

// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.Initialize
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_LoginBonus_C_Initialize final
{
public:
	int32                                         DataCount;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonus_C_Initialize) == 0x000004, "Wrong alignment on LibraryMenu_LoginBonus_C_Initialize");
static_assert(sizeof(LibraryMenu_LoginBonus_C_Initialize) == 0x000004, "Wrong size on LibraryMenu_LoginBonus_C_Initialize");
static_assert(offsetof(LibraryMenu_LoginBonus_C_Initialize, DataCount) == 0x000000, "Member 'LibraryMenu_LoginBonus_C_Initialize::DataCount' has a wrong offset!");

// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.OnLoaded_ED6E864F49F04294CCC4DFAE0330EDC4
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_LoginBonus_C_OnLoaded_ED6E864F49F04294CCC4DFAE0330EDC4 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonus_C_OnLoaded_ED6E864F49F04294CCC4DFAE0330EDC4) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonus_C_OnLoaded_ED6E864F49F04294CCC4DFAE0330EDC4");
static_assert(sizeof(LibraryMenu_LoginBonus_C_OnLoaded_ED6E864F49F04294CCC4DFAE0330EDC4) == 0x000008, "Wrong size on LibraryMenu_LoginBonus_C_OnLoaded_ED6E864F49F04294CCC4DFAE0330EDC4");
static_assert(offsetof(LibraryMenu_LoginBonus_C_OnLoaded_ED6E864F49F04294CCC4DFAE0330EDC4, Loaded) == 0x000000, "Member 'LibraryMenu_LoginBonus_C_OnLoaded_ED6E864F49F04294CCC4DFAE0330EDC4::Loaded' has a wrong offset!");

// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.SetInfomation
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_LoginBonus_C_SetInfomation final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_LoginBonus_C_SetInfomation) == 0x000004, "Wrong alignment on LibraryMenu_LoginBonus_C_SetInfomation");
static_assert(sizeof(LibraryMenu_LoginBonus_C_SetInfomation) == 0x000008, "Wrong size on LibraryMenu_LoginBonus_C_SetInfomation");
static_assert(offsetof(LibraryMenu_LoginBonus_C_SetInfomation, Param_Index) == 0x000000, "Member 'LibraryMenu_LoginBonus_C_SetInfomation::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_SetInfomation, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000004, "Member 'LibraryMenu_LoginBonus_C_SetInfomation::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.ItemClickChange
// 0x0038 (0x0038 - 0x0000)
struct LibraryMenu_LoginBonus_C_ItemClickChange final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_658D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterItemBox                       BoxData;                                           // 0x0008(0x0020)(Edit, BlueprintVisible)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_LoginBonus_C_ItemClickChange) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonus_C_ItemClickChange");
static_assert(sizeof(LibraryMenu_LoginBonus_C_ItemClickChange) == 0x000038, "Wrong size on LibraryMenu_LoginBonus_C_ItemClickChange");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ItemClickChange, Param_Index) == 0x000000, "Member 'LibraryMenu_LoginBonus_C_ItemClickChange::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ItemClickChange, BoxData) == 0x000008, "Member 'LibraryMenu_LoginBonus_C_ItemClickChange::BoxData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ItemClickChange, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'LibraryMenu_LoginBonus_C_ItemClickChange::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_ItemClickChange, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000030, "Member 'LibraryMenu_LoginBonus_C_ItemClickChange::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.DetailBannerChange
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_LoginBonus_C_DetailBannerChange final
{
public:
	int32                                         Work;                                              // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_658E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_658F[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonus_C_DetailBannerChange) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonus_C_DetailBannerChange");
static_assert(sizeof(LibraryMenu_LoginBonus_C_DetailBannerChange) == 0x000018, "Wrong size on LibraryMenu_LoginBonus_C_DetailBannerChange");
static_assert(offsetof(LibraryMenu_LoginBonus_C_DetailBannerChange, Work) == 0x000000, "Member 'LibraryMenu_LoginBonus_C_DetailBannerChange::Work' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_DetailBannerChange, CallFunc_Array_Get_Item) == 0x000008, "Member 'LibraryMenu_LoginBonus_C_DetailBannerChange::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_DetailBannerChange, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000010, "Member 'LibraryMenu_LoginBonus_C_DetailBannerChange::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_DetailBannerChange, CallFunc_Array_Find_ReturnValue) == 0x000014, "Member 'LibraryMenu_LoginBonus_C_DetailBannerChange::CallFunc_Array_Find_ReturnValue' has a wrong offset!");

// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.DetailVisibility
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_LoginBonus_C_DetailVisibility final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_LoginBonus_C_DetailVisibility) == 0x000004, "Wrong alignment on LibraryMenu_LoginBonus_C_DetailVisibility");
static_assert(sizeof(LibraryMenu_LoginBonus_C_DetailVisibility) == 0x000008, "Wrong size on LibraryMenu_LoginBonus_C_DetailVisibility");
static_assert(offsetof(LibraryMenu_LoginBonus_C_DetailVisibility, Param_Index) == 0x000000, "Member 'LibraryMenu_LoginBonus_C_DetailVisibility::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_DetailVisibility, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'LibraryMenu_LoginBonus_C_DetailVisibility::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.SetItemDetail
// 0x0030 (0x0030 - 0x0000)
struct LibraryMenu_LoginBonus_C_SetItemDetail final
{
public:
	struct FSBLoginBonusWindowDayData             ItemData;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         ID;                                                // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELoginBonusCategory                           Category;                                          // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             ItemType;                                          // 0x001D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6590[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonus_C_SetItemDetail) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonus_C_SetItemDetail");
static_assert(sizeof(LibraryMenu_LoginBonus_C_SetItemDetail) == 0x000030, "Wrong size on LibraryMenu_LoginBonus_C_SetItemDetail");
static_assert(offsetof(LibraryMenu_LoginBonus_C_SetItemDetail, ItemData) == 0x000000, "Member 'LibraryMenu_LoginBonus_C_SetItemDetail::ItemData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_SetItemDetail, ID) == 0x000018, "Member 'LibraryMenu_LoginBonus_C_SetItemDetail::ID' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_SetItemDetail, Category) == 0x00001C, "Member 'LibraryMenu_LoginBonus_C_SetItemDetail::Category' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_SetItemDetail, ItemType) == 0x00001D, "Member 'LibraryMenu_LoginBonus_C_SetItemDetail::ItemType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_SetItemDetail, CallFunc_Array_IsValidIndex_ReturnValue) == 0x00001E, "Member 'LibraryMenu_LoginBonus_C_SetItemDetail::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_SetItemDetail, K2Node_SwitchEnum_CmpSuccess) == 0x00001F, "Member 'LibraryMenu_LoginBonus_C_SetItemDetail::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_SetItemDetail, CallFunc_Conv_IntToByte_ReturnValue) == 0x000020, "Member 'LibraryMenu_LoginBonus_C_SetItemDetail::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_SetItemDetail, CallFunc_GetValidValue_ReturnValue) == 0x000021, "Member 'LibraryMenu_LoginBonus_C_SetItemDetail::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_C_SetItemDetail, CallFunc_SpawnObject_ReturnValue) == 0x000028, "Member 'LibraryMenu_LoginBonus_C_SetItemDetail::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

}

