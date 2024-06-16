#pragma once

 

// Package: EventShopCheckList_Destination

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EventShopCheckList_DestType_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventShopCheckList_Destination.EventShopCheckList_Destination_C
// 0x0068 (0x02E0 - 0x0278)
class UEventShopCheckList_Destination_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Box_Over;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_EquipBag;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_EquipStorage;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Exclamation;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_ItemBag;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_ItemStorage;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Other;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Line;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Comment;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Over;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        TypeSwitcher;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EventShopCheckList_DestType                   DestType;                                          // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EventShopCheckList_Destination(int32 EntryPoint);
	void Construct();
	void SetIsOver();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventShopCheckList_Destination_C">();
	}
	static class UEventShopCheckList_Destination_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventShopCheckList_Destination_C>();
	}
};
static_assert(alignof(UEventShopCheckList_Destination_C) == 0x000008, "Wrong alignment on UEventShopCheckList_Destination_C");
static_assert(sizeof(UEventShopCheckList_Destination_C) == 0x0002E0, "Wrong size on UEventShopCheckList_Destination_C");
static_assert(offsetof(UEventShopCheckList_Destination_C, UberGraphFrame) == 0x000278, "Member 'UEventShopCheckList_Destination_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Destination_C, Box_Over) == 0x000280, "Member 'UEventShopCheckList_Destination_C::Box_Over' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Destination_C, Icon_EquipBag) == 0x000288, "Member 'UEventShopCheckList_Destination_C::Icon_EquipBag' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Destination_C, Icon_EquipStorage) == 0x000290, "Member 'UEventShopCheckList_Destination_C::Icon_EquipStorage' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Destination_C, Icon_Exclamation) == 0x000298, "Member 'UEventShopCheckList_Destination_C::Icon_Exclamation' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Destination_C, Icon_ItemBag) == 0x0002A0, "Member 'UEventShopCheckList_Destination_C::Icon_ItemBag' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Destination_C, Icon_ItemStorage) == 0x0002A8, "Member 'UEventShopCheckList_Destination_C::Icon_ItemStorage' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Destination_C, Icon_Other) == 0x0002B0, "Member 'UEventShopCheckList_Destination_C::Icon_Other' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Destination_C, Img_Line) == 0x0002B8, "Member 'UEventShopCheckList_Destination_C::Img_Line' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Destination_C, Txt_Comment) == 0x0002C0, "Member 'UEventShopCheckList_Destination_C::Txt_Comment' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Destination_C, Txt_Over) == 0x0002C8, "Member 'UEventShopCheckList_Destination_C::Txt_Over' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Destination_C, TypeSwitcher) == 0x0002D0, "Member 'UEventShopCheckList_Destination_C::TypeSwitcher' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Destination_C, DestType) == 0x0002D8, "Member 'UEventShopCheckList_Destination_C::DestType' has a wrong offset!");

}

