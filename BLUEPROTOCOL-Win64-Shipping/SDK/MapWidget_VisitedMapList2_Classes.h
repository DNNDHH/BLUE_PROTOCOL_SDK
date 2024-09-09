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
	 * WidgetBlueprintGeneratedClass MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C
	 * Size -> 0x0080 (FullSize[0x0330] - InheritedSize[0x02B0])
	 */
	class UMapWidget_VisitedMapList2_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    CloseAnimation;                                          // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    OpenAnimation;                                           // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBasicPager_C*                                       BasicPager;                                              // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               BtnScreen;                                               // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CPPage;                                                  // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUniformGridPanel*                                   UniformGridPanel;                                        // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnListItemClicked;                                       // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class FString>                                      MapIds;                                                  // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              CurrentMapId;                                            // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    ViewPage;                                                // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxPage;                                                 // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		int32_t GetViewCount();
		void ChangeFaceImageTexture(class UTexture2DDynamic* Texture);
		void PageChange(int32_t Page);
		void Setup(TArray<class FString>* InMapIds, const class FString& InCurrentId);
		void ResetListItem();
		void SetupListItem();
		void Close();
		void Open();
		void BindListItem(class UMapWidget_VisitedMapList2Item_C* Target);
		void UnbindListItem(class UMapWidget_VisitedMapList2Item_C* Target);
		void OnListItemClickedEvent(const class FString& InMapId);
		void Destruct();
		void OnPress_Cancel();
		void BndEvt__MapWidget_VisitedMapList2_BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void BndEvt__MapWidget_VisitedMapList2_BasicPager_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature(int32_t Page);
		void Construct();
		void ExecuteUbergraph_MapWidget_VisitedMapList2(int32_t EntryPoint);
		void OnClose__DelegateSignature();
		void OnListItemClicked__DelegateSignature(const class FString& InMapId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
