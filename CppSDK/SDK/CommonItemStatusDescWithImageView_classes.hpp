#pragma once

 

// Package: CommonItemStatusDescWithImageView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonItemStatusDescWithImageView.CommonItemStatusDescWithImageView_C
// 0x0128 (0x03A0 - 0x0278)
class UCommonItemStatusDescWithImageView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonEquipmentStatusDescBase_C*       Base;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BaseGrp;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonEquipmentBasicItemStatusParts_C* CommonEquipmentBasicItemStatusParts;               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DescGrp;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Item;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              WindowSize;                                        // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Recepi_Id;                                         // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1411[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        SelectedItemMasterData;                            // 0x02B8(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IconLoading;                                       // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1412[0x3];                                     // 0x0389(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Out_Item_Id;                                       // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             RequestShowRateDialog;                             // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void RequestShowRateDialog__DelegateSignature();
	void ExecuteUbergraph_CommonItemStatusDescWithImageView(int32 EntryPoint);
	void BndEvt__CommonItemStatusDescWithImageView_CommonEquipmentBasicItemStatusParts_K2Node_ComponentBoundEvent_0_Request_ShowRate__DelegateSignature();
	void LoadImage();
	void SetRecepiData(int32 RecepiId);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnLoaded_6BB247B74447304424888C8D6990408A(class UObject* Loaded);
	void SetRateButtonView(bool bVisible);
	void SetCraftNumView(bool Param_Visibility, int32 CraftCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonItemStatusDescWithImageView_C">();
	}
	static class UCommonItemStatusDescWithImageView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonItemStatusDescWithImageView_C>();
	}
};
static_assert(alignof(UCommonItemStatusDescWithImageView_C) == 0x000008, "Wrong alignment on UCommonItemStatusDescWithImageView_C");
static_assert(sizeof(UCommonItemStatusDescWithImageView_C) == 0x0003A0, "Wrong size on UCommonItemStatusDescWithImageView_C");
static_assert(offsetof(UCommonItemStatusDescWithImageView_C, UberGraphFrame) == 0x000278, "Member 'UCommonItemStatusDescWithImageView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonItemStatusDescWithImageView_C, Base) == 0x000280, "Member 'UCommonItemStatusDescWithImageView_C::Base' has a wrong offset!");
static_assert(offsetof(UCommonItemStatusDescWithImageView_C, BaseGrp) == 0x000288, "Member 'UCommonItemStatusDescWithImageView_C::BaseGrp' has a wrong offset!");
static_assert(offsetof(UCommonItemStatusDescWithImageView_C, CommonEquipmentBasicItemStatusParts) == 0x000290, "Member 'UCommonItemStatusDescWithImageView_C::CommonEquipmentBasicItemStatusParts' has a wrong offset!");
static_assert(offsetof(UCommonItemStatusDescWithImageView_C, DescGrp) == 0x000298, "Member 'UCommonItemStatusDescWithImageView_C::DescGrp' has a wrong offset!");
static_assert(offsetof(UCommonItemStatusDescWithImageView_C, Img_Item) == 0x0002A0, "Member 'UCommonItemStatusDescWithImageView_C::Img_Item' has a wrong offset!");
static_assert(offsetof(UCommonItemStatusDescWithImageView_C, WindowSize) == 0x0002A8, "Member 'UCommonItemStatusDescWithImageView_C::WindowSize' has a wrong offset!");
static_assert(offsetof(UCommonItemStatusDescWithImageView_C, Recepi_Id) == 0x0002B0, "Member 'UCommonItemStatusDescWithImageView_C::Recepi_Id' has a wrong offset!");
static_assert(offsetof(UCommonItemStatusDescWithImageView_C, SelectedItemMasterData) == 0x0002B8, "Member 'UCommonItemStatusDescWithImageView_C::SelectedItemMasterData' has a wrong offset!");
static_assert(offsetof(UCommonItemStatusDescWithImageView_C, IconLoading) == 0x000388, "Member 'UCommonItemStatusDescWithImageView_C::IconLoading' has a wrong offset!");
static_assert(offsetof(UCommonItemStatusDescWithImageView_C, Out_Item_Id) == 0x00038C, "Member 'UCommonItemStatusDescWithImageView_C::Out_Item_Id' has a wrong offset!");
static_assert(offsetof(UCommonItemStatusDescWithImageView_C, RequestShowRateDialog) == 0x000390, "Member 'UCommonItemStatusDescWithImageView_C::RequestShowRateDialog' has a wrong offset!");

}

