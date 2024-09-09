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
	 * WidgetBlueprintGeneratedClass WholeMapWidget.WholeMapWidget_C
	 * Size -> 0x0048 (FullSize[0x0400] - InheritedSize[0x03B8])
	 */
	class UWholeMapWidget_C : public USBWholeMap
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Out;                                                     // 0x03C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    In;                                                      // 0x03C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UMapTraverseList_C*                                  MapTraverseList;                                         // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMapEditWindow_C*                                    EditWindow;                                              // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnOpenEditWindow;                                        // 0x03E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCloseEditWindow;                                       // 0x03F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetDebugTraverseList();
		void OnOpen();
		void PlayAnimOut();
		void PlayAnimIn();
		void OnSetOptionEditMode();
		void OnDeleteWholeMapEditWindow();
		void OnCreateWholeMapEditWindow();
		void OnUnbind();
		void OnBind();
		void OnLoaded_2CCDB2684036170C3D919597C7222B2A(class UObject* Loaded);
		void BindVisibleSettingChangeDelegate();
		void UIVisibleSettingChangeDelegate_Event_1(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void UnbindVisibleSettingChangeDelegate();
		void BindTraverseDelegate();
		void UnbindTraverseDelegate();
		void UpdateTraverse(int32_t RetCode);
		void OpenEditWindow();
		void OnZoom(float Zoom);
		void OnBGAlphaChanged(float Value);
		void OnIconSizeChanged(float Value);
		void OnWindowSizeChanged(int32_t Number);
		void CloseEditWindow();
		void OnReset();
		void OnInAnim();
		void OnOutAnim();
		void OnPinChecked(bool IsChecked);
		void BindEdit();
		void UnbindEdit();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void LoadBG();
		void ExecuteUbergraph_WholeMapWidget(int32_t EntryPoint);
		void OnCloseEditWindow__DelegateSignature();
		void OnOpenEditWindow__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
