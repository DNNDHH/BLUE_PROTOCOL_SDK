#pragma once

 

// Package: IconDxBattle_Supplier

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconDxBattle_Supplier.IconDxBattle_Supplier_C
// 0x0020 (0x02B8 - 0x0298)
class UIconDxBattle_Supplier_C final : public USBMapIcon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimCircle;                                        // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Root;                                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsInSide_0;                                        // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_IconDxBattle_Supplier(int32 EntryPoint);
	void Construct();
	void OnSetInside(bool IsInSide);
	void PlayAnimCircle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconDxBattle_Supplier_C">();
	}
	static class UIconDxBattle_Supplier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconDxBattle_Supplier_C>();
	}
};
static_assert(alignof(UIconDxBattle_Supplier_C) == 0x000008, "Wrong alignment on UIconDxBattle_Supplier_C");
static_assert(sizeof(UIconDxBattle_Supplier_C) == 0x0002B8, "Wrong size on UIconDxBattle_Supplier_C");
static_assert(offsetof(UIconDxBattle_Supplier_C, UberGraphFrame) == 0x000298, "Member 'UIconDxBattle_Supplier_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UIconDxBattle_Supplier_C, AnimCircle) == 0x0002A0, "Member 'UIconDxBattle_Supplier_C::AnimCircle' has a wrong offset!");
static_assert(offsetof(UIconDxBattle_Supplier_C, Root) == 0x0002A8, "Member 'UIconDxBattle_Supplier_C::Root' has a wrong offset!");
static_assert(offsetof(UIconDxBattle_Supplier_C, IsInSide_0) == 0x0002B0, "Member 'UIconDxBattle_Supplier_C::IsInSide_0' has a wrong offset!");

}

