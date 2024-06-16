#pragma once

 

// Package: ItemSelectorIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemSelectorIcon.ItemSelectorIcon_C
// 0x0058 (0x02D0 - 0x0278)
class UItemSelectorIcon_C final : public USBItemSelectorIcon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ScaleDown;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ScaleUp;                                           // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MoveRight_3;                                       // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MoveLeft_3;                                        // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MoveRight_2;                                       // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MoveLeft_2;                                        // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MoveUpDown;                                        // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MoveRight;                                         // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MoveLeft;                                          // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemSelectorIcon(int32 EntryPoint);
	void WidgetAnimationEvt_MoveUpDown_K2Node_WidgetAnimationEvent_0();
	void Construct();
	void PlayAnimationUp();
	void PlayAnimationDown();
	void Setup(int32 InItemIndex, int32 InAmount);
	void Empty();
	void PlayAnimationLeft();
	void PlayAnimationRight();
	void PlayAnimationScaleUp();
	void PlayAnimationScaleDown();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemSelectorIcon_C">();
	}
	static class UItemSelectorIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemSelectorIcon_C>();
	}
};
static_assert(alignof(UItemSelectorIcon_C) == 0x000008, "Wrong alignment on UItemSelectorIcon_C");
static_assert(sizeof(UItemSelectorIcon_C) == 0x0002D0, "Wrong size on UItemSelectorIcon_C");
static_assert(offsetof(UItemSelectorIcon_C, UberGraphFrame) == 0x000278, "Member 'UItemSelectorIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemSelectorIcon_C, ScaleDown) == 0x000280, "Member 'UItemSelectorIcon_C::ScaleDown' has a wrong offset!");
static_assert(offsetof(UItemSelectorIcon_C, ScaleUp) == 0x000288, "Member 'UItemSelectorIcon_C::ScaleUp' has a wrong offset!");
static_assert(offsetof(UItemSelectorIcon_C, MoveRight_3) == 0x000290, "Member 'UItemSelectorIcon_C::MoveRight_3' has a wrong offset!");
static_assert(offsetof(UItemSelectorIcon_C, MoveLeft_3) == 0x000298, "Member 'UItemSelectorIcon_C::MoveLeft_3' has a wrong offset!");
static_assert(offsetof(UItemSelectorIcon_C, MoveRight_2) == 0x0002A0, "Member 'UItemSelectorIcon_C::MoveRight_2' has a wrong offset!");
static_assert(offsetof(UItemSelectorIcon_C, MoveLeft_2) == 0x0002A8, "Member 'UItemSelectorIcon_C::MoveLeft_2' has a wrong offset!");
static_assert(offsetof(UItemSelectorIcon_C, MoveUpDown) == 0x0002B0, "Member 'UItemSelectorIcon_C::MoveUpDown' has a wrong offset!");
static_assert(offsetof(UItemSelectorIcon_C, MoveRight) == 0x0002B8, "Member 'UItemSelectorIcon_C::MoveRight' has a wrong offset!");
static_assert(offsetof(UItemSelectorIcon_C, MoveLeft) == 0x0002C0, "Member 'UItemSelectorIcon_C::MoveLeft' has a wrong offset!");
static_assert(offsetof(UItemSelectorIcon_C, CommonIcon) == 0x0002C8, "Member 'UItemSelectorIcon_C::CommonIcon' has a wrong offset!");

}

