#pragma once

 

// Package: NeedItemList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NeedItemList.NeedItemList_C
// 0x0030 (0x02A8 - 0x0278)
class UNeedItemList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ImageVLineWhite01;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageVLineWhite02;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             NeedItemList;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SizeGrp;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Height;                                            // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Width;                                             // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_NeedItemList(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Clear();
	void Add(const struct FCraftNeedItems& InCraftNeedItems, bool* OutIsCraftable);
	void AddDry(int32 DryItemCnt);
	void SetBgSize(const struct FVector2D& SizeXY);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NeedItemList_C">();
	}
	static class UNeedItemList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeedItemList_C>();
	}
};
static_assert(alignof(UNeedItemList_C) == 0x000008, "Wrong alignment on UNeedItemList_C");
static_assert(sizeof(UNeedItemList_C) == 0x0002A8, "Wrong size on UNeedItemList_C");
static_assert(offsetof(UNeedItemList_C, UberGraphFrame) == 0x000278, "Member 'UNeedItemList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNeedItemList_C, ImageVLineWhite01) == 0x000280, "Member 'UNeedItemList_C::ImageVLineWhite01' has a wrong offset!");
static_assert(offsetof(UNeedItemList_C, ImageVLineWhite02) == 0x000288, "Member 'UNeedItemList_C::ImageVLineWhite02' has a wrong offset!");
static_assert(offsetof(UNeedItemList_C, NeedItemList) == 0x000290, "Member 'UNeedItemList_C::NeedItemList' has a wrong offset!");
static_assert(offsetof(UNeedItemList_C, SizeGrp) == 0x000298, "Member 'UNeedItemList_C::SizeGrp' has a wrong offset!");
static_assert(offsetof(UNeedItemList_C, Height) == 0x0002A0, "Member 'UNeedItemList_C::Height' has a wrong offset!");
static_assert(offsetof(UNeedItemList_C, Width) == 0x0002A4, "Member 'UNeedItemList_C::Width' has a wrong offset!");

}

