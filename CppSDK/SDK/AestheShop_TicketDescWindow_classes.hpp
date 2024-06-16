#pragma once

 

// Package: AestheShop_TicketDescWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "E_AestheShop_TopMenuItems_DetailSettings_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C
// 0x0088 (0x0300 - 0x0278)
class UAestheShop_TicketDescWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_1;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CourseIconL;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridPanelForCategoryIcons;                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineV02;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineV03;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineV04;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TicketTokenIcon;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtCourseDesc;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtCourseName;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtHoldTicketNum;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtTicketName;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtUseTicketNum;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<bool>                                  CategoryIconAvailableList;                         // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         CategoryCnt;                                       // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CategoryIconListColumnMax;                         // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CourseId;                                          // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AestheShop_TicketDescWindow(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Setup(int32 InCourseId, TArray<struct FSBCharacterToken>& InHoldTicketTokens);
	void SetCourseIconTexture(TSoftObjectPtr<class UTexture2D> InIconTexture);
	void SetCourseName(const class FText& InNameText);
	void SetCourseDesc(const class FText& InCourseDesc);
	void SetTicketName(const class FText& InTicketName);
	void SetUseTicketNum(int32 InUseTicketNum);
	void SetHoldTicketNum(int32 InHoldTicketNum);
	void UpdateAvailableCategoryIcons(const struct FSBAestheShopCourseMasterData& InAestheCourseMaster);
	void SetTicketTokenIconTexture(int32 InTokenId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AestheShop_TicketDescWindow_C">();
	}
	static class UAestheShop_TicketDescWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAestheShop_TicketDescWindow_C>();
	}
};
static_assert(alignof(UAestheShop_TicketDescWindow_C) == 0x000008, "Wrong alignment on UAestheShop_TicketDescWindow_C");
static_assert(sizeof(UAestheShop_TicketDescWindow_C) == 0x000300, "Wrong size on UAestheShop_TicketDescWindow_C");
static_assert(offsetof(UAestheShop_TicketDescWindow_C, UberGraphFrame) == 0x000278, "Member 'UAestheShop_TicketDescWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketDescWindow_C, CanvasPanel_1) == 0x000280, "Member 'UAestheShop_TicketDescWindow_C::CanvasPanel_1' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketDescWindow_C, CourseIconL) == 0x000288, "Member 'UAestheShop_TicketDescWindow_C::CourseIconL' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketDescWindow_C, GridPanelForCategoryIcons) == 0x000290, "Member 'UAestheShop_TicketDescWindow_C::GridPanelForCategoryIcons' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketDescWindow_C, LineV02) == 0x000298, "Member 'UAestheShop_TicketDescWindow_C::LineV02' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketDescWindow_C, LineV03) == 0x0002A0, "Member 'UAestheShop_TicketDescWindow_C::LineV03' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketDescWindow_C, LineV04) == 0x0002A8, "Member 'UAestheShop_TicketDescWindow_C::LineV04' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketDescWindow_C, TicketTokenIcon) == 0x0002B0, "Member 'UAestheShop_TicketDescWindow_C::TicketTokenIcon' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketDescWindow_C, TxtCourseDesc) == 0x0002B8, "Member 'UAestheShop_TicketDescWindow_C::TxtCourseDesc' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketDescWindow_C, TxtCourseName) == 0x0002C0, "Member 'UAestheShop_TicketDescWindow_C::TxtCourseName' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketDescWindow_C, TxtHoldTicketNum) == 0x0002C8, "Member 'UAestheShop_TicketDescWindow_C::TxtHoldTicketNum' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketDescWindow_C, TxtTicketName) == 0x0002D0, "Member 'UAestheShop_TicketDescWindow_C::TxtTicketName' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketDescWindow_C, TxtUseTicketNum) == 0x0002D8, "Member 'UAestheShop_TicketDescWindow_C::TxtUseTicketNum' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketDescWindow_C, CategoryIconAvailableList) == 0x0002E0, "Member 'UAestheShop_TicketDescWindow_C::CategoryIconAvailableList' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketDescWindow_C, CategoryCnt) == 0x0002F0, "Member 'UAestheShop_TicketDescWindow_C::CategoryCnt' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketDescWindow_C, CategoryIconListColumnMax) == 0x0002F4, "Member 'UAestheShop_TicketDescWindow_C::CategoryIconListColumnMax' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketDescWindow_C, CourseId) == 0x0002F8, "Member 'UAestheShop_TicketDescWindow_C::CourseId' has a wrong offset!");

}

