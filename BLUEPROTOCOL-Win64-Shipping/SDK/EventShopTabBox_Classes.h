#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass EventShopTabBox.EventShopTabBox_C
	 * Size -> 0x0091 (FullSize[0x0309] - InheritedSize[0x0278])
	 */
	class UEventShopTabBox_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UEventShopTabBox_Banner_C*                           Banner1;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEventShopTabBox_Banner_C*                           Banner2;                                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEventShopTabBox_Banner_C*                           Banner3;                                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        EffectGrp;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_Next;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_Prev;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        SelectFrame;                                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClickBanner;                                           // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    PageMax;                                                 // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    HeaderPageIndex;                                         // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BannerMax;                                               // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectEventId;                                           // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectBannerId;                                          // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O7NN[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEventShopTabBox_Banner_C*                           SelectBanner;                                            // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSBEventShopMasterData>                      List_Event;                                              // 0x02E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UEventShopTabBox_Banner_C*>                   TagList;                                                 // 0x02F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       Blocked;                                                 // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BtnLocked(bool locked);
		void CheckPagerBtn();
		void SetBannerSelect(class UEventShopTabBox_Banner_C* Banner, bool Force);
		void SetBannerEnable();
		void UpdateBannerInfo();
		void UpdateTabInfo(bool Prev, bool Next, int32_t Click);
		void CreateEventList(TArray<struct FSBEventShopMasterData>* EventList);
		void Initialize();
		void BndEvt__SBButton_Prev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SBButton_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__EventShopTabBox_Banner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void BndEvt__Banner2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
		void BndEvt__Banner3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
		void BndEvt__Banner1_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature();
		void BndEvt__Banner2_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature();
		void BndEvt__Banner3_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature();
		void BndEvt__Banner1_K2Node_ComponentBoundEvent_8_OnUnHovered__DelegateSignature();
		void BndEvt__Banner2_K2Node_ComponentBoundEvent_9_OnUnHovered__DelegateSignature();
		void BndEvt__Banner3_K2Node_ComponentBoundEvent_10_OnUnHovered__DelegateSignature();
		void Construct();
		void ExecuteUbergraph_EventShopTabBox(int32_t EntryPoint);
		void OnClickBanner__DelegateSignature(int32_t Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
