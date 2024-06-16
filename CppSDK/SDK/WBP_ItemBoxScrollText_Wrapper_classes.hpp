#pragma once

 

// Package: WBP_ItemBoxScrollText_Wrapper

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C
// 0x0038 (0x02B0 - 0x0278)
class UWBP_ItemBoxScrollText_Wrapper_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_ItemBoxScrollText_Bag_C*           WBP_Bag;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxScrollText_Destination_C*   WBP_Destination;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxScrollText_ItemStorage_C*   WBP_ItemStorage;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxScrollText_OtherOne_C*      WBP_Text_Other;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_33;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ViewType;                                          // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_ItemBoxScrollText_Wrapper(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetDestination(const class FText& InText, int32 Param_Index, bool Over, const class FText& OverText);
	void SetItemStorageSingle(const class FText& ItemName, int32 NowNum, int32 MaxNum, int32 ExpectationNam, bool bCanNotLost);
	void SetItemStorageRange(const class FText& ItemName, int32 NowNum, int32 MaxNum, int32 ExpectationNamMin, int32 ExpectationNamMax, bool bCanNotLost);
	void SetBagSingle(int32 NowNum, int32 MaxNum, int32 ExpectationNam);
	void SetBagRange(int32 NowNum, int32 MaxNum, int32 ExpectationNamMax, int32 ExpectationNamMin);
	void SetBagRange_Random(int32 NowNum, int32 MaxNum, int32 MaxAdd);
	void SetTypeOtherOne(const class FText& InNameText, bool bOverlapping);
	void SetTypeOtherMultiple(const class FText& InNameText, const class FText& InNumText, bool bOverlapping);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ItemBoxScrollText_Wrapper_C">();
	}
	static class UWBP_ItemBoxScrollText_Wrapper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ItemBoxScrollText_Wrapper_C>();
	}
};
static_assert(alignof(UWBP_ItemBoxScrollText_Wrapper_C) == 0x000008, "Wrong alignment on UWBP_ItemBoxScrollText_Wrapper_C");
static_assert(sizeof(UWBP_ItemBoxScrollText_Wrapper_C) == 0x0002B0, "Wrong size on UWBP_ItemBoxScrollText_Wrapper_C");
static_assert(offsetof(UWBP_ItemBoxScrollText_Wrapper_C, UberGraphFrame) == 0x000278, "Member 'UWBP_ItemBoxScrollText_Wrapper_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_Wrapper_C, WBP_Bag) == 0x000280, "Member 'UWBP_ItemBoxScrollText_Wrapper_C::WBP_Bag' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_Wrapper_C, WBP_Destination) == 0x000288, "Member 'UWBP_ItemBoxScrollText_Wrapper_C::WBP_Destination' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_Wrapper_C, WBP_ItemStorage) == 0x000290, "Member 'UWBP_ItemBoxScrollText_Wrapper_C::WBP_ItemStorage' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_Wrapper_C, WBP_Text_Other) == 0x000298, "Member 'UWBP_ItemBoxScrollText_Wrapper_C::WBP_Text_Other' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_Wrapper_C, WidgetSwitcher_33) == 0x0002A0, "Member 'UWBP_ItemBoxScrollText_Wrapper_C::WidgetSwitcher_33' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_Wrapper_C, ViewType) == 0x0002A8, "Member 'UWBP_ItemBoxScrollText_Wrapper_C::ViewType' has a wrong offset!");

}

