#pragma once

 

// Package: Description_ItemIconL

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Description_ItemIconL.Description_ItemIconL_C
// 0x0020 (0x0298 - 0x0278)
class UDescription_ItemIconL_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ItemId;                                            // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Description_ItemIconL(int32 EntryPoint);
	void SetItem(int32 InItemIndex, bool bUnidentified);
	void OnLoaded_CF191FB34BA71AABA5262489195B3141(class UObject* Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Description_ItemIconL_C">();
	}
	static class UDescription_ItemIconL_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDescription_ItemIconL_C>();
	}
};
static_assert(alignof(UDescription_ItemIconL_C) == 0x000008, "Wrong alignment on UDescription_ItemIconL_C");
static_assert(sizeof(UDescription_ItemIconL_C) == 0x000298, "Wrong size on UDescription_ItemIconL_C");
static_assert(offsetof(UDescription_ItemIconL_C, UberGraphFrame) == 0x000278, "Member 'UDescription_ItemIconL_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDescription_ItemIconL_C, CmnImageThrobber) == 0x000280, "Member 'UDescription_ItemIconL_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(UDescription_ItemIconL_C, Image_0) == 0x000288, "Member 'UDescription_ItemIconL_C::Image_0' has a wrong offset!");
static_assert(offsetof(UDescription_ItemIconL_C, ItemId) == 0x000290, "Member 'UDescription_ItemIconL_C::ItemId' has a wrong offset!");

}

