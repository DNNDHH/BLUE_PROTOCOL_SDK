#pragma once

 

// Package: EventShopTokenBox_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventShopTokenBox_Item.EventShopTokenBox_Item_C
// 0x0038 (0x02B0 - 0x0278)
class UEventShopTokenBox_Item_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Amount;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Token_Icon;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TokenID;                                           // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterToken                      Struct_Ref;                                        // 0x02A0(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_EventShopTokenBox_Item(int32 EntryPoint);
	void LoadTexture(int32 Param_TokenID);
	void OnLoaded_53B3EE9042FEBAA5C204CDBAEC180C84(class UObject* Loaded);
	void OnLoaded_B6C13B804169678F239B7791E3D3E1F9(class UObject* Loaded);
	void SetAmount(int32 Param_Amount);
	void SetIcon(int32 Param_TokenID);
	void SubAmount(int32 Param_Amount);
	void CheckAmount(int32 Param_Amount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventShopTokenBox_Item_C">();
	}
	static class UEventShopTokenBox_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventShopTokenBox_Item_C>();
	}
};
static_assert(alignof(UEventShopTokenBox_Item_C) == 0x000008, "Wrong alignment on UEventShopTokenBox_Item_C");
static_assert(sizeof(UEventShopTokenBox_Item_C) == 0x0002B0, "Wrong size on UEventShopTokenBox_Item_C");
static_assert(offsetof(UEventShopTokenBox_Item_C, UberGraphFrame) == 0x000278, "Member 'UEventShopTokenBox_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventShopTokenBox_Item_C, BG) == 0x000280, "Member 'UEventShopTokenBox_Item_C::BG' has a wrong offset!");
static_assert(offsetof(UEventShopTokenBox_Item_C, Label_Amount) == 0x000288, "Member 'UEventShopTokenBox_Item_C::Label_Amount' has a wrong offset!");
static_assert(offsetof(UEventShopTokenBox_Item_C, Token_Icon) == 0x000290, "Member 'UEventShopTokenBox_Item_C::Token_Icon' has a wrong offset!");
static_assert(offsetof(UEventShopTokenBox_Item_C, TokenID) == 0x000298, "Member 'UEventShopTokenBox_Item_C::TokenID' has a wrong offset!");
static_assert(offsetof(UEventShopTokenBox_Item_C, Amount) == 0x00029C, "Member 'UEventShopTokenBox_Item_C::Amount' has a wrong offset!");
static_assert(offsetof(UEventShopTokenBox_Item_C, Struct_Ref) == 0x0002A0, "Member 'UEventShopTokenBox_Item_C::Struct_Ref' has a wrong offset!");

}

