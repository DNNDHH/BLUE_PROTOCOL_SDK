#pragma once

 

// Package: EventShopTokenBox_Item

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.ExecuteUbergraph_EventShopTokenBox_Item
// 0x00A0 (0x00A0 - 0x0000)
struct EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F0E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded_1;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F0F[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_1;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D_1;                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F10[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_TokenId;                        // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F11[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetTokenIconTexture_Texture;              // 0x0050(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F12[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_1;            // 0x008C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item) == 0x000008, "Wrong alignment on EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item");
static_assert(sizeof(EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item) == 0x0000A0, "Wrong size on EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item");
static_assert(offsetof(EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item, EntryPoint) == 0x000000, "Member 'EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item, K2Node_CustomEvent_Loaded_1) == 0x000008, "Member 'EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item, Temp_object_Variable) == 0x000010, "Member 'EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item, K2Node_DynamicCast_AsTexture_2D) == 0x000018, "Member 'EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item, K2Node_CustomEvent_Loaded) == 0x000028, "Member 'EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item, Temp_object_Variable_1) == 0x000030, "Member 'EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item, K2Node_DynamicCast_AsTexture_2D_1) == 0x000038, "Member 'EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item::K2Node_DynamicCast_AsTexture_2D_1' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item, K2Node_CustomEvent_TokenId) == 0x000044, "Member 'EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item::K2Node_CustomEvent_TokenId' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000048, "Member 'EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item, CallFunc_GetTokenIconTexture_Texture) == 0x000050, "Member 'EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item::CallFunc_GetTokenIconTexture_Texture' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000078, "Member 'EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item, K2Node_CreateDelegate_OutputDelegate) == 0x00007C, "Member 'EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item, K2Node_CreateDelegate_OutputDelegate_1) == 0x00008C, "Member 'EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.LoadTexture
// 0x0004 (0x0004 - 0x0000)
struct EventShopTokenBox_Item_C_LoadTexture final
{
public:
	int32                                         Param_TokenID;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopTokenBox_Item_C_LoadTexture) == 0x000004, "Wrong alignment on EventShopTokenBox_Item_C_LoadTexture");
static_assert(sizeof(EventShopTokenBox_Item_C_LoadTexture) == 0x000004, "Wrong size on EventShopTokenBox_Item_C_LoadTexture");
static_assert(offsetof(EventShopTokenBox_Item_C_LoadTexture, Param_TokenID) == 0x000000, "Member 'EventShopTokenBox_Item_C_LoadTexture::Param_TokenID' has a wrong offset!");

// Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.OnLoaded_53B3EE9042FEBAA5C204CDBAEC180C84
// 0x0008 (0x0008 - 0x0000)
struct EventShopTokenBox_Item_C_OnLoaded_53B3EE9042FEBAA5C204CDBAEC180C84 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopTokenBox_Item_C_OnLoaded_53B3EE9042FEBAA5C204CDBAEC180C84) == 0x000008, "Wrong alignment on EventShopTokenBox_Item_C_OnLoaded_53B3EE9042FEBAA5C204CDBAEC180C84");
static_assert(sizeof(EventShopTokenBox_Item_C_OnLoaded_53B3EE9042FEBAA5C204CDBAEC180C84) == 0x000008, "Wrong size on EventShopTokenBox_Item_C_OnLoaded_53B3EE9042FEBAA5C204CDBAEC180C84");
static_assert(offsetof(EventShopTokenBox_Item_C_OnLoaded_53B3EE9042FEBAA5C204CDBAEC180C84, Loaded) == 0x000000, "Member 'EventShopTokenBox_Item_C_OnLoaded_53B3EE9042FEBAA5C204CDBAEC180C84::Loaded' has a wrong offset!");

// Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.OnLoaded_B6C13B804169678F239B7791E3D3E1F9
// 0x0008 (0x0008 - 0x0000)
struct EventShopTokenBox_Item_C_OnLoaded_B6C13B804169678F239B7791E3D3E1F9 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopTokenBox_Item_C_OnLoaded_B6C13B804169678F239B7791E3D3E1F9) == 0x000008, "Wrong alignment on EventShopTokenBox_Item_C_OnLoaded_B6C13B804169678F239B7791E3D3E1F9");
static_assert(sizeof(EventShopTokenBox_Item_C_OnLoaded_B6C13B804169678F239B7791E3D3E1F9) == 0x000008, "Wrong size on EventShopTokenBox_Item_C_OnLoaded_B6C13B804169678F239B7791E3D3E1F9");
static_assert(offsetof(EventShopTokenBox_Item_C_OnLoaded_B6C13B804169678F239B7791E3D3E1F9, Loaded) == 0x000000, "Member 'EventShopTokenBox_Item_C_OnLoaded_B6C13B804169678F239B7791E3D3E1F9::Loaded' has a wrong offset!");

// Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.SetAmount
// 0x0020 (0x0020 - 0x0000)
struct EventShopTokenBox_Item_C_SetAmount final
{
public:
	int32                                         Param_Amount;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F13[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(EventShopTokenBox_Item_C_SetAmount) == 0x000008, "Wrong alignment on EventShopTokenBox_Item_C_SetAmount");
static_assert(sizeof(EventShopTokenBox_Item_C_SetAmount) == 0x000020, "Wrong size on EventShopTokenBox_Item_C_SetAmount");
static_assert(offsetof(EventShopTokenBox_Item_C_SetAmount, Param_Amount) == 0x000000, "Member 'EventShopTokenBox_Item_C_SetAmount::Param_Amount' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_SetAmount, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'EventShopTokenBox_Item_C_SetAmount::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.SetIcon
// 0x0004 (0x0004 - 0x0000)
struct EventShopTokenBox_Item_C_SetIcon final
{
public:
	int32                                         Param_TokenID;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopTokenBox_Item_C_SetIcon) == 0x000004, "Wrong alignment on EventShopTokenBox_Item_C_SetIcon");
static_assert(sizeof(EventShopTokenBox_Item_C_SetIcon) == 0x000004, "Wrong size on EventShopTokenBox_Item_C_SetIcon");
static_assert(offsetof(EventShopTokenBox_Item_C_SetIcon, Param_TokenID) == 0x000000, "Member 'EventShopTokenBox_Item_C_SetIcon::Param_TokenID' has a wrong offset!");

// Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.SubAmount
// 0x0020 (0x0020 - 0x0000)
struct EventShopTokenBox_Item_C_SubAmount final
{
public:
	int32                                         Param_Amount;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(EventShopTokenBox_Item_C_SubAmount) == 0x000008, "Wrong alignment on EventShopTokenBox_Item_C_SubAmount");
static_assert(sizeof(EventShopTokenBox_Item_C_SubAmount) == 0x000020, "Wrong size on EventShopTokenBox_Item_C_SubAmount");
static_assert(offsetof(EventShopTokenBox_Item_C_SubAmount, Param_Amount) == 0x000000, "Member 'EventShopTokenBox_Item_C_SubAmount::Param_Amount' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_SubAmount, CallFunc_Subtract_IntInt_ReturnValue) == 0x000004, "Member 'EventShopTokenBox_Item_C_SubAmount::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_SubAmount, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'EventShopTokenBox_Item_C_SubAmount::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.CheckAmount
// 0x0088 (0x0088 - 0x0000)
struct EventShopTokenBox_Item_C_CheckAmount final
{
public:
	int32                                         Param_Amount;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F14[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            CallFunc_GetImpossibleColor_ReturnValue;           // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0030(0x0028)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F15[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0060(0x0028)()
};
static_assert(alignof(EventShopTokenBox_Item_C_CheckAmount) == 0x000008, "Wrong alignment on EventShopTokenBox_Item_C_CheckAmount");
static_assert(sizeof(EventShopTokenBox_Item_C_CheckAmount) == 0x000088, "Wrong size on EventShopTokenBox_Item_C_CheckAmount");
static_assert(offsetof(EventShopTokenBox_Item_C_CheckAmount, Param_Amount) == 0x000000, "Member 'EventShopTokenBox_Item_C_CheckAmount::Param_Amount' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_CheckAmount, Temp_bool_Variable) == 0x000004, "Member 'EventShopTokenBox_Item_C_CheckAmount::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_CheckAmount, CallFunc_GetImpossibleColor_ReturnValue) == 0x000008, "Member 'EventShopTokenBox_Item_C_CheckAmount::CallFunc_GetImpossibleColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_CheckAmount, K2Node_MakeStruct_SlateColor) == 0x000030, "Member 'EventShopTokenBox_Item_C_CheckAmount::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_CheckAmount, CallFunc_Greater_IntInt_ReturnValue) == 0x000058, "Member 'EventShopTokenBox_Item_C_CheckAmount::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTokenBox_Item_C_CheckAmount, K2Node_Select_Default) == 0x000060, "Member 'EventShopTokenBox_Item_C_CheckAmount::K2Node_Select_Default' has a wrong offset!");

}

