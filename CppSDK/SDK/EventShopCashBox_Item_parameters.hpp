#pragma once

 

// Package: EventShopCashBox_Item

#include "Basic.hpp"


namespace SDK::Params
{

// Function EventShopCashBox_Item.EventShopCashBox_Item_C.ExecuteUbergraph_EventShopCashBox_Item
// 0x00A0 (0x00A0 - 0x0000)
struct EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63BD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded_1;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63BE[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_1;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D_1;                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63BF[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_TokenId;                        // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63C0[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetTokenIconTexture_Texture;              // 0x0050(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63C1[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_1;            // 0x008C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item) == 0x000008, "Wrong alignment on EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item");
static_assert(sizeof(EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item) == 0x0000A0, "Wrong size on EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item");
static_assert(offsetof(EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item, EntryPoint) == 0x000000, "Member 'EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item, K2Node_CustomEvent_Loaded_1) == 0x000008, "Member 'EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item, Temp_object_Variable) == 0x000010, "Member 'EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item, K2Node_DynamicCast_AsTexture_2D) == 0x000018, "Member 'EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item, K2Node_CustomEvent_Loaded) == 0x000028, "Member 'EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item, Temp_object_Variable_1) == 0x000030, "Member 'EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item, K2Node_DynamicCast_AsTexture_2D_1) == 0x000038, "Member 'EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item::K2Node_DynamicCast_AsTexture_2D_1' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item, K2Node_CustomEvent_TokenId) == 0x000044, "Member 'EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item::K2Node_CustomEvent_TokenId' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000048, "Member 'EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item, CallFunc_GetTokenIconTexture_Texture) == 0x000050, "Member 'EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item::CallFunc_GetTokenIconTexture_Texture' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000078, "Member 'EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item, K2Node_CreateDelegate_OutputDelegate) == 0x00007C, "Member 'EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item, K2Node_CreateDelegate_OutputDelegate_1) == 0x00008C, "Member 'EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function EventShopCashBox_Item.EventShopCashBox_Item_C.LoadTexture
// 0x0004 (0x0004 - 0x0000)
struct EventShopCashBox_Item_C_LoadTexture final
{
public:
	int32                                         TokenID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopCashBox_Item_C_LoadTexture) == 0x000004, "Wrong alignment on EventShopCashBox_Item_C_LoadTexture");
static_assert(sizeof(EventShopCashBox_Item_C_LoadTexture) == 0x000004, "Wrong size on EventShopCashBox_Item_C_LoadTexture");
static_assert(offsetof(EventShopCashBox_Item_C_LoadTexture, TokenID) == 0x000000, "Member 'EventShopCashBox_Item_C_LoadTexture::TokenID' has a wrong offset!");

// Function EventShopCashBox_Item.EventShopCashBox_Item_C.OnLoaded_2719BDBD41C64E94F07F12919BE767BE
// 0x0008 (0x0008 - 0x0000)
struct EventShopCashBox_Item_C_OnLoaded_2719BDBD41C64E94F07F12919BE767BE final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopCashBox_Item_C_OnLoaded_2719BDBD41C64E94F07F12919BE767BE) == 0x000008, "Wrong alignment on EventShopCashBox_Item_C_OnLoaded_2719BDBD41C64E94F07F12919BE767BE");
static_assert(sizeof(EventShopCashBox_Item_C_OnLoaded_2719BDBD41C64E94F07F12919BE767BE) == 0x000008, "Wrong size on EventShopCashBox_Item_C_OnLoaded_2719BDBD41C64E94F07F12919BE767BE");
static_assert(offsetof(EventShopCashBox_Item_C_OnLoaded_2719BDBD41C64E94F07F12919BE767BE, Loaded) == 0x000000, "Member 'EventShopCashBox_Item_C_OnLoaded_2719BDBD41C64E94F07F12919BE767BE::Loaded' has a wrong offset!");

// Function EventShopCashBox_Item.EventShopCashBox_Item_C.OnLoaded_32A5081B4EB2444CBED5089FF650625A
// 0x0008 (0x0008 - 0x0000)
struct EventShopCashBox_Item_C_OnLoaded_32A5081B4EB2444CBED5089FF650625A final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopCashBox_Item_C_OnLoaded_32A5081B4EB2444CBED5089FF650625A) == 0x000008, "Wrong alignment on EventShopCashBox_Item_C_OnLoaded_32A5081B4EB2444CBED5089FF650625A");
static_assert(sizeof(EventShopCashBox_Item_C_OnLoaded_32A5081B4EB2444CBED5089FF650625A) == 0x000008, "Wrong size on EventShopCashBox_Item_C_OnLoaded_32A5081B4EB2444CBED5089FF650625A");
static_assert(offsetof(EventShopCashBox_Item_C_OnLoaded_32A5081B4EB2444CBED5089FF650625A, Loaded) == 0x000000, "Member 'EventShopCashBox_Item_C_OnLoaded_32A5081B4EB2444CBED5089FF650625A::Loaded' has a wrong offset!");

// Function EventShopCashBox_Item.EventShopCashBox_Item_C.SetAmount
// 0x0028 (0x0028 - 0x0000)
struct EventShopCashBox_Item_C_SetAmount final
{
public:
	int32                                         Amount;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOver;                                            // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63C2[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_Amount;                                          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63C3[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
};
static_assert(alignof(EventShopCashBox_Item_C_SetAmount) == 0x000008, "Wrong alignment on EventShopCashBox_Item_C_SetAmount");
static_assert(sizeof(EventShopCashBox_Item_C_SetAmount) == 0x000028, "Wrong size on EventShopCashBox_Item_C_SetAmount");
static_assert(offsetof(EventShopCashBox_Item_C_SetAmount, Amount) == 0x000000, "Member 'EventShopCashBox_Item_C_SetAmount::Amount' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_Item_C_SetAmount, IsOver) == 0x000004, "Member 'EventShopCashBox_Item_C_SetAmount::IsOver' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_Item_C_SetAmount, L_Amount) == 0x000008, "Member 'EventShopCashBox_Item_C_SetAmount::L_Amount' has a wrong offset!");
static_assert(offsetof(EventShopCashBox_Item_C_SetAmount, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'EventShopCashBox_Item_C_SetAmount::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function EventShopCashBox_Item.EventShopCashBox_Item_C.SetIcon
// 0x0004 (0x0004 - 0x0000)
struct EventShopCashBox_Item_C_SetIcon final
{
public:
	int32                                         TokenID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopCashBox_Item_C_SetIcon) == 0x000004, "Wrong alignment on EventShopCashBox_Item_C_SetIcon");
static_assert(sizeof(EventShopCashBox_Item_C_SetIcon) == 0x000004, "Wrong size on EventShopCashBox_Item_C_SetIcon");
static_assert(offsetof(EventShopCashBox_Item_C_SetIcon, TokenID) == 0x000000, "Member 'EventShopCashBox_Item_C_SetIcon::TokenID' has a wrong offset!");

}

