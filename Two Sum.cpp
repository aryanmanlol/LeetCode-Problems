<!DOCTYPE html>
<!-- saved from url=(0156)https://github.com/fengvyi/LeetCode/commit/04d012e5dcccad0a7087e885a83bd6b9872670a4#diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56R10 -->
<html lang="en" data-color-mode="auto" data-light-theme="light" data-dark-theme="dark" data-a11y-animated-images="system" data-a11y-link-underlines="true" class="js-focus-visible idc8_343 idc0_343" data-js-focus-visible="" data-turbo-loaded=""><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8"><style type="text/css">.turbo-progress-bar {
  position: fixed;
  display: block;
  top: 0;
  left: 0;
  height: 3px;
  background: #0076ff;
  z-index: 2147483647;
  transition:
    width 300ms ease-out,
    opacity 150ms 150ms ease-in;
  transform: translate3d(0, 0, 0);
}
</style>
    
  <link rel="dns-prefetch" href="https://github.githubassets.com/">
  <link rel="dns-prefetch" href="https://avatars.githubusercontent.com/">
  <link rel="dns-prefetch" href="https://github-cloud.s3.amazonaws.com/">
  <link rel="dns-prefetch" href="https://user-images.githubusercontent.com/">
  <link rel="preconnect" href="https://github.githubassets.com/" crossorigin="">
  <link rel="preconnect" href="https://avatars.githubusercontent.com/">

  


  <link crossorigin="anonymous" media="all" rel="stylesheet" href="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/light-3e154969b9f9.css"><link crossorigin="anonymous" media="all" rel="stylesheet" href="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/dark-9c5b7a476542.css"><link data-color-theme="dark_dimmed" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_dimmed-afda8eb0fb33.css"><link data-color-theme="dark_high_contrast" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_high_contrast-2494e44ccdc5.css"><link data-color-theme="dark_colorblind" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_colorblind-56fff47acadc.css"><link data-color-theme="light_colorblind" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/light_colorblind-71cd4cc132ec.css"><link data-color-theme="light_high_contrast" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/light_high_contrast-fd5499848985.css"><link data-color-theme="light_tritanopia" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/light_tritanopia-31d17ba3e139.css"><link data-color-theme="dark_tritanopia" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_tritanopia-68d6b2c79663.css">
    <link crossorigin="anonymous" media="all" rel="stylesheet" href="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/primer-primitives-4cf0d59ab51a.css">
    <link crossorigin="anonymous" media="all" rel="stylesheet" href="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/primer-fefb1a332c28.css">
    <link crossorigin="anonymous" media="all" rel="stylesheet" href="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/global-91591ed63505.css">
    <link crossorigin="anonymous" media="all" rel="stylesheet" href="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/github-d1e3b63864f7.css">
  <link crossorigin="anonymous" media="all" rel="stylesheet" href="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/repository-0f7cf89e325a.css">
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/code-5fa42525dfce.css">

  


  <script type="application/json" id="client-env">{"locale":"en","featureFlags":["code_vulnerability_scanning","copilot_floating_button","copilot_beta_features_opt_in","copilot_chat_conversation_intent_knowledge_search_skill","copilot_chat_static_thread_suggestions","copilot_conversational_ux_history_refs","copilot_copy_message","copilot_implicit_context","copilot_site_updates_sept17","copilot_site_updates_sept19","copilot_site_updates_sept23","copilot_smell_icebreaker_ux","enterprise_contact_job_title","experimentation_azure_variant_endpoint","failbot_handle_non_errors","geojson_azure_maps","ghost_pilot_confidence_truncation_25","ghost_pilot_confidence_truncation_40","ghost_pilot_div","ghost_pilot_stream_handling","ghost_pilot_undo_fix","hovercard_accessibility","hovercard_longer_activate_timeout","issues_advanced_search","marketing_pages_search_explore_provider","primer_react_css_modules_ga","remove_child_patch","repository_suggester_elastic_search","sample_network_conn_type","site_metered_billing_update","issues_react_first_time_contribution_banner","jk_navigation_in_list_view","ui_commands_respect_modals"],"login":"aryanmanlol"}</script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/wp-runtime-0e5c331c4bf8.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_dompurify_dist_purify_js-b73fdff77a4e.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_oddbird_popover-polyfill_dist_popover_js-56729c905fe2.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_github_arianotify-polyfill_ariaNotify-polyfill_js-node_modules_github_mi-247092-b9c7cf3107b7.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/ui_packages_failbot_failbot_ts-aabfa4ec15fe.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/environment-2f240f7ed1b3.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_primer_behaviors_dist_esm_index_mjs-4aa4b0e95669.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_github_selector-observer_dist_index_esm_js-f690fd9ae3d5.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_github_relative-time-element_dist_index_js-6d3967acd51c.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_github_auto-complete-element_dist_index_js-a164c5ea9f62.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_github_text-expander-element_dist_index_js-e40ed7658a74.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_github_filter-input-element_dist_index_js-node_modules_github_remote-inp-d1a841-8f251a0656e7.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_delegated-events_dist_index_js-node_modules_github_catalyst_lib_index_js-f4b251-f7c3b6081b19.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_github_mini-throttle_dist_index_js-node_modules_stacktrace-parser_dist_s-6b2a62-6fef0f2ad42a.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_github_file-attachment-element_dist_index_js-node_modules_primer_view-co-eb9d54-74622d897749.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/github-elements-36d7dcef5a08.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/element-registry-0825ab2c1649.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_github_catalyst_lib_index_js-node_modules_primer_live-region-element_dis-428401-bb66ac5d7472.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_braintree_browser-detection_dist_browser-detection_js-node_modules_githu-bb80ec-634de60bacfa.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_lit-html_lit-html_js-ce7225a304c5.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_github_hydro-analytics-client_dist_analytics-client_js-node_modules_gith-f3aee1-e6893db9c19e.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_github_mini-throttle_dist_index_js-node_modules_morphdom_dist_morphdom-e-7c534c-f8a5485c982a.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_github_turbo_dist_turbo_es2017-esm_js-858e043fcf76.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_github_remote-form_dist_index_js-node_modules_delegated-events_dist_inde-893f9f-6cf3320416b8.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_scroll-anchoring_dist_scroll-anchoring_esm_js-node_modules_stacktrace-pa-a71630-67856ad29bae.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_color-convert_index_js-0e07cc183eed.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_github_quote-selection_dist_index_js-node_modules_github_session-resume_-9a8cd2-373766bf71f1.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/ui_packages_updatable-content_updatable-content_ts-3f4401350bd7.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/app_assets_modules_github_behaviors_task-list_ts-app_assets_modules_github_sso_ts-ui_packages-900dde-ab87c1d6c5c8.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/app_assets_modules_github_sticky-scroll-into-view_ts-112600808cf9.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/app_assets_modules_github_behaviors_ajax-error_ts-app_assets_modules_github_behaviors_include-d0d0a6-6faacedf87fe.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/app_assets_modules_github_behaviors_commenting_edit_ts-app_assets_modules_github_behaviors_ht-83c235-aeae6fcdf371.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/behaviors-aeaa9d751b57.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_delegated-events_dist_index_js-node_modules_github_catalyst_lib_index_js-06ff531-bf7e5a3732fd.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/notifications-global-54f34167118d.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_virtualized-list_es_index_js-node_modules_github_template-parts_lib_index_js-96453a51f920.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_github_remote-form_dist_index_js-node_modules_github_catalyst_lib_index_-f60689-4f1f989b68bf.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_github_mini-throttle_dist_decorators_js-node_modules_delegated-events_di-e161aa-a6774a3bb897.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/app_assets_modules_github_ref-selector_ts-00df584d9e79.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/app_assets_modules_github_diffs_blob-lines_ts-app_assets_modules_github_diffs_linkable-line-n-b8c0ea-e7cb8759d7c9.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/diffs-81b6d090b6b3.js.download"></script>
  
  <script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/react-lib-7b7b5264f6c1.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_github_mini-throttle_dist_index_js-node_modules_primer_react_lib-esm_Fea-39267a-9ffd541aafbc.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_primer_react_lib-esm_Button_Button_js-f36ad879d477.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_primer_react_lib-esm_TooltipV2_Tooltip_js-e39b44f27fbb.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_primer_react_lib-esm_ActionList_index_js-540a2acf621f.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_primer_react_lib-esm_AnchoredOverlay_AnchoredOverlay_js-86d89e63ab43.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_primer_react_lib-esm_Text_Text_js-node_modules_primer_react_lib-esm_Text-7845da-fcd32c85221a.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_primer_react_lib-esm_FormControl_FormControl_js-88cc5f03ee87.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_primer_react_lib-esm_ActionMenu_ActionMenu_js-1feceec002ca.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_react-router-dom_dist_index_js-c5568c29d405.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_primer_react_lib-esm_FilteredActionList_FilteredActionListEntry_js-a9743c14972c.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_primer_react_lib-esm_ConfirmationDialog_ConfirmationDialog_js-node_modul-c2760e-f5f937d74bc9.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_react-relay_index_js-ec159195f800.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_date-fns_format_mjs-486d100272bc.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_primer_react_lib-esm_Link_Link_js-node_modules_primer_react_lib-esm_Page-7c6288-77cbb6f24761.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_date-fns_addWeeks_mjs-node_modules_date-fns_addYears_mjs-node_modules_da-827f4f-cf37cd06c24f.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_primer_react_lib-esm_KeybindingHint_KeybindingHint_js-node_modules_githu-3fe5e5-779b0a7957e4.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_primer_react_lib-esm_Avatar_Avatar_js-node_modules_primer_react_lib-esm_-ec4271-f0c66bc78be1.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_primer_react_lib-esm_Popover_Popover_js-node_modules_date-fns_getDaysInM-dd25c8-a7407949d3d8.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_primer_react_lib-esm_Button_LinkButton_js-node_modules_primer_react_lib--206e8b-72593a2706f7.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_primer_react_lib-esm_Dialog_js-node_modules_github_hydro-analytics-clien-531545-69a0fdde1ced.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_github_quote-selection_dist_index_js-node_modules_primer_react_lib-esm_A-9d18ab-a852ce400a45.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_primer_react_lib-esm_BranchName_BranchName_js-node_modules_primer_react_-3219ed-2cad74b78e7c.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/ui_packages_react-core_register-app_ts-ui_packages_react-core_JsonRoute_tsx-8206c4ec69d2.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/ui_packages_list-view_src_ListItem_ListItem_tsx-ui_packages_list-view_src_ListItem_Title_tsx--68e5b9-b6723203f971.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/ui_packages_verified-fetch_verified-fetch_ts-ui_packages_item-picker_components_ItemPicker_tsx-90e97e225410.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/ui_packages_date-picker_date-picker_ts-ui_packages_github-avatar_GitHubAvatar_tsx-3c96731c4a12.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/ui_packages_relay-environment_relay-environment_ts-ui_packages_item-picker_components_Reposit-97e2e1-6b6b3e3adf3b.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/ui_packages_issue-create_dialog_CreateIssueDialogEntry_tsx-ae5fa30a0a05.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/ui_packages_ref-selector_RefSelector_tsx-69cea3cdae62.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/ui_packages_analytics-provider_analytics-provider_ts-ui_packages_commenting_hooks_use-markdow-3a16f3-fb25a2237016.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/ui_packages_commit-attribution_index_ts-ui_packages_commit-checks-status_index_ts-ui_packages-8621a7-c8b4ba7bc5d1.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/ui_packages_code-view-shared_hooks_shortcuts_ts-ui_packages_code-view-shared_utilities_web-wo-ad5f08-7abda6218ec0.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/ui_packages_react-core_create-browser-history_ts-ui_packages_commits_shared_Commits_tsx-ui_pa-6cd8ea-0bac7aa8d347.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/commits-72c4f464e662.js.download"></script>
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/primer-react-css.8879c83c1311e6328466.module.css">
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/commits.eaa598c811b908fbd0a7.module.css">


  <title>Create 001. Two Sum.cpp · fengvyi/LeetCode@04d012e</title>



  <meta name="route-pattern" content="/_view_fragments/Voltron::CommitFragmentsController/show/:user_id/:repository/:name/repo_layout(.:format)" data-turbo-transient="">
  <meta name="route-controller" content="commit" data-turbo-transient="">
  <meta name="route-action" content="show" data-turbo-transient="">

    
  <meta name="current-catalog-service-hash" content="f3abb0cc802f3d7b95fc8762b94bdcb13bf39634c40c357301c4aa1d67a256fb">


  <meta name="request-id" content="C6C7:7B7BC:13C3E7E:158699C:66FC5471" data-turbo-transient="true"><meta name="html-safe-nonce" content="9881cb680aa961ba10065a3b79d4d8593ae90a73f4df5d40bc2be019bdf24f77" data-turbo-transient="true"><meta name="visitor-payload" content="eyJyZWZlcnJlciI6Imh0dHBzOi8vZ2l0aHViLmNvbS9mZW5ndnlpL0xlZXRDb2RlL3RyZWUvbWFzdGVyL0MlMkIlMkIiLCJyZXF1ZXN0X2lkIjoiQzZDNzo3QjdCQzoxM0MzRTdFOjE1ODY5OUM6NjZGQzU0NzEiLCJ2aXNpdG9yX2lkIjoiNzAyNDc4Nzg0MDM0NDE3NDE3MSIsInJlZ2lvbl9lZGdlIjoiY2VudHJhbGluZGlhIiwicmVnaW9uX3JlbmRlciI6ImlhZCJ9" data-turbo-transient="true"><meta name="visitor-hmac" content="61160e52561ceb605a3e37c4c326f237c6fa898c48407bb4d1bddcf0db2ef4e2" data-turbo-transient="true">


    <meta name="hovercard-subject-tag" content="repository:99477738" data-turbo-transient="">


  <meta name="github-keyboard-shortcuts" content="repository,commits,copilot" data-turbo-transient="true">
  

  <meta name="selected-link" value="repo_commits" data-turbo-transient="">
  <link rel="assets" href="https://github.githubassets.com/">

    <meta name="google-site-verification" content="Apib7-x98H0j5cPqHWwSMm6dNU4GmODRoqxLiDzdx9I">

<meta name="octolytics-url" content="https://collector.github.com/github/collect"><meta name="octolytics-actor-id" content="156987853"><meta name="octolytics-actor-login" content="aryanmanlol"><meta name="octolytics-actor-hash" content="c6be1ef2b3e962765264651eb89076aa6cb3809039361f75c0c6784e12c3ce55">

  <meta name="analytics-location" content="/&lt;user-name&gt;/&lt;repo-name&gt;/voltron/commit_fragments/repo_layout" data-turbo-transient="true">

  




    <meta name="user-login" content="aryanmanlol">

  <link rel="sudo-modal" href="https://github.com/sessions/sudo_modal">

    <meta name="viewport" content="width=device-width">

    

      <meta name="description" content="My C++ solutions for LeetCode questions. Contribute to fengvyi/LeetCode development by creating an account on GitHub.">

      <link rel="search" type="application/opensearchdescription+xml" href="https://github.com/opensearch.xml" title="GitHub">

    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
    <meta property="fb:app_id" content="1401488693436528">
    <meta name="apple-itunes-app" content="app-id=1477376905, app-argument=https://github.com/_view_fragments/Voltron::CommitFragmentsController/show/fengvyi/LeetCode/04d012e5dcccad0a7087e885a83bd6b9872670a4/repo_layout">

      <meta name="twitter:image" content="https://opengraph.githubassets.com/b9f079e7d8771c92029573579fddabec80e940d8ff63cc6625aabb9a4e9dd816/fengvyi/LeetCode/commit/04d012e5dcccad0a7087e885a83bd6b9872670a4"><meta name="twitter:site" content="@github"><meta name="twitter:card" content="summary_large_image"><meta name="twitter:title" content="Create 001. Two Sum.cpp · fengvyi/LeetCode@04d012e"><meta name="twitter:description" content="">
  <meta property="og:image" content="https://opengraph.githubassets.com/b9f079e7d8771c92029573579fddabec80e940d8ff63cc6625aabb9a4e9dd816/fengvyi/LeetCode/commit/04d012e5dcccad0a7087e885a83bd6b9872670a4"><meta property="og:image:width" content="1200"><meta property="og:image:height" content="600"><meta property="og:site_name" content="GitHub"><meta property="og:type" content="object"><meta property="og:title" content="Create 001. Two Sum.cpp · fengvyi/LeetCode@04d012e"><meta property="og:url" content="/fengvyi/LeetCode/commit/04d012e5dcccad0a7087e885a83bd6b9872670a4"><meta property="og:updated_time" content="1503583640">
  


      <link rel="shared-web-socket" href="wss://alive.github.com/_sockets/u/156987853/ws?session=eyJ2IjoiVjMiLCJ1IjoxNTY5ODc4NTMsInMiOjE0ODE4MTE2MDAsImMiOjIwMTkwMjQ3OTIsInQiOjE3Mjc4MTI3MjJ9--2dc68ec7483c3bdd977a5484bd20e4a7bd43c41abbf6fd9f19f9325336197588" data-refresh-url="/_alive" data-session-id="18657aa1522cdfc40dd9a05548a1d5bcbe2050dd0f76d0d312e219c9bbedb0b8">
      <link rel="shared-web-socket-src" href="https://github.com/assets-cdn/worker/socket-worker-1a9b1a7a6108.js">


      <meta name="hostname" content="github.com">


      <meta name="keyboard-shortcuts-preference" content="all">
      <meta name="hovercards-preference" content="true">

        <meta name="expected-hostname" content="github.com">


  <meta http-equiv="x-pjax-version" content="83591a8140c9e0903467d79c4411194b30911d136cde46d01d73d5b88db988b6" data-turbo-track="reload">
  <meta http-equiv="x-pjax-csp-version" content="0dce51c2e7a33ec0a6fef31a50be00012f72c84aa83f30714a38ae191c3597fd" data-turbo-track="reload">
  <meta http-equiv="x-pjax-css-version" content="f331582217b58aae9500e761176f44b855e8a1d242daa5119ea0f70ddd53bc3c" data-turbo-track="reload">
  <meta http-equiv="x-pjax-js-version" content="2189e0a63e538083fc63555d23a6bb5d2b23a922b3883827d23b926ffc11b38c" data-turbo-track="reload">

    <meta name="turbo-cache-control" content="no-preview" data-turbo-transient="">

      <meta name="turbo-cache-control" content="no-cache" data-turbo-transient="">
    <meta data-hydrostats="publish">
  <meta name="go-import" content="github.com/fengvyi/LeetCode git https://github.com/fengvyi/LeetCode.git">

  <meta name="octolytics-dimension-user_id" content="25286149"><meta name="octolytics-dimension-user_login" content="fengvyi"><meta name="octolytics-dimension-repository_id" content="99477738"><meta name="octolytics-dimension-repository_nwo" content="fengvyi/LeetCode"><meta name="octolytics-dimension-repository_public" content="true"><meta name="octolytics-dimension-repository_is_fork" content="false"><meta name="octolytics-dimension-repository_network_root_id" content="99477738"><meta name="octolytics-dimension-repository_network_root_nwo" content="fengvyi/LeetCode">



    

    <meta name="turbo-body-classes" content="logged-in env-production page-responsive">


  <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">

  <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">

  <link rel="mask-icon" href="https://github.githubassets.com/assets/pinned-octocat-093da3e6fa40.svg" color="#000000">
  <link rel="alternate icon" class="js-site-favicon" type="image/png" href="https://github.githubassets.com/favicons/favicon-dark.png">
  <link rel="icon" class="js-site-favicon" type="image/svg+xml" href="https://github.githubassets.com/favicons/favicon-dark.svg">

<meta name="theme-color" content="#1e2327">



  <link rel="manifest" href="https://github.com/manifest.json" crossorigin="use-credentials">

  <style type="text/css">#page > p[style^="background-color:"][style$="text-align: center;"], #video > p[style^="background-color:"][style*="font-weight: bold;"], .readme-sharing, #cookie-consent-banner, .js-cookie-consent-banner, .repository-content [data-prompt="signup"], .js-newsletter-signup-form, button[data-testid="copilot-popover-button"], .signup-prompt { display: none !important; }</style><style data-styled="active" data-styled-version="5.3.11"></style><style id="ms-consent-banner-main-styles">.w8hcgFksdo30C8w-bygqu{color:#000}.ydkKdaztSS0AeHWIeIHsQ a{color:#0067B8}.erL690_8JwUW-R4bJRcfl{background-color:#EBEBEB;border:none;color:#000}.erL690_8JwUW-R4bJRcfl:enabled:hover{color:#000;background-color:#DBDBDB;box-shadow:0px 4px 10px rgba(0,0,0,0.25);border:none}.erL690_8JwUW-R4bJRcfl:enabled:focus{background-color:#DBDBDB;box-shadow:0px 4px 10px rgba(0,0,0,0.25);border:2px solid #000}.erL690_8JwUW-R4bJRcfl:disabled{opacity:1;color:rgba(0,0,0,0.2);background-color:rgba(0,0,0,0.2);border:none}._1zNQOqxpBFSokeCLGi_hGr{border:none;background-color:#0067B8;color:#fff}._1zNQOqxpBFSokeCLGi_hGr:enabled:hover{color:#fff;background-color:#0067B8;box-shadow:0px 4px 10px rgba(0,0,0,0.25);border:none}._1zNQOqxpBFSokeCLGi_hGr:enabled:focus{background-color:#0067B8;box-shadow:0px 4px 10px rgba(0,0,0,0.25);border:2px solid #000}._1zNQOqxpBFSokeCLGi_hGr:disabled{opacity:1;color:rgba(0,0,0,0.2);background-color:rgba(0,120,215,0.2);border:none}._23tra1HsiiP6cT-Cka-ycB{position:relative;display:flex;z-index:9999;width:100%;background-color:#F2F2F2;justify-content:space-between;text-align:left}div[dir="rtl"]._23tra1HsiiP6cT-Cka-ycB{text-align:right}._1Upc2NjY8AlDn177YoVj0y{margin:0;padding-left:5%;padding-top:8px;padding-bottom:8px}div[dir="rtl"] ._1Upc2NjY8AlDn177YoVj0y{margin:0;padding:8px 5% 8px 0;float:none}._23tra1HsiiP6cT-Cka-ycB svg{fill:none;max-width:none;max-height:none}._1V_hlU-7jdtPiooHMu89BB{display:table-cell;padding:12px;width:24px;height:24px;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:24px;line-height:0}.f6QKJD7fhSbnJLarTL-W-{display:table-cell;vertical-align:middle;padding:0;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:13px;line-height:16px}.f6QKJD7fhSbnJLarTL-W- a{text-decoration:underline}._2j0fmugLb1FgYz6KPuB91w{display:inline-block;margin-left:5%;margin-right:5%;min-width:40%;min-width:calc((150px + 3 * 4px) * 2 + 150px);min-width:-webkit-fit-content;min-width:-moz-fit-content;min-width:fit-content;align-self:center;position:relative}._1XuCi2WhiqeWRUVp3pnFG3{margin:4px;padding:5px;min-width:150px;min-height:36px;vertical-align:top;cursor:pointer;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:15px;line-height:20px;text-align:center}._1XuCi2WhiqeWRUVp3pnFG3:focus{box-sizing:border-box}._1XuCi2WhiqeWRUVp3pnFG3:disabled{cursor:not-allowed}._2bvsb3ubApyZ0UGoQA9O9T{display:block;position:fixed;z-index:10000;top:0;left:0;width:100%;height:100%;background-color:rgba(255,255,255,0.6);overflow:auto;text-align:left}div[dir="rtl"]._2bvsb3ubApyZ0UGoQA9O9T{text-align:right}div[dir="rtl"] ._2bvsb3ubApyZ0UGoQA9O9T{left:auto;right:0}.AFsJE948muYyzCMktdzuk{position:relative;top:8%;margin-bottom:40px;margin-left:auto;margin-right:auto;box-sizing:border-box;width:640px;background-color:#fff;border:1px solid #0067B8}._3kWyBRbW_dgnMiEyx06Fu4{float:right;z-index:1;margin:2px;padding:12px;border:none;cursor:pointer;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:13px;line-height:13px;display:flex;align-items:center;text-align:center;color:#666;background-color:#fff}div[dir="rtl"] ._3kWyBRbW_dgnMiEyx06Fu4{margin:2px;padding:12px;float:left}.uCYvKvHXrhjNgflv1VqdD{position:static;margin-top:36px;margin-left:36px;margin-right:36px}._17pX1m9O_W--iZbDt3Ta5r{margin-top:0;margin-bottom:12px;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:600;font-size:20px;line-height:24px;text-transform:none}._1kBkHQ1V1wu3kl-YcLgUr6{height:446px;overflow:auto}._20_nXDf6uFs9Q6wxRXG-I-{margin-top:0;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:15px;line-height:20px}._20_nXDf6uFs9Q6wxRXG-I- a{text-decoration:underline}dl._2a0NH_GDQEQe5Ynfo7suVH{margin-top:36px;margin-bottom:0;padding:0;list-style:none;text-transform:none}dt._3j_LCPv7fyXv3A8FIXVwZ4{margin-top:20px;float:none;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:600;font-size:18px;line-height:24px;list-style:none}.k-vxTGFbdq1aOZB2HHpjh{margin:0;padding:0;border:none}._2Bucyy75c_ogoU1g-liB5R{margin:0;padding:0;border-bottom:none;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:600;font-size:18px;line-height:24px;text-transform:none}._63gwfzV8dclrsl2cfd90r{display:inline-block;margin-top:0;margin-bottom:13px;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:15px;line-height:20px}._1l8wM_4mRYGz3Iu7l3BZR7{display:block}._2UE03QS02aZGkslegN_F-i{display:inline-block;position:relative;left:5px;margin-bottom:13px;margin-right:34px;padding:3px}div[dir="rtl"] ._2UE03QS02aZGkslegN_F-i{margin:0 0 13px 34px;padding:3px;float:none}div[dir="rtl"] ._2UE03QS02aZGkslegN_F-i{left:auto;right:5px}._23tra1HsiiP6cT-Cka-ycB *::before,._2bvsb3ubApyZ0UGoQA9O9T *::before,._23tra1HsiiP6cT-Cka-ycB *::after,._2bvsb3ubApyZ0UGoQA9O9T *::after{box-sizing:inherit}._1HSFn0HzGo6w4ADApV8-c4{outline:2px solid rgba(0,0,0,0.8)}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2{display:inline-block;position:relative;margin-top:0;margin-left:0;margin-right:0;height:0;width:0;border-radius:0;cursor:pointer;outline:none;box-sizing:border-box;-webkit-appearance:none;-moz-appearance:none;appearance:none}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2+label::before{display:block;position:absolute;top:5px;left:3px;height:19px;width:19px;content:"";border-radius:50%;border:1px solid #000;background-color:#fff}div[dir="rtl"] input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2+label::before{left:auto;right:3px}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:not(:disabled)+label:hover::before{border:1px solid #0067B8}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:not(:disabled)+label:hover::after{display:block;position:absolute;top:10px;left:8px;height:9px;width:9px;content:"";border-radius:50%;background-color:rgba(0,0,0,0.8)}div[dir="rtl"] input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:not(:disabled)+label:hover::after{left:auto;right:8px}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:not(:disabled)+label:focus::before{border:1px solid #0067B8}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:not(:disabled)+label:focus::after{display:block;position:absolute;top:10px;left:8px;height:9px;width:9px;content:"";border-radius:50%;background-color:#000}div[dir="rtl"] input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:not(:disabled)+label:focus::after{left:auto;right:8px}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:checked+label::after{display:block;position:absolute;top:10px;left:8px;height:9px;width:9px;content:"";border-radius:50%;background-color:#000}div[dir="rtl"] input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:checked+label::after{left:auto;right:8px}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:disabled+label{cursor:not-allowed}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:disabled+label::before{border:1px solid rgba(0,0,0,0.2);background-color:rgba(0,0,0,0.2)}._3RJzeL3l9Rl_lAQEm6VwdX{display:block;position:static;float:right;margin-top:0;margin-bottom:0;margin-left:19px;margin-right:0;padding-top:0;padding-bottom:0;padding-left:8px;padding-right:0;width:80%;width:calc(100% - 19px);font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:15px;line-height:20px;text-transform:none;cursor:pointer;box-sizing:border-box}div[dir="rtl"] ._3RJzeL3l9Rl_lAQEm6VwdX{margin:0 19px 0 0;padding:0 8px 0 0;float:left}.nohp3sIG12ZBhzcMnPala{margin-top:20px;margin-bottom:48px}._2uhaEsmeotZ3P-M0AXo2kF{padding:0;width:278px;height:36px;cursor:pointer;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:15px;line-height:20px;text-align:center}._2uhaEsmeotZ3P-M0AXo2kF:focus{box-sizing:border-box}._2uhaEsmeotZ3P-M0AXo2kF:disabled{cursor:not-allowed}._3tOu1FJ59c_xz_PmI1lKV5{float:right;padding:0;width:278px;height:36px;cursor:pointer;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:15px;line-height:20px;text-align:center}._3tOu1FJ59c_xz_PmI1lKV5:focus{box-sizing:border-box}._3tOu1FJ59c_xz_PmI1lKV5:disabled{cursor:not-allowed}div[dir="rtl"] ._3tOu1FJ59c_xz_PmI1lKV5{margin:0;padding:0;float:left}@media only screen and (max-width: 768px){._2j0fmugLb1FgYz6KPuB91w,._1Upc2NjY8AlDn177YoVj0y{padding-top:8px;padding-bottom:12px;padding-left:3.75%;padding-right:3.75%;margin:0;width:92.5%}._23tra1HsiiP6cT-Cka-ycB{display:block}._1XuCi2WhiqeWRUVp3pnFG3{margin-bottom:8px;margin-left:0;margin-right:0;width:100%}._2bvsb3ubApyZ0UGoQA9O9T{overflow:hidden}.AFsJE948muYyzCMktdzuk{top:1.8%;width:93.33%;height:96.4%;overflow:hidden}.uCYvKvHXrhjNgflv1VqdD{margin-top:24px;margin-left:24px;margin-right:24px;height:100%}._1kBkHQ1V1wu3kl-YcLgUr6{height:62%;height:calc(100% - 188px);min-height:50%}._2uhaEsmeotZ3P-M0AXo2kF{width:100%}._3tOu1FJ59c_xz_PmI1lKV5{margin-bottom:12px;margin-left:0;width:100%}div[dir="rtl"] ._3tOu1FJ59c_xz_PmI1lKV5{margin:0 0 12px 0;padding:0;float:none}}@media only screen and (max-width: 768px) and (orientation: landscape), only screen and (max-height: 260px), only screen and (max-width: 340px){.AFsJE948muYyzCMktdzuk{overflow:auto}}@media only screen and (max-height: 260px), only screen and (max-width: 340px){._1XuCi2WhiqeWRUVp3pnFG3{min-width:0}._3kWyBRbW_dgnMiEyx06Fu4{padding:3%}.uCYvKvHXrhjNgflv1VqdD{margin-top:3%;margin-left:3%;margin-right:3%}._17pX1m9O_W--iZbDt3Ta5r{margin-bottom:3%}._1kBkHQ1V1wu3kl-YcLgUr6{height:calc(79% - 64px)}.nohp3sIG12ZBhzcMnPala{margin-top:5%;margin-bottom:10%}._3tOu1FJ59c_xz_PmI1lKV5{margin-bottom:3%}div[dir="rtl"] ._3tOu1FJ59c_xz_PmI1lKV5{margin:0 0 3% 0;padding:0;float:none}}
</style><style type="text/css" id="ms-consent-banner-theme-styles">._23tra1HsiiP6cT-Cka-ycB {
            background-color: #24292f !important;
        }.w8hcgFksdo30C8w-bygqu {
            color: #ffffff !important;
        }.ydkKdaztSS0AeHWIeIHsQ a {
            color: #d8b9ff !important;
        }._2bvsb3ubApyZ0UGoQA9O9T {
            background-color: rgba(23, 23, 23, 0.8) !important;
        }.AFsJE948muYyzCMktdzuk {
            background-color: #24292f !important;
            border: 1px solid #d8b9ff !important;
        }._3kWyBRbW_dgnMiEyx06Fu4 {
            color: #d8b9ff !important;
            background-color: #24292f !important;
        }._1zNQOqxpBFSokeCLGi_hGr {
            border: 1px solid #ffffff !important;
            background-color: #ffffff !important;
            color: #1f2328 !important;
        }._1zNQOqxpBFSokeCLGi_hGr:enabled:hover {
            color: #1f2328 !important;
            background-color: #d8b9ff !important;
            box-shadow: none !important;
            border: 1px solid transparent !important;
        }._1zNQOqxpBFSokeCLGi_hGr:enabled:focus {
            background-color: #d8b9ff !important;
            box-shadow: none !important;
            border: 2px solid #ffffff !important;
        }._1zNQOqxpBFSokeCLGi_hGr:disabled {
            opacity: 0.5 !important;
            color: #1f2328 !important;
            background-color: #ffffff !important;
            border: 1px solid transparent !important;
        }.erL690_8JwUW-R4bJRcfl {
            border: 1px solid #eaeef2 !important;
            background-color: #32383f !important;
            color: #ffffff !important;
        }.erL690_8JwUW-R4bJRcfl:enabled:hover {
            color: #ffffff !important;
            background-color: #24292f !important;
            box-shadow: none !important;
            border: 1px solid #ffffff !important;
        }.erL690_8JwUW-R4bJRcfl:enabled:focus {
            background-color: #24292f !important;
            box-shadow: none !important;
            border: 2px solid #6e7781 !important;
        }.erL690_8JwUW-R4bJRcfl:disabled {
            opacity: 0.5 !important;
            color: #ffffff !important;
            background-color: #424a53 !important;
            border: 1px solid #6e7781 !important;
        }input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2 + label::before {
            border: 1px solid #d8b9ff !important;
            background-color: #24292f !important;
        }._1HSFn0HzGo6w4ADApV8-c4 {
            outline: 2px solid #ffffff !important;
        }input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:checked + label::after {
            background-color: #d8b9ff !important;
        }input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2 + label:hover::before {
            border: 1px solid #ffffff !important;
        }input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2 + label:hover::after {
            background-color: #ffffff !important;
        }input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2 + label:focus::before {
            border: 1px solid #ffffff !important;
        }input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2 + label:focus::after {
            background-color: #d8b9ff !important;
        }input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:disabled + label::before {
            border: 1px solid rgba(227, 227, 227, 0.2) !important;
            background-color: rgba(227, 227, 227, 0.2) !important;
        }</style></head>

  <body class="logged-in env-production page-responsive" style="overflow-wrap: break-word; --dialog-scrollgutter: 17px;">
    <div data-turbo-body="" class="logged-in env-production page-responsive" style="word-wrap: break-word;">
      


    <div class="position-relative js-header-wrapper ">
      <a href="https://github.com/fengvyi/LeetCode/commit/04d012e5dcccad0a7087e885a83bd6b9872670a4#start-of-content" data-skip-target-assigned="false" class="p-3 color-bg-accent-emphasis color-fg-on-emphasis show-on-focus js-skip-to-content">Skip to content</a>

      <span data-view-component="true" class="progress-pjax-loader Progress position-fixed width-full">
    <span style="width: 0%;" data-view-component="true" class="Progress-item progress-pjax-loader-bar left-0 top-0 color-bg-accent-emphasis"></span>
</span>      
      
      <script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_primer_react_lib-esm_Dialog_Dialog_js-node_modules_primer_react_lib-esm_-34d71e-a36ca1cac968.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/ui_packages_react-core_create-browser-history_ts-ui_packages_react-core_AppContextProvider_ts-ffb979-ed6ff1fbeca4.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/keyboard-shortcuts-dialog-77e6709afe35.js.download"></script>

<react-partial partial-name="keyboard-shortcuts-dialog" data-ssr="false" datta-attempted-ssr="false" data-catalyst="" class="loaded">
  
  <script type="application/json" data-target="react-partial.embeddedData">{"props":{"docsUrl":"https://docs.github.com/get-started/accessibility/keyboard-shortcuts"}}</script>
  <div data-target="react-partial.reactRoot"><script type="application/json" id="__PRIMER_DATA_:r23:__">{"resolvedServerColorMode":"night"}</script></div>
</react-partial>




      

          

                <header class="AppHeader" role="banner">
  <h2 class="sr-only">Navigation Menu</h2>

    

    <div class="AppHeader-globalBar pb-2 js-global-bar">
      <div class="AppHeader-globalBar-start">
          <deferred-side-panel data-url="/_side-panels/global" data-catalyst="">
  <include-fragment data-target="deferred-side-panel.fragment"><template shadowrootmode="open"><style>:host {display: block;}</style><slot></slot></template>
      <button aria-label="Open global navigation menu" data-action="click:deferred-side-panel#loadPanel click:deferred-side-panel#panelOpened" data-show-dialog-id="dialog-e7b383b2-433b-417d-bdb6-3df969d5617d" id="dialog-show-dialog-e7b383b2-433b-417d-bdb6-3df969d5617d" type="button" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium AppHeader-button color-bg-transparent p-0 color-fg-muted" fdprocessedid="8gokq">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-three-bars Button-visual">
    <path d="M1 2.75A.75.75 0 0 1 1.75 2h12.5a.75.75 0 0 1 0 1.5H1.75A.75.75 0 0 1 1 2.75Zm0 5A.75.75 0 0 1 1.75 7h12.5a.75.75 0 0 1 0 1.5H1.75A.75.75 0 0 1 1 7.75ZM1.75 12h12.5a.75.75 0 0 1 0 1.5H1.75a.75.75 0 0 1 0-1.5Z"></path>
</svg>
</button>

<dialog-helper>
  <dialog data-target="deferred-side-panel.panel" id="dialog-e7b383b2-433b-417d-bdb6-3df969d5617d" aria-modal="true" aria-labelledby="dialog-e7b383b2-433b-417d-bdb6-3df969d5617d-title" aria-describedby="dialog-e7b383b2-433b-417d-bdb6-3df969d5617d-description" data-view-component="true" class="Overlay Overlay-whenNarrow Overlay--size-small-portrait Overlay--motion-scaleFade Overlay--placement-left SidePanel">
    <div styles="flex-direction: row;" data-view-component="true" class="Overlay-header">
  <div class="Overlay-headerContentWrap">
    <div class="Overlay-titleWrap">
      <h1 class="Overlay-title sr-only" id="dialog-e7b383b2-433b-417d-bdb6-3df969d5617d-title">
        Global navigation
      </h1>
            <div data-view-component="true" class="d-flex">
      <div data-view-component="true" class="AppHeader-logo position-relative">
        <svg aria-hidden="true" height="24" viewBox="0 0 24 24" version="1.1" width="24" data-view-component="true" class="octicon octicon-mark-github">
    <path d="M12.5.75C6.146.75 1 5.896 1 12.25c0 5.089 3.292 9.387 7.863 10.91.575.101.79-.244.79-.546 0-.273-.014-1.178-.014-2.142-2.889.532-3.636-.704-3.866-1.35-.13-.331-.69-1.352-1.18-1.625-.402-.216-.977-.748-.014-.762.906-.014 1.553.834 1.769 1.179 1.035 1.74 2.688 1.25 3.349.948.1-.747.402-1.25.733-1.538-2.559-.287-5.232-1.279-5.232-5.678 0-1.25.445-2.285 1.178-3.09-.115-.288-.517-1.467.115-3.048 0 0 .963-.302 3.163 1.179.92-.259 1.897-.388 2.875-.388.977 0 1.955.13 2.875.388 2.2-1.495 3.162-1.179 3.162-1.179.633 1.581.23 2.76.115 3.048.733.805 1.179 1.825 1.179 3.09 0 4.413-2.688 5.39-5.247 5.678.417.36.776 1.05.776 2.128 0 1.538-.014 2.774-.014 3.162 0 .302.216.662.79.547C20.709 21.637 24 17.324 24 12.25 24 5.896 18.854.75 12.5.75Z"></path>
</svg>
</div></div>
    </div>
    <div class="Overlay-actionWrap">
      <button data-close-dialog-id="dialog-e7b383b2-433b-417d-bdb6-3df969d5617d" aria-label="Close" type="button" data-view-component="true" class="close-button Overlay-closeButton"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg></button>
    </div>
  </div>
  
</div>
      <scrollable-region data-labelled-by="dialog-e7b383b2-433b-417d-bdb6-3df969d5617d-title" data-catalyst="" style="overflow: auto;">
        <div data-view-component="true" class="Overlay-body d-flex flex-column px-2">    <div data-view-component="true" class="d-flex flex-column mb-3">
        <nav aria-label="Site navigation" data-view-component="true" class="ActionList">
  
  <nav-list data-catalyst="">
    <ul data-target="nav-list.topLevelList" data-view-component="true" class="ActionListWrap">
        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-hotkey="g d" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;HOME&quot;,&quot;label&quot;:null}" id="item-e54e7366-3c3e-4ddf-abd1-70ec35b8715c" href="https://github.com/dashboard" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-home">
    <path d="M6.906.664a1.749 1.749 0 0 1 2.187 0l5.25 4.2c.415.332.657.835.657 1.367v7.019A1.75 1.75 0 0 1 13.25 15h-3.5a.75.75 0 0 1-.75-.75V9H7v5.25a.75.75 0 0 1-.75.75h-3.5A1.75 1.75 0 0 1 1 13.25V6.23c0-.531.242-1.034.657-1.366l5.25-4.2Zm1.25 1.171a.25.25 0 0 0-.312 0l-5.25 4.2a.25.25 0 0 0-.094.196v7.019c0 .138.112.25.25.25H5.5V8.25a.75.75 0 0 1 .75-.75h3.5a.75.75 0 0 1 .75.75v5.25h2.75a.25.25 0 0 0 .25-.25V6.23a.25.25 0 0 0-.094-.195Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Home
</span>      
</a>
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-hotkey="g i" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;ISSUES&quot;,&quot;label&quot;:null}" id="item-66742eb1-6687-4e85-9ffa-43b720800bf2" href="https://github.com/issues" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-issue-opened">
    <path d="M8 9.5a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path><path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0ZM1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Issues
</span>      
</a>
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-hotkey="g p" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;PULL_REQUESTS&quot;,&quot;label&quot;:null}" id="item-98dbd052-1689-444b-ac09-041b36b6b19d" href="https://github.com/pulls" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-git-pull-request">
    <path d="M1.5 3.25a2.25 2.25 0 1 1 3 2.122v5.256a2.251 2.251 0 1 1-1.5 0V5.372A2.25 2.25 0 0 1 1.5 3.25Zm5.677-.177L9.573.677A.25.25 0 0 1 10 .854V2.5h1A2.5 2.5 0 0 1 13.5 5v5.628a2.251 2.251 0 1 1-1.5 0V5a1 1 0 0 0-1-1h-1v1.646a.25.25 0 0 1-.427.177L7.177 3.427a.25.25 0 0 1 0-.354ZM3.75 2.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm0 9.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm8.25.75a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Pull requests
</span>      
</a>
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;PROJECTS&quot;,&quot;label&quot;:null}" id="item-25924e7e-0978-4936-a98a-b2279ceea113" href="https://github.com/projects" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-table">
    <path d="M0 1.75C0 .784.784 0 1.75 0h12.5C15.216 0 16 .784 16 1.75v12.5A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25ZM6.5 6.5v8h7.75a.25.25 0 0 0 .25-.25V6.5Zm8-1.5V1.75a.25.25 0 0 0-.25-.25H6.5V5Zm-13 1.5v7.75c0 .138.112.25.25.25H5v-8ZM5 5V1.5H1.75a.25.25 0 0 0-.25.25V5Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Projects
</span>      
</a>
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;DISCUSSIONS&quot;,&quot;label&quot;:null}" id="item-21ec5be3-e3ee-4aac-b154-5ea3a1bb45cc" href="https://github.com/discussions" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-comment-discussion">
    <path d="M1.75 1h8.5c.966 0 1.75.784 1.75 1.75v5.5A1.75 1.75 0 0 1 10.25 10H7.061l-2.574 2.573A1.458 1.458 0 0 1 2 11.543V10h-.25A1.75 1.75 0 0 1 0 8.25v-5.5C0 1.784.784 1 1.75 1ZM1.5 2.75v5.5c0 .138.112.25.25.25h1a.75.75 0 0 1 .75.75v2.19l2.72-2.72a.749.749 0 0 1 .53-.22h3.5a.25.25 0 0 0 .25-.25v-5.5a.25.25 0 0 0-.25-.25h-8.5a.25.25 0 0 0-.25.25Zm13 2a.25.25 0 0 0-.25-.25h-.5a.75.75 0 0 1 0-1.5h.5c.966 0 1.75.784 1.75 1.75v5.5A1.75 1.75 0 0 1 14.25 12H14v1.543a1.458 1.458 0 0 1-2.487 1.03L9.22 12.28a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215l2.22 2.22v-2.19a.75.75 0 0 1 .75-.75h1a.25.25 0 0 0 .25-.25Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Discussions
</span>      
</a>
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;CODESPACES&quot;,&quot;label&quot;:null}" id="item-4344ece4-f0fb-48c6-820a-bfb138e15836" href="https://github.com/codespaces" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-codespaces">
    <path d="M0 11.25c0-.966.784-1.75 1.75-1.75h12.5c.966 0 1.75.784 1.75 1.75v3A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25Zm2-9.5C2 .784 2.784 0 3.75 0h8.5C13.216 0 14 .784 14 1.75v5a1.75 1.75 0 0 1-1.75 1.75h-8.5A1.75 1.75 0 0 1 2 6.75Zm1.75-.25a.25.25 0 0 0-.25.25v5c0 .138.112.25.25.25h8.5a.25.25 0 0 0 .25-.25v-5a.25.25 0 0 0-.25-.25Zm-2 9.5a.25.25 0 0 0-.25.25v3c0 .138.112.25.25.25h12.5a.25.25 0 0 0 .25-.25v-3a.25.25 0 0 0-.25-.25Z"></path><path d="M7 12.75a.75.75 0 0 1 .75-.75h4.5a.75.75 0 0 1 0 1.5h-4.5a.75.75 0 0 1-.75-.75Zm-4 0a.75.75 0 0 1 .75-.75h.5a.75.75 0 0 1 0 1.5h-.5a.75.75 0 0 1-.75-.75Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Codespaces
</span>      
</a>
  
</li>

        
          <li role="presentation" aria-hidden="true" data-view-component="true" class="ActionList-sectionDivider"></li>
        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;EXPLORE&quot;,&quot;label&quot;:null}" id="item-3847b256-6762-4e12-90d9-bc7ee8e4937d" href="https://github.com/explore" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-telescope">
    <path d="M14.184 1.143v-.001l1.422 2.464a1.75 1.75 0 0 1-.757 2.451L3.104 11.713a1.75 1.75 0 0 1-2.275-.702l-.447-.775a1.75 1.75 0 0 1 .53-2.32L11.682.573a1.748 1.748 0 0 1 2.502.57Zm-4.709 9.32h-.001l2.644 3.863a.75.75 0 1 1-1.238.848l-1.881-2.75v2.826a.75.75 0 0 1-1.5 0v-2.826l-1.881 2.75a.75.75 0 1 1-1.238-.848l2.049-2.992a.746.746 0 0 1 .293-.253l1.809-.87a.749.749 0 0 1 .944.252ZM9.436 3.92h-.001l-4.97 3.39.942 1.63 5.42-2.61Zm3.091-2.108h.001l-1.85 1.26 1.505 2.605 2.016-.97a.247.247 0 0 0 .13-.151.247.247 0 0 0-.022-.199l-1.422-2.464a.253.253 0 0 0-.161-.119.254.254 0 0 0-.197.038ZM1.756 9.157a.25.25 0 0 0-.075.33l.447.775a.25.25 0 0 0 .325.1l1.598-.769-.83-1.436-1.465 1Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Explore
</span>      
</a>
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;MARKETPLACE&quot;,&quot;label&quot;:null}" id="item-518056e7-2457-4452-9921-7cbb423f5663" href="https://github.com/marketplace" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-gift">
    <path d="M2 2.75A2.75 2.75 0 0 1 4.75 0c.983 0 1.873.42 2.57 1.232.268.318.497.668.68 1.042.183-.375.411-.725.68-1.044C9.376.42 10.266 0 11.25 0a2.75 2.75 0 0 1 2.45 4h.55c.966 0 1.75.784 1.75 1.75v2c0 .698-.409 1.301-1 1.582v4.918A1.75 1.75 0 0 1 13.25 16H2.75A1.75 1.75 0 0 1 1 14.25V9.332C.409 9.05 0 8.448 0 7.75v-2C0 4.784.784 4 1.75 4h.55c-.192-.375-.3-.8-.3-1.25ZM7.25 9.5H2.5v4.75c0 .138.112.25.25.25h4.5Zm1.5 0v5h4.5a.25.25 0 0 0 .25-.25V9.5Zm0-4V8h5.5a.25.25 0 0 0 .25-.25v-2a.25.25 0 0 0-.25-.25Zm-7 0a.25.25 0 0 0-.25.25v2c0 .138.112.25.25.25h5.5V5.5h-5.5Zm3-4a1.25 1.25 0 0 0 0 2.5h2.309c-.233-.818-.542-1.401-.878-1.793-.43-.502-.915-.707-1.431-.707ZM8.941 4h2.309a1.25 1.25 0 0 0 0-2.5c-.516 0-1 .205-1.43.707-.337.392-.646.975-.879 1.793Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Marketplace
</span>      
</a>
  
</li>

</ul>  </nav-list>
</nav>

        <div data-view-component="true" class="my-3 d-flex flex-justify-center height-full">
          <span data-view-component="true">
  <svg style="box-sizing: content-box; color: var(--color-icon-primary);" width="16" height="16" viewBox="0 0 16 16" fill="none" aria-hidden="true" data-view-component="true" class="anim-rotate">
    <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke" fill="none"></circle>
    <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>    <span class="sr-only">Loading</span>
</span>
</div>
</div>
      <div data-view-component="true" class="flex-1"></div>


      <div data-view-component="true" class="px-2">      <p class="color-fg-subtle text-small text-light">© 2024 GitHub, Inc.</p>

      <div data-view-component="true" class="d-flex flex-wrap text-small text-light">
          <a target="_blank" href="https://github.com/about" data-view-component="true" class="Link mr-2">About</a>
          <a target="_blank" href="https://github.blog/" data-view-component="true" class="Link mr-2">Blog</a>
          <a target="_blank" href="https://docs.github.com/site-policy/github-terms/github-terms-of-service" data-view-component="true" class="Link mr-2">Terms</a>
          <a target="_blank" href="https://docs.github.com/site-policy/privacy-policies/github-privacy-statement" data-view-component="true" class="Link mr-2">Privacy</a>
          <a target="_blank" href="https://github.com/security" data-view-component="true" class="Link mr-2">Security</a>
          <a target="_blank" href="https://www.githubstatus.com/" data-view-component="true" class="Link mr-3">Status</a>

</div></div>
</div>
      </scrollable-region>
      
</dialog></dialog-helper>

  </include-fragment>
</deferred-side-panel>

        <a class="AppHeader-logo ml-2" href="https://github.com/" data-hotkey="g d" aria-label="Homepage " data-turbo="false" data-analytics-event="{&quot;category&quot;:&quot;Header&quot;,&quot;action&quot;:&quot;go to dashboard&quot;,&quot;label&quot;:&quot;icon:logo&quot;}">
          <svg height="32" aria-hidden="true" viewBox="0 0 24 24" version="1.1" width="32" data-view-component="true" class="octicon octicon-mark-github v-align-middle color-fg-default">
    <path d="M12.5.75C6.146.75 1 5.896 1 12.25c0 5.089 3.292 9.387 7.863 10.91.575.101.79-.244.79-.546 0-.273-.014-1.178-.014-2.142-2.889.532-3.636-.704-3.866-1.35-.13-.331-.69-1.352-1.18-1.625-.402-.216-.977-.748-.014-.762.906-.014 1.553.834 1.769 1.179 1.035 1.74 2.688 1.25 3.349.948.1-.747.402-1.25.733-1.538-2.559-.287-5.232-1.279-5.232-5.678 0-1.25.445-2.285 1.178-3.09-.115-.288-.517-1.467.115-3.048 0 0 .963-.302 3.163 1.179.92-.259 1.897-.388 2.875-.388.977 0 1.955.13 2.875.388 2.2-1.495 3.162-1.179 3.162-1.179.633 1.581.23 2.76.115 3.048.733.805 1.179 1.825 1.179 3.09 0 4.413-2.688 5.39-5.247 5.678.417.36.776 1.05.776 2.128 0 1.538-.014 2.774-.014 3.162 0 .302.216.662.79.547C20.709 21.637 24 17.324 24 12.25 24 5.896 18.854.75 12.5.75Z"></path>
</svg>
        </a>

          <div class="AppHeader-context">
  <div class="AppHeader-context-compact">
      <button aria-expanded="false" aria-haspopup="dialog" aria-label="Page context: fengvyi / LeetCode" id="dialog-show-context-region-dialog" data-show-dialog-id="context-region-dialog" type="button" data-view-component="true" class="AppHeader-context-compact-trigger Truncate Button--secondary Button--medium Button box-shadow-none" fdprocessedid="n5mu9m">  <span class="Button-content">
    <span class="Button-label"><span class="AppHeader-context-compact-lead">
                <span class="AppHeader-context-compact-parentItem">fengvyi</span>
                <span class="no-wrap">&nbsp;/</span>

            </span>

            <strong class="AppHeader-context-compact-mainItem d-flex flex-items-center Truncate">
  <span class="Truncate-text ">LeetCode</span>

</strong></span>
  </span>
</button>

<dialog-helper>
  <dialog id="context-region-dialog" aria-modal="true" aria-labelledby="context-region-dialog-title" aria-describedby="context-region-dialog-description" data-view-component="true" class="Overlay Overlay-whenNarrow Overlay--size-medium Overlay--motion-scaleFade">
    <div data-view-component="true" class="Overlay-header">
  <div class="Overlay-headerContentWrap">
    <div class="Overlay-titleWrap">
      <h1 class="Overlay-title " id="context-region-dialog-title">
        Navigate back to
      </h1>
        
    </div>
    <div class="Overlay-actionWrap">
      <button data-close-dialog-id="context-region-dialog" aria-label="Close" type="button" data-view-component="true" class="close-button Overlay-closeButton"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg></button>
    </div>
  </div>
  
</div>
      <scrollable-region data-labelled-by="context-region-dialog-title" data-catalyst="" style="overflow: auto;">
        <div data-view-component="true" class="Overlay-body">          <ul role="list" class="list-style-none">
    <li>
      <a data-analytics-event="{&quot;category&quot;:&quot;SiteHeaderComponent&quot;,&quot;action&quot;:&quot;context_region_crumb&quot;,&quot;label&quot;:&quot;fengvyi&quot;,&quot;screen_size&quot;:&quot;compact&quot;}" href="https://github.com/fengvyi" data-view-component="true" class="Link--primary Truncate d-flex flex-items-center py-1">
        <span class="AppHeader-context-item-label Truncate-text ">
            <svg aria-hidden="true" height="12" viewBox="0 0 16 16" version="1.1" width="12" data-view-component="true" class="octicon octicon-person mr-1">
    <path d="M10.561 8.073a6.005 6.005 0 0 1 3.432 5.142.75.75 0 1 1-1.498.07 4.5 4.5 0 0 0-8.99 0 .75.75 0 0 1-1.498-.07 6.004 6.004 0 0 1 3.431-5.142 3.999 3.999 0 1 1 5.123 0ZM10.5 5a2.5 2.5 0 1 0-5 0 2.5 2.5 0 0 0 5 0Z"></path>
</svg>

          fengvyi
        </span>

</a>
    </li>
    <li>
      <a data-analytics-event="{&quot;category&quot;:&quot;SiteHeaderComponent&quot;,&quot;action&quot;:&quot;context_region_crumb&quot;,&quot;label&quot;:&quot;LeetCode&quot;,&quot;screen_size&quot;:&quot;compact&quot;}" href="https://github.com/fengvyi/LeetCode" data-view-component="true" class="Link--primary Truncate d-flex flex-items-center py-1">
        <span class="AppHeader-context-item-label Truncate-text ">
            <svg aria-hidden="true" height="12" viewBox="0 0 16 16" version="1.1" width="12" data-view-component="true" class="octicon octicon-repo mr-1">
    <path d="M2 2.5A2.5 2.5 0 0 1 4.5 0h8.75a.75.75 0 0 1 .75.75v12.5a.75.75 0 0 1-.75.75h-2.5a.75.75 0 0 1 0-1.5h1.75v-2h-8a1 1 0 0 0-.714 1.7.75.75 0 1 1-1.072 1.05A2.495 2.495 0 0 1 2 11.5Zm10.5-1h-8a1 1 0 0 0-1 1v6.708A2.486 2.486 0 0 1 4.5 9h8ZM5 12.25a.25.25 0 0 1 .25-.25h3.5a.25.25 0 0 1 .25.25v3.25a.25.25 0 0 1-.4.2l-1.45-1.087a.249.249 0 0 0-.3 0L5.4 15.7a.25.25 0 0 1-.4-.2Z"></path>
</svg>

          LeetCode
        </span>

</a>
    </li>
</ul>

</div>
      </scrollable-region>
      
</dialog></dialog-helper>
  </div>

  <div class="AppHeader-context-full">
    <nav role="navigation" aria-label="Page context">
      <ul role="list" class="list-style-none">
    <li>
      <a data-analytics-event="{&quot;category&quot;:&quot;SiteHeaderComponent&quot;,&quot;action&quot;:&quot;context_region_crumb&quot;,&quot;label&quot;:&quot;fengvyi&quot;,&quot;screen_size&quot;:&quot;full&quot;}" data-hovercard-type="user" data-hovercard-url="/users/fengvyi/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="https://github.com/fengvyi" data-view-component="true" class="AppHeader-context-item">
        <span class="AppHeader-context-item-label  ">

          fengvyi
        </span>

</a>
        <span class="AppHeader-context-item-separator">/</span>
    </li>
    <li>
      <a data-analytics-event="{&quot;category&quot;:&quot;SiteHeaderComponent&quot;,&quot;action&quot;:&quot;context_region_crumb&quot;,&quot;label&quot;:&quot;LeetCode&quot;,&quot;screen_size&quot;:&quot;full&quot;}" href="https://github.com/fengvyi/LeetCode" data-view-component="true" class="AppHeader-context-item">
        <span class="AppHeader-context-item-label  ">

          LeetCode
        </span>

</a>
    </li>
</ul>

    </nav>
  </div>
</div>

      </div>
      <div class="AppHeader-globalBar-end">
          <div class="AppHeader-search">
              


<qbsearch-input class="search-input" data-scope="repo:fengvyi/LeetCode" data-custom-scopes-path="/search/custom_scopes" data-delete-custom-scopes-csrf="xjJFnH33JBfq823aRf763sCg98zTjq0bnCBeZiTduM3ZipksHP4gN_3u3Pf9OrnZyqnAZ05qTv3Lf7G_a3NkQA" data-max-custom-scopes="10" data-header-redesign-enabled="true" data-initial-value="" data-blackbird-suggestions-path="/search/suggestions" data-jump-to-suggestions-path="/_graphql/GetSuggestedNavigationDestinations" data-current-repository="fengvyi/LeetCode" data-current-org="" data-current-owner="fengvyi" data-logged-in="true" data-copilot-chat-enabled="false" data-nl-search-enabled="false" data-catalyst="">
  <div class="search-input-container search-with-dialog position-relative d-flex flex-row flex-items-center height-auto color-bg-transparent border-0 color-fg-subtle mx-0" data-action="click:qbsearch-input#searchInputContainerClicked">
      
            <button type="button" data-action="click:qbsearch-input#handleExpand" class="AppHeader-button AppHeader-search-whenNarrow" aria-label="Search or jump to…" aria-expanded="false" aria-haspopup="dialog" fdprocessedid="0xh8d">
            <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-search">
    <path d="M10.68 11.74a6 6 0 0 1-7.922-8.982 6 6 0 0 1 8.982 7.922l3.04 3.04a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215ZM11.5 7a4.499 4.499 0 1 0-8.997 0A4.499 4.499 0 0 0 11.5 7Z"></path>
</svg>
          </button>


<div class="AppHeader-search-whenRegular">
  <div class="AppHeader-search-wrap AppHeader-search-wrap--hasTrailing">
    <div class="AppHeader-search-control">
      <label for="AppHeader-searchInput" aria-label="Search or jump to…" class="AppHeader-search-visual--leading">
        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-search">
    <path d="M10.68 11.74a6 6 0 0 1-7.922-8.982 6 6 0 0 1 8.982 7.922l3.04 3.04a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215ZM11.5 7a4.499 4.499 0 1 0-8.997 0A4.499 4.499 0 0 0 11.5 7Z"></path>
</svg>
      </label>

                <button type="button" data-target="qbsearch-input.inputButton" data-action="click:qbsearch-input#handleExpand" class="AppHeader-searchButton form-control input-contrast text-left color-fg-subtle no-wrap placeholder" data-hotkey="s,/" data-analytics-event="{&quot;location&quot;:&quot;navbar&quot;,&quot;action&quot;:&quot;searchbar&quot;,&quot;context&quot;:&quot;global&quot;,&quot;tag&quot;:&quot;input&quot;,&quot;label&quot;:&quot;searchbar_input_global_navbar&quot;}" aria-describedby="search-error-message-flash">
            <div class="overflow-hidden">
              <span id="qb-input-query" data-target="qbsearch-input.inputButtonText">
                  Type <kbd class="AppHeader-search-kbd">/</kbd> to search
              </span>
            </div>
          </button>

    </div>


  </div>
</div>

    <input type="hidden" name="type" class="js-site-search-type-field">

    
<div class="Overlay--hidden " data-modal-dialog-overlay="">
  <modal-dialog data-action="close:qbsearch-input#handleClose cancel:qbsearch-input#handleClose" data-target="qbsearch-input.searchSuggestionsDialog" role="dialog" id="search-suggestions-dialog" aria-modal="true" aria-labelledby="search-suggestions-dialog-header" data-view-component="true" class="Overlay Overlay--width-medium Overlay--height-auto">
      <h1 id="search-suggestions-dialog-header" class="sr-only">Search code, repositories, users, issues, pull requests...</h1>
    <div class="Overlay-body Overlay-body--paddingNone">
      
          <div data-view-component="true">        <div class="search-suggestions position-absolute width-full color-shadow-large border color-fg-default color-bg-default overflow-hidden d-flex flex-column query-builder-container" style="border-radius: 12px;" data-target="qbsearch-input.queryBuilderContainer" hidden="">
          <!-- '"` --><!-- </textarea></xmp> --><form id="query-builder-test-form" action="https://github.com/fengvyi/LeetCode/commit/04d012e5dcccad0a7087e885a83bd6b9872670a4" accept-charset="UTF-8" method="get">
  <query-builder data-target="qbsearch-input.queryBuilder" id="query-builder-query-builder-test" data-filter-key=":" data-view-component="true" class="QueryBuilder search-query-builder" data-min-width="300" data-catalyst="">
    <div class="FormControl FormControl--fullWidth">
      <label id="query-builder-test-label" for="query-builder-test" class="FormControl-label sr-only">
        Search
      </label>
      <div class="QueryBuilder-StyledInput width-fit " data-target="query-builder.styledInput">
          <span id="query-builder-test-leadingvisual-wrap" class="FormControl-input-leadingVisualWrap QueryBuilder-leadingVisualWrap">
            <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-search FormControl-input-leadingVisual">
    <path d="M10.68 11.74a6 6 0 0 1-7.922-8.982 6 6 0 0 1 8.982 7.922l3.04 3.04a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215ZM11.5 7a4.499 4.499 0 1 0-8.997 0A4.499 4.499 0 0 0 11.5 7Z"></path>
</svg>
          </span>
        <div data-target="query-builder.styledInputContainer" class="QueryBuilder-StyledInputContainer">
          <div aria-hidden="true" class="QueryBuilder-StyledInputContent" data-target="query-builder.styledInputContent"></div>
          <div class="QueryBuilder-InputWrapper">
            <div aria-hidden="true" class="QueryBuilder-Sizer" data-target="query-builder.sizer"><span></span></div>
            <input id="query-builder-test" name="query-builder-test" value="" autocomplete="off" type="text" role="combobox" spellcheck="false" aria-expanded="false" aria-describedby="validation-1ceee4a8-2a4d-4a7b-ab7f-9ccc3b005739" data-target="query-builder.input" data-action="
          input:query-builder#inputChange
          blur:query-builder#inputBlur
          keydown:query-builder#inputKeydown
          focus:query-builder#inputFocus
        " data-view-component="true" class="FormControl-input QueryBuilder-Input FormControl-medium" aria-controls="query-builder-test-results" aria-autocomplete="list" aria-haspopup="listbox" style="width: 300px;">
          </div>
        </div>
          <span class="sr-only" id="query-builder-test-clear">Clear</span>
          <button role="button" id="query-builder-test-clear-button" aria-labelledby="query-builder-test-clear query-builder-test-label" data-target="query-builder.clearButton" data-action="
                click:query-builder#clear
                focus:query-builder#clearButtonFocus
                blur:query-builder#clearButtonBlur
              " variant="small" hidden="" type="button" data-view-component="true" class="Button Button--iconOnly Button--invisible Button--medium mr-1 px-2 py-0 d-flex flex-items-center rounded-1 color-fg-muted">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x-circle-fill Button-visual">
    <path d="M2.343 13.657A8 8 0 1 1 13.658 2.343 8 8 0 0 1 2.343 13.657ZM6.03 4.97a.751.751 0 0 0-1.042.018.751.751 0 0 0-.018 1.042L6.94 8 4.97 9.97a.749.749 0 0 0 .326 1.275.749.749 0 0 0 .734-.215L8 9.06l1.97 1.97a.749.749 0 0 0 1.275-.326.749.749 0 0 0-.215-.734L9.06 8l1.97-1.97a.749.749 0 0 0-.326-1.275.749.749 0 0 0-.734.215L8 6.94Z"></path>
</svg>
</button>

      </div>
      <template id="search-icon"></template>

<template id="code-icon"></template>

<template id="file-code-icon"></template>

<template id="history-icon"></template>

<template id="repo-icon"></template>

<template id="bookmark-icon"></template>

<template id="plus-circle-icon"></template>

<template id="circle-icon"></template>

<template id="trash-icon"></template>

<template id="team-icon"></template>

<template id="project-icon"></template>

<template id="pencil-icon"></template>

<template id="copilot-icon"></template>

<template id="copilot-error-icon"></template>

<template id="workflow-icon"></template>

<template id="book-icon"></template>

<template id="code-review-icon"></template>

<template id="codespaces-icon"></template>

<template id="comment-icon"></template>

<template id="comment-discussion-icon"></template>

<template id="organization-icon"></template>

<template id="rocket-icon"></template>

<template id="shield-check-icon"></template>

<template id="heart-icon"></template>

<template id="server-icon"></template>

<template id="globe-icon"></template>

<template id="issue-opened-icon"></template>

<template id="device-mobile-icon"></template>

<template id="package-icon"></template>

<template id="credit-card-icon"></template>

<template id="play-icon"></template>

<template id="gift-icon"></template>

<template id="code-square-icon"></template>

<template id="device-desktop-icon"></template>

        <div class="position-relative">
                <ul role="listbox" class="ActionListWrap QueryBuilder-ListWrap" aria-label="Suggestions" data-action="
                    combobox-commit:query-builder#comboboxCommit
                    mousedown:query-builder#resultsMousedown
                  " data-target="query-builder.resultsList" data-persist-list="false" id="query-builder-test-results"></ul>
        </div>
      <div class="FormControl-inlineValidation" id="validation-1ceee4a8-2a4d-4a7b-ab7f-9ccc3b005739" hidden="hidden">
        <span class="FormControl-inlineValidation--visual">
          <svg aria-hidden="true" height="12" viewBox="0 0 12 12" version="1.1" width="12" data-view-component="true" class="octicon octicon-alert-fill">
    <path d="M4.855.708c.5-.896 1.79-.896 2.29 0l4.675 8.351a1.312 1.312 0 0 1-1.146 1.954H1.33A1.313 1.313 0 0 1 .183 9.058ZM7 7V3H5v4Zm-1 3a1 1 0 1 0 0-2 1 1 0 0 0 0 2Z"></path>
</svg>
        </span>
        <span></span>
</div>    </div>
    <div data-target="query-builder.screenReaderFeedback" aria-live="polite" aria-atomic="true" class="sr-only">0 suggestions.</div>
</query-builder></form>
          <div class="d-flex flex-row color-fg-muted px-3 text-small color-bg-default search-feedback-prompt">
            <a target="_blank" href="https://docs.github.com/search-github/github-code-search/understanding-github-code-search-syntax" data-view-component="true" class="Link color-fg-accent text-normal ml-2">
              Search syntax tips
</a>            <div class="d-flex flex-1"></div>
              <button data-action="click:qbsearch-input#showFeedbackDialog" type="button" data-view-component="true" class="Button--link Button--medium Button color-fg-accent text-normal ml-2">  <span class="Button-content">
    <span class="Button-label">Give feedback</span>
  </span>
</button>
          </div>
        </div>
</div>

    </div>
</modal-dialog></div>
  </div>
  <div data-action="click:qbsearch-input#retract" class="dark-backdrop position-fixed" hidden="" data-target="qbsearch-input.darkBackdrop"></div>
  <div class="color-fg-default">
    
<dialog-helper>
  <dialog data-target="qbsearch-input.feedbackDialog" data-action="close:qbsearch-input#handleDialogClose cancel:qbsearch-input#handleDialogClose" id="feedback-dialog" aria-modal="true" aria-labelledby="feedback-dialog-title" aria-describedby="feedback-dialog-description" data-view-component="true" class="Overlay Overlay-whenNarrow Overlay--size-medium Overlay--motion-scaleFade">
    <div data-view-component="true" class="Overlay-header">
  <div class="Overlay-headerContentWrap">
    <div class="Overlay-titleWrap">
      <h1 class="Overlay-title " id="feedback-dialog-title">
        Provide feedback
      </h1>
        
    </div>
    <div class="Overlay-actionWrap">
      <button data-close-dialog-id="feedback-dialog" aria-label="Close" type="button" data-view-component="true" class="close-button Overlay-closeButton"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg></button>
    </div>
  </div>
  
</div>
      <scrollable-region data-labelled-by="feedback-dialog-title" data-catalyst="" style="overflow: auto;">
        <div data-view-component="true" class="Overlay-body">        <!-- '"` --><!-- </textarea></xmp> --><form id="code-search-feedback-form" data-turbo="false" action="https://github.com/search/feedback" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="Pk8BqHejllrwR1UYXCIcvOX-aN1Rfyo7goGSJoIDd-2gU5Z07YNpqlBEAneg-Qg0jlE8izYxlHhJxaCwv3zEAw">
          <p>We read every piece of feedback, and take your input very seriously.</p>
          <textarea name="feedback" class="form-control width-full mb-2" style="height: 120px" id="feedback"></textarea>
          <input name="include_email" id="include_email" aria-label="Include my email address so I can be contacted" class="form-control mr-2" type="checkbox">
          <label for="include_email" style="font-weight: normal">Include my email address so I can be contacted</label>
</form></div>
      </scrollable-region>
      <div data-view-component="true" class="Overlay-footer Overlay-footer--alignEnd">          <button data-close-dialog-id="feedback-dialog" type="button" data-view-component="true" class="btn">    Cancel
</button>
          <button form="code-search-feedback-form" data-action="click:qbsearch-input#submitFeedback" type="submit" data-view-component="true" class="btn-primary btn">    Submit feedback
</button>
</div>
</dialog></dialog-helper>

    <custom-scopes data-target="qbsearch-input.customScopesManager" data-catalyst="">
    
<dialog-helper>
  <dialog data-target="custom-scopes.customScopesModalDialog" data-action="close:qbsearch-input#handleDialogClose cancel:qbsearch-input#handleDialogClose" id="custom-scopes-dialog" aria-modal="true" aria-labelledby="custom-scopes-dialog-title" aria-describedby="custom-scopes-dialog-description" data-view-component="true" class="Overlay Overlay-whenNarrow Overlay--size-medium Overlay--motion-scaleFade">
    <div data-view-component="true" class="Overlay-header Overlay-header--divided">
  <div class="Overlay-headerContentWrap">
    <div class="Overlay-titleWrap">
      <h1 class="Overlay-title " id="custom-scopes-dialog-title">
        Saved searches
      </h1>
        <h2 id="custom-scopes-dialog-description" class="Overlay-description">Use saved searches to filter your results more quickly</h2>
    </div>
    <div class="Overlay-actionWrap">
      <button data-close-dialog-id="custom-scopes-dialog" aria-label="Close" type="button" data-view-component="true" class="close-button Overlay-closeButton"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg></button>
    </div>
  </div>
  
</div>
      <scrollable-region data-labelled-by="custom-scopes-dialog-title" data-catalyst="" style="overflow: auto;">
        <div data-view-component="true" class="Overlay-body">        <div data-target="custom-scopes.customScopesModalDialogFlash"></div>

        <div hidden="" class="create-custom-scope-form" data-target="custom-scopes.createCustomScopeForm">
        <!-- '"` --><!-- </textarea></xmp> --><form id="custom-scopes-dialog-form" data-turbo="false" action="https://github.com/search/custom_scopes" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="YymbjyRZMZJjCZW51ui1ydKQITyWt33m3YNTNWdzg9EuJDVzh5cU0gtRGCzMJ1icTR2JXpo6tUO51nU7wqZUqQ">
          <div data-target="custom-scopes.customScopesModalDialogFlash"></div>

          <input type="hidden" id="custom_scope_id" name="custom_scope_id" data-target="custom-scopes.customScopesIdField">

          <div class="form-group">
            <label for="custom_scope_name">Name</label>
            <auto-check src="/search/custom_scopes/check_name" required="">
              <input type="text" name="custom_scope_name" id="custom_scope_name" data-target="custom-scopes.customScopesNameField" class="form-control" autocomplete="off" placeholder="github-ruby" required="" maxlength="50" spellcheck="false">
              <input type="hidden" value="JM7Ra34CnXMNj4YPPmBPpQp41Z-6Z57qBW7ETx54N468XOWJmPC7NuijQH_FzQG_VSQOUl0zKCecj-FcCez1Xw" data-csrf="true">
            </auto-check>
          </div>

          <div class="form-group">
            <label for="custom_scope_query">Query</label>
            <input type="text" name="custom_scope_query" id="custom_scope_query" data-target="custom-scopes.customScopesQueryField" class="form-control" autocomplete="off" placeholder="(repo:mona/a OR repo:mona/b) AND lang:python" required="" maxlength="500">
          </div>

          <p class="text-small color-fg-muted">
            To see all available qualifiers, see our <a class="Link--inTextBlock" href="https://docs.github.com/search-github/github-code-search/understanding-github-code-search-syntax">documentation</a>.
          </p>
</form>        </div>

        <div data-target="custom-scopes.manageCustomScopesForm">
          <div data-target="custom-scopes.list"></div>
        </div>

</div>
      </scrollable-region>
      <div data-view-component="true" class="Overlay-footer Overlay-footer--alignEnd Overlay-footer--divided">          <button data-action="click:custom-scopes#customScopesCancel" type="button" data-view-component="true" class="btn">    Cancel
</button>
          <button form="custom-scopes-dialog-form" data-action="click:custom-scopes#customScopesSubmit" data-target="custom-scopes.customScopesSubmitButton" type="submit" data-view-component="true" class="btn-primary btn">    Create saved search
</button>
</div>
</dialog></dialog-helper>
    </custom-scopes>
  </div>
</qbsearch-input>    <input type="hidden" value="lsIOBgjzoi3lh6QRWTMDlnztSCIEWyMdMWsZwrdVCA-N4RssGy6qlvKBJu6FBAmeR-EkAWBL9_S6HxE8PKbVxQ" data-csrf="true" class="js-data-jump-to-suggestions-path-csrf">

          </div>

        <div class="AppHeader-actions position-relative">
             <react-partial-anchor data-catalyst="">
      <button id="global-create-menu-anchor" aria-label="Create something new" data-target="react-partial-anchor.anchor" type="button" data-view-component="true" class="AppHeader-button global-create-button Button--secondary Button--medium Button width-auto color-fg-muted" aria-describedby="tooltip-4c2c6086-0f39-43c6-a8fa-37a91860fed1" aria-expanded="false" aria-haspopup="true">  <span class="Button-content">
      <span class="Button-visual Button-leadingVisual">
        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-plus">
    <path d="M7.75 2a.75.75 0 0 1 .75.75V7h4.25a.75.75 0 0 1 0 1.5H8.5v4.25a.75.75 0 0 1-1.5 0V8.5H2.75a.75.75 0 0 1 0-1.5H7V2.75A.75.75 0 0 1 7.75 2Z"></path>
</svg>
      </span>
    <span class="Button-label"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-triangle-down">
    <path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path>
</svg></span>
  </span>
</button><tool-tip id="tooltip-4c2c6086-0f39-43c6-a8fa-37a91860fed1" for="global-create-menu-anchor" popover="manual" data-direction="s" data-type="description" data-view-component="true" class="sr-only position-absolute" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        --tooltip-top: var(--tool-tip-position-top, 0);
        --tooltip-left: var(--tool-tip-position-left, 0);
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--tooltip-fgColor, var(--fgColor-onEmphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--tooltip-bgColor, var(--bgColor-emphasis)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tooltip-top) auto auto var(--tooltip-left) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host(:is(.tooltip-n, .tooltip-nw, .tooltip-ne)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) - var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(:is(.tooltip-s, .tooltip-sw, .tooltip-se)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) + var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(.tooltip-w) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) - var(--overlay-offset, 0.25rem));
      }

      :host(.tooltip-e) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) + var(--overlay-offset, 0.25rem));
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: var(--overlay-offset, 0.25rem);
        content: "";
      }

      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }

      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open) {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      @media (forced-colors: active) {
        :host {
          outline: solid 1px transparent;
        }

        :host:before {
          display: none;
        }
      }
    </style><slot></slot></template>Create new...</tool-tip>

      
    
        <script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/vendors-node_modules_primer_react_lib-esm_Link_Link_js-node_modules_primer_react_lib-esm_Spin-5d19c4-27a4a16803c5.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/ui_packages_react-core_register-partial_ts-ui_packages_global-create-menu_GlobalCreateMenu_tsx-3ccd46b5f439.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/global-create-menu-ae41230f8ade.js.download"></script>

<react-partial partial-name="global-create-menu" data-ssr="false" datta-attempted-ssr="false" data-catalyst="" class="loaded">
  
  <script type="application/json" data-target="react-partial.embeddedData">{"props":{"createRepo":true,"importRepo":true,"codespaces":true,"gist":true,"createOrg":true,"createProject":false,"createProjectUrl":"/aryanmanlol?tab=projects","createLegacyProject":false,"createIssue":false,"org":null,"owner":"fengvyi","repo":"LeetCode"}}</script>
  <div data-target="react-partial.reactRoot"><script type="application/json" id="__PRIMER_DATA_:r36:__">{"resolvedServerColorMode":"night"}</script></div>
</react-partial>

      </react-partial-anchor>


          <a href="https://github.com/issues" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;ISSUES_HEADER&quot;,&quot;label&quot;:null}" id="icon-button-6b24915c-b13f-41b2-9c42-d5de08426895" aria-labelledby="tooltip-5e0b3004-8900-44f7-a7f7-da19e08dbe92" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium AppHeader-button color-fg-muted">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-issue-opened Button-visual">
    <path d="M8 9.5a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path><path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0ZM1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0Z"></path>
</svg>
</a><tool-tip id="tooltip-5e0b3004-8900-44f7-a7f7-da19e08dbe92" for="icon-button-6b24915c-b13f-41b2-9c42-d5de08426895" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        --tooltip-top: var(--tool-tip-position-top, 0);
        --tooltip-left: var(--tool-tip-position-left, 0);
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--tooltip-fgColor, var(--fgColor-onEmphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--tooltip-bgColor, var(--bgColor-emphasis)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tooltip-top) auto auto var(--tooltip-left) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host(:is(.tooltip-n, .tooltip-nw, .tooltip-ne)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) - var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(:is(.tooltip-s, .tooltip-sw, .tooltip-se)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) + var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(.tooltip-w) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) - var(--overlay-offset, 0.25rem));
      }

      :host(.tooltip-e) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) + var(--overlay-offset, 0.25rem));
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: var(--overlay-offset, 0.25rem);
        content: "";
      }

      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }

      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open) {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      @media (forced-colors: active) {
        :host {
          outline: solid 1px transparent;
        }

        :host:before {
          display: none;
        }
      }
    </style><slot></slot></template>Issues</tool-tip>

          <a href="https://github.com/pulls" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;PULL_REQUESTS_HEADER&quot;,&quot;label&quot;:null}" id="icon-button-88f56259-aa1e-4a42-894d-410ed3fb9400" aria-labelledby="tooltip-e7f370a3-38f5-439d-8f39-8acaa09ef3ed" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium AppHeader-button color-fg-muted">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-git-pull-request Button-visual">
    <path d="M1.5 3.25a2.25 2.25 0 1 1 3 2.122v5.256a2.251 2.251 0 1 1-1.5 0V5.372A2.25 2.25 0 0 1 1.5 3.25Zm5.677-.177L9.573.677A.25.25 0 0 1 10 .854V2.5h1A2.5 2.5 0 0 1 13.5 5v5.628a2.251 2.251 0 1 1-1.5 0V5a1 1 0 0 0-1-1h-1v1.646a.25.25 0 0 1-.427.177L7.177 3.427a.25.25 0 0 1 0-.354ZM3.75 2.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm0 9.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm8.25.75a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Z"></path>
</svg>
</a><tool-tip id="tooltip-e7f370a3-38f5-439d-8f39-8acaa09ef3ed" for="icon-button-88f56259-aa1e-4a42-894d-410ed3fb9400" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        --tooltip-top: var(--tool-tip-position-top, 0);
        --tooltip-left: var(--tool-tip-position-left, 0);
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--tooltip-fgColor, var(--fgColor-onEmphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--tooltip-bgColor, var(--bgColor-emphasis)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tooltip-top) auto auto var(--tooltip-left) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host(:is(.tooltip-n, .tooltip-nw, .tooltip-ne)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) - var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(:is(.tooltip-s, .tooltip-sw, .tooltip-se)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) + var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(.tooltip-w) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) - var(--overlay-offset, 0.25rem));
      }

      :host(.tooltip-e) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) + var(--overlay-offset, 0.25rem));
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: var(--overlay-offset, 0.25rem);
        content: "";
      }

      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }

      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open) {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      @media (forced-colors: active) {
        :host {
          outline: solid 1px transparent;
        }

        :host:before {
          display: none;
        }
      }
    </style><slot></slot></template>Pull requests</tool-tip>

        </div>

        <notification-indicator data-channel="eyJjIjoibm90aWZpY2F0aW9uLWNoYW5nZWQ6MTU2OTg3ODUzIiwidCI6MTcyNzgxMjcyMn0=--fa32c949c88c3a4278244e7d6bf93ee487e8620565c39ab1b73e3abac4f41237" data-indicator-mode="global" data-tooltip-global="You have unread notifications" data-tooltip-unavailable="Notifications are unavailable at the moment." data-tooltip-none="You have no unread notifications" data-header-redesign-enabled="true" data-fetch-indicator-src="/notifications/indicator" data-fetch-indicator-enabled="true" data-view-component="true" class="js-socket-channel" data-fetch-retry-delay-time="500" data-catalyst="">
    <a id="AppHeader-notifications-button" href="https://github.com/notifications" aria-labelledby="notification-indicator-tooltip" data-hotkey="g n" data-target="notification-indicator.link" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;NOTIFICATIONS_HEADER&quot;,&quot;label&quot;:&quot;icon:unread&quot;}" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium AppHeader-button color-fg-muted AppHeader-button--hasIndicator">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-inbox Button-visual">
    <path d="M2.8 2.06A1.75 1.75 0 0 1 4.41 1h7.18c.7 0 1.333.417 1.61 1.06l2.74 6.395c.04.093.06.194.06.295v4.5A1.75 1.75 0 0 1 14.25 15H1.75A1.75 1.75 0 0 1 0 13.25v-4.5c0-.101.02-.202.06-.295Zm1.61.44a.25.25 0 0 0-.23.152L1.887 8H4.75a.75.75 0 0 1 .6.3L6.625 10h2.75l1.275-1.7a.75.75 0 0 1 .6-.3h2.863L11.82 2.652a.25.25 0 0 0-.23-.152Zm10.09 7h-2.875l-1.275 1.7a.75.75 0 0 1-.6.3h-3.5a.75.75 0 0 1-.6-.3L4.375 9.5H1.5v3.75c0 .138.112.25.25.25h12.5a.25.25 0 0 0 .25-.25Z"></path>
</svg>
</a>

    <tool-tip id="notification-indicator-tooltip" data-target="notification-indicator.tooltip" for="AppHeader-notifications-button" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="position-absolute sr-only" aria-hidden="true" role="tooltip" style="--tool-tip-position-top: 48px; --tool-tip-position-left: 520.4249877929688px;"><template shadowrootmode="open"><style>
      :host {
        --tooltip-top: var(--tool-tip-position-top, 0);
        --tooltip-left: var(--tool-tip-position-left, 0);
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--tooltip-fgColor, var(--fgColor-onEmphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--tooltip-bgColor, var(--bgColor-emphasis)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tooltip-top) auto auto var(--tooltip-left) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host(:is(.tooltip-n, .tooltip-nw, .tooltip-ne)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) - var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(:is(.tooltip-s, .tooltip-sw, .tooltip-se)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) + var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(.tooltip-w) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) - var(--overlay-offset, 0.25rem));
      }

      :host(.tooltip-e) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) + var(--overlay-offset, 0.25rem));
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: var(--overlay-offset, 0.25rem);
        content: "";
      }

      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }

      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open) {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      @media (forced-colors: active) {
        :host {
          outline: solid 1px transparent;
        }

        :host:before {
          display: none;
        }
      }
    </style><slot></slot></template>You have unread notifications</tool-tip>
</notification-indicator>

        

        <div class="AppHeader-user">
          <deferred-side-panel data-url="/_side-panels/user?repository_id=99477738" data-catalyst="">
  <include-fragment data-target="deferred-side-panel.fragment"><template shadowrootmode="open"><style>:host {display: block;}</style><slot></slot></template>
    <react-partial-anchor data-catalyst="">
  <button data-target="react-partial-anchor.anchor" data-login="aryanmanlol" aria-label="Open user navigation menu" type="button" data-view-component="true" class="Button--invisible Button--medium Button Button--invisible-noVisuals color-bg-transparent p-0" fdprocessedid="qwwge" aria-expanded="false" aria-haspopup="true">  <span class="Button-content">
    <span class="Button-label"><img src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/156987853" alt="" size="32" height="32" width="32" data-view-component="true" class="avatar circle"></span>
  </span>
</button>
  

    <script crossorigin="anonymous" defer="defer" type="application/javascript" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/global-user-nav-drawer-e429340f23c4.js.download"></script>
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/global-user-nav-drawer.830d6c10c9fea7fc134e.module.css">

<react-partial partial-name="global-user-nav-drawer" data-ssr="false" datta-attempted-ssr="false" data-catalyst="" class="loaded">
  
  <script type="application/json" data-target="react-partial.embeddedData">{"props":{"owner":{"login":"aryanmanlol","name":"Aryanman ","avatarUrl":"https://avatars.githubusercontent.com/u/156987853?v=4"},"drawerId":"global-user-nav-drawer","lazyLoadItemDataFetchUrl":"/_side-panels/user.json","canAddAccount":true,"addAccountPath":"/login?add_account=1\u0026return_to=https%3A%2F%2Fgithub.com%2F_view_fragments%2FVoltron%3A%3ACommitFragmentsController%2Fshow%2Ffengvyi%2FLeetCode%2F04d012e5dcccad0a7087e885a83bd6b9872670a4%2Frepo_layout","switchAccountPath":"/switch_account","loginAccountPath":"/login?add_account=1","projectsPath":"/aryanmanlol?tab=projects","gistsUrl":"https://gist.github.com/mine","docsUrl":"https://docs.github.com","yourEnterpriseUrl":null,"enterpriseSettingsUrl":null,"supportUrl":"https://support.github.com","showAccountSwitcher":true,"showEnterprises":true,"showEnterprise":false,"showGists":true,"showSponsors":true,"showFeaturesPreviews":true,"showEnterpriseSettings":false,"createMenuProps":{"createRepo":true,"importRepo":true,"codespaces":true,"gist":true,"createOrg":true,"createProject":false,"createProjectUrl":"/aryanmanlol?tab=projects","createLegacyProject":false,"createIssue":false,"org":null,"owner":"fengvyi","repo":"LeetCode"}}}</script>
  <div data-target="react-partial.reactRoot"><script type="application/json" id="__PRIMER_DATA_:r39:__">{"resolvedServerColorMode":"night"}</script></div>
</react-partial>

  </react-partial-anchor>

  </include-fragment>
</deferred-side-panel>
        </div>

        <div class="position-absolute mt-2">
            
<site-header-logged-in-user-menu data-catalyst="">

</site-header-logged-in-user-menu>

        </div>
      </div>
    </div>


      <div class="AppHeader-localBar">
        <nav data-pjax="#js-repo-pjax-container" aria-label="Repository" data-view-component="true" class="js-repo-nav js-sidenav-container-pjax js-responsive-underlinenav overflow-hidden UnderlineNav">

  <ul data-view-component="true" class="UnderlineNav-body list-style-none">
      <li data-view-component="true" class="d-inline-flex">
  <a id="code-tab" href="https://github.com/fengvyi/LeetCode" data-tab-item="i0code-tab" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches repo_packages repo_deployments repo_attestations /fengvyi/LeetCode" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-hotkey="g c" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Code&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item selected" aria-current="page">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-code UnderlineNav-octicon d-none d-sm-inline">
    <path d="m11.28 3.22 4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734L13.94 8l-3.72-3.72a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215Zm-6.56 0a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042L2.06 8l3.72 3.72a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L.47 8.53a.75.75 0 0 1 0-1.06Z"></path>
</svg>
        <span data-content="Code">Code</span>
          <span id="code-repo-tab-count" data-pjax-replace="" data-turbo-replace="" title="Not available" data-view-component="true" class="Counter"></span>


    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="issues-tab" href="https://github.com/fengvyi/LeetCode/issues" data-tab-item="i1issues-tab" data-selected-links="repo_issues repo_labels repo_milestones /fengvyi/LeetCode/issues" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-hotkey="g i" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Issues&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-issue-opened UnderlineNav-octicon d-none d-sm-inline">
    <path d="M8 9.5a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path><path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0ZM1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0Z"></path>
</svg>
        <span data-content="Issues">Issues</span>
          <span id="issues-repo-tab-count" data-pjax-replace="" data-turbo-replace="" title="0" hidden="hidden" data-view-component="true" class="Counter">0</span>


    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="pull-requests-tab" href="https://github.com/fengvyi/LeetCode/pulls" data-tab-item="i2pull-requests-tab" data-selected-links="repo_pulls checks /fengvyi/LeetCode/pulls" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-hotkey="g p" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Pull requests&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-git-pull-request UnderlineNav-octicon d-none d-sm-inline">
    <path d="M1.5 3.25a2.25 2.25 0 1 1 3 2.122v5.256a2.251 2.251 0 1 1-1.5 0V5.372A2.25 2.25 0 0 1 1.5 3.25Zm5.677-.177L9.573.677A.25.25 0 0 1 10 .854V2.5h1A2.5 2.5 0 0 1 13.5 5v5.628a2.251 2.251 0 1 1-1.5 0V5a1 1 0 0 0-1-1h-1v1.646a.25.25 0 0 1-.427.177L7.177 3.427a.25.25 0 0 1 0-.354ZM3.75 2.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm0 9.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm8.25.75a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Z"></path>
</svg>
        <span data-content="Pull requests">Pull requests</span>
          <span id="pull-requests-repo-tab-count" data-pjax-replace="" data-turbo-replace="" title="1" data-view-component="true" class="Counter">1</span>


    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="actions-tab" href="https://github.com/fengvyi/LeetCode/actions" data-tab-item="i3actions-tab" data-selected-links="repo_actions /fengvyi/LeetCode/actions" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-hotkey="g a" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Actions&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-play UnderlineNav-octicon d-none d-sm-inline">
    <path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0ZM1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0Zm4.879-2.773 4.264 2.559a.25.25 0 0 1 0 .428l-4.264 2.559A.25.25 0 0 1 6 10.559V5.442a.25.25 0 0 1 .379-.215Z"></path>
</svg>
        <span data-content="Actions">Actions</span>
          <span id="actions-repo-tab-count" data-pjax-replace="" data-turbo-replace="" title="Not available" data-view-component="true" class="Counter"></span>


    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="projects-tab" href="https://github.com/fengvyi/LeetCode/projects" data-tab-item="i4projects-tab" data-selected-links="repo_projects new_repo_project repo_project /fengvyi/LeetCode/projects" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-hotkey="g b" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Projects&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-table UnderlineNav-octicon d-none d-sm-inline">
    <path d="M0 1.75C0 .784.784 0 1.75 0h12.5C15.216 0 16 .784 16 1.75v12.5A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25ZM6.5 6.5v8h7.75a.25.25 0 0 0 .25-.25V6.5Zm8-1.5V1.75a.25.25 0 0 0-.25-.25H6.5V5Zm-13 1.5v7.75c0 .138.112.25.25.25H5v-8ZM5 5V1.5H1.75a.25.25 0 0 0-.25.25V5Z"></path>
</svg>
        <span data-content="Projects">Projects</span>
          <span id="projects-repo-tab-count" data-pjax-replace="" data-turbo-replace="" title="0" hidden="hidden" data-view-component="true" class="Counter">0</span>


    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="security-tab" href="https://github.com/fengvyi/LeetCode/security" data-tab-item="i5security-tab" data-selected-links="security overview alerts policy token_scanning code_scanning /fengvyi/LeetCode/security" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-hotkey="g s" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Security&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-shield UnderlineNav-octicon d-none d-sm-inline">
    <path d="M7.467.133a1.748 1.748 0 0 1 1.066 0l5.25 1.68A1.75 1.75 0 0 1 15 3.48V7c0 1.566-.32 3.182-1.303 4.682-.983 1.498-2.585 2.813-5.032 3.855a1.697 1.697 0 0 1-1.33 0c-2.447-1.042-4.049-2.357-5.032-3.855C1.32 10.182 1 8.566 1 7V3.48a1.75 1.75 0 0 1 1.217-1.667Zm.61 1.429a.25.25 0 0 0-.153 0l-5.25 1.68a.25.25 0 0 0-.174.238V7c0 1.358.275 2.666 1.057 3.86.784 1.194 2.121 2.34 4.366 3.297a.196.196 0 0 0 .154 0c2.245-.956 3.582-2.104 4.366-3.298C13.225 9.666 13.5 8.36 13.5 7V3.48a.251.251 0 0 0-.174-.237l-5.25-1.68ZM8.75 4.75v3a.75.75 0 0 1-1.5 0v-3a.75.75 0 0 1 1.5 0ZM9 10.5a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path>
</svg>
        <span data-content="Security">Security</span>
          

    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="insights-tab" href="https://github.com/fengvyi/LeetCode/pulse" data-tab-item="i6insights-tab" data-selected-links="repo_graphs repo_contributors dependency_graph dependabot_updates pulse people community /fengvyi/LeetCode/pulse" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Insights&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item" style="visibility: hidden;">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-graph UnderlineNav-octicon d-none d-sm-inline">
    <path d="M1.5 1.75V13.5h13.75a.75.75 0 0 1 0 1.5H.75a.75.75 0 0 1-.75-.75V1.75a.75.75 0 0 1 1.5 0Zm14.28 2.53-5.25 5.25a.75.75 0 0 1-1.06 0L7 7.06 4.28 9.78a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042l3.25-3.25a.75.75 0 0 1 1.06 0L10 7.94l4.72-4.72a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042Z"></path>
</svg>
        <span data-content="Insights">Insights</span>
          <span id="insights-repo-tab-count" data-pjax-replace="" data-turbo-replace="" title="Not available" data-view-component="true" class="Counter"></span>


    
</a></li>
</ul>
    <div style="" data-view-component="true" class="UnderlineNav-actions js-responsive-underlinenav-overflow position-absolute pr-3 pr-md-4 pr-lg-5 right-0">      <action-menu data-select-variant="none" data-view-component="true" data-catalyst="">
  <focus-group direction="vertical" mnemonics="" retain="">
    <button id="action-menu-ef9b1dc6-887c-4120-b2a5-b028c28129e8-button" popovertarget="action-menu-ef9b1dc6-887c-4120-b2a5-b028c28129e8-overlay" aria-controls="action-menu-ef9b1dc6-887c-4120-b2a5-b028c28129e8-list" aria-haspopup="true" aria-labelledby="tooltip-686b655b-911e-4109-b6df-0c6565835728" type="button" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium UnderlineNav-item" fdprocessedid="gx2jhq">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-kebab-horizontal Button-visual">
    <path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path>
</svg>
</button><tool-tip id="tooltip-686b655b-911e-4109-b6df-0c6565835728" for="action-menu-ef9b1dc6-887c-4120-b2a5-b028c28129e8-button" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="position-absolute sr-only" aria-hidden="true" role="tooltip" style="--tool-tip-position-top: 96.00000190734863px; --tool-tip-position-left: 561.7375183105469px;"><template shadowrootmode="open"><style>
      :host {
        --tooltip-top: var(--tool-tip-position-top, 0);
        --tooltip-left: var(--tool-tip-position-left, 0);
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--tooltip-fgColor, var(--fgColor-onEmphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--tooltip-bgColor, var(--bgColor-emphasis)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tooltip-top) auto auto var(--tooltip-left) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host(:is(.tooltip-n, .tooltip-nw, .tooltip-ne)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) - var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(:is(.tooltip-s, .tooltip-sw, .tooltip-se)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) + var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(.tooltip-w) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) - var(--overlay-offset, 0.25rem));
      }

      :host(.tooltip-e) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) + var(--overlay-offset, 0.25rem));
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: var(--overlay-offset, 0.25rem);
        content: "";
      }

      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }

      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open) {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      @media (forced-colors: active) {
        :host {
          outline: solid 1px transparent;
        }

        :host:before {
          display: none;
        }
      }
    </style><slot></slot></template>Additional navigation options</tool-tip>


<anchored-position id="action-menu-ef9b1dc6-887c-4120-b2a5-b028c28129e8-overlay" anchor="action-menu-ef9b1dc6-887c-4120-b2a5-b028c28129e8-button" align="start" side="outside-bottom" anchor-offset="normal" popover="auto" data-view-component="true" style="inset: 36px auto auto 0px;">
  <div data-view-component="true" class="Overlay Overlay--size-auto">
    
      <div data-view-component="true" class="Overlay-body Overlay-body--paddingNone">          <action-list data-catalyst="">
  <div data-view-component="true">
    <ul aria-labelledby="action-menu-ef9b1dc6-887c-4120-b2a5-b028c28129e8-button" id="action-menu-ef9b1dc6-887c-4120-b2a5-b028c28129e8-list" role="menu" data-view-component="true" class="ActionListWrap--inset ActionListWrap">
        <li hidden="" data-menu-item="i0code-tab" data-targets="action-list.items" role="none" data-view-component="true" class="ActionListItem">
    
    
    <a tabindex="-1" id="item-00350564-28ab-43c4-9a43-fcfd1eec02f3" href="https://github.com/fengvyi/LeetCode" role="menuitem" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-code">
    <path d="m11.28 3.22 4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734L13.94 8l-3.72-3.72a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215Zm-6.56 0a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042L2.06 8l3.72 3.72a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L.47 8.53a.75.75 0 0 1 0-1.06Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Code
</span>      
</a>
  
</li>
        <li hidden="" data-menu-item="i1issues-tab" data-targets="action-list.items" role="none" data-view-component="true" class="ActionListItem">
    
    
    <a tabindex="-1" id="item-fd68a0f4-49ad-425d-b68d-2f3449f59a55" href="https://github.com/fengvyi/LeetCode/issues" role="menuitem" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-issue-opened">
    <path d="M8 9.5a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path><path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0ZM1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Issues
</span>      
</a>
  
</li>
        <li hidden="" data-menu-item="i2pull-requests-tab" data-targets="action-list.items" role="none" data-view-component="true" class="ActionListItem">
    
    
    <a tabindex="-1" id="item-1d19ecca-9184-4c9c-b9b5-b568bff46b55" href="https://github.com/fengvyi/LeetCode/pulls" role="menuitem" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-git-pull-request">
    <path d="M1.5 3.25a2.25 2.25 0 1 1 3 2.122v5.256a2.251 2.251 0 1 1-1.5 0V5.372A2.25 2.25 0 0 1 1.5 3.25Zm5.677-.177L9.573.677A.25.25 0 0 1 10 .854V2.5h1A2.5 2.5 0 0 1 13.5 5v5.628a2.251 2.251 0 1 1-1.5 0V5a1 1 0 0 0-1-1h-1v1.646a.25.25 0 0 1-.427.177L7.177 3.427a.25.25 0 0 1 0-.354ZM3.75 2.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm0 9.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm8.25.75a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Pull requests
</span>      
</a>
  
</li>
        <li hidden="" data-menu-item="i3actions-tab" data-targets="action-list.items" role="none" data-view-component="true" class="ActionListItem">
    
    
    <a tabindex="-1" id="item-9d3d11a9-b801-4ba9-92e0-7fdbe9608294" href="https://github.com/fengvyi/LeetCode/actions" role="menuitem" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-play">
    <path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0ZM1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0Zm4.879-2.773 4.264 2.559a.25.25 0 0 1 0 .428l-4.264 2.559A.25.25 0 0 1 6 10.559V5.442a.25.25 0 0 1 .379-.215Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Actions
</span>      
</a>
  
</li>
        <li hidden="" data-menu-item="i4projects-tab" data-targets="action-list.items" role="none" data-view-component="true" class="ActionListItem">
    
    
    <a tabindex="-1" id="item-cc26b78d-0e3e-4553-94b8-49b292b254d3" href="https://github.com/fengvyi/LeetCode/projects" role="menuitem" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-table">
    <path d="M0 1.75C0 .784.784 0 1.75 0h12.5C15.216 0 16 .784 16 1.75v12.5A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25ZM6.5 6.5v8h7.75a.25.25 0 0 0 .25-.25V6.5Zm8-1.5V1.75a.25.25 0 0 0-.25-.25H6.5V5Zm-13 1.5v7.75c0 .138.112.25.25.25H5v-8ZM5 5V1.5H1.75a.25.25 0 0 0-.25.25V5Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Projects
</span>      
</a>
  
</li>
        <li hidden="" data-menu-item="i5security-tab" data-targets="action-list.items" role="none" data-view-component="true" class="ActionListItem">
    
    
    <a tabindex="-1" id="item-e6178e4b-5616-4c46-b82a-e66c91c08990" href="https://github.com/fengvyi/LeetCode/security" role="menuitem" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-shield">
    <path d="M7.467.133a1.748 1.748 0 0 1 1.066 0l5.25 1.68A1.75 1.75 0 0 1 15 3.48V7c0 1.566-.32 3.182-1.303 4.682-.983 1.498-2.585 2.813-5.032 3.855a1.697 1.697 0 0 1-1.33 0c-2.447-1.042-4.049-2.357-5.032-3.855C1.32 10.182 1 8.566 1 7V3.48a1.75 1.75 0 0 1 1.217-1.667Zm.61 1.429a.25.25 0 0 0-.153 0l-5.25 1.68a.25.25 0 0 0-.174.238V7c0 1.358.275 2.666 1.057 3.86.784 1.194 2.121 2.34 4.366 3.297a.196.196 0 0 0 .154 0c2.245-.956 3.582-2.104 4.366-3.298C13.225 9.666 13.5 8.36 13.5 7V3.48a.251.251 0 0 0-.174-.237l-5.25-1.68ZM8.75 4.75v3a.75.75 0 0 1-1.5 0v-3a.75.75 0 0 1 1.5 0ZM9 10.5a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Security
</span>      
</a>
  
</li>
        <li data-menu-item="i6insights-tab" data-targets="action-list.items" role="none" data-view-component="true" class="ActionListItem">
    
    
    <a tabindex="-1" id="item-a9fd355d-6ca4-465d-b744-252899b6863d" href="https://github.com/fengvyi/LeetCode/pulse" role="menuitem" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-graph">
    <path d="M1.5 1.75V13.5h13.75a.75.75 0 0 1 0 1.5H.75a.75.75 0 0 1-.75-.75V1.75a.75.75 0 0 1 1.5 0Zm14.28 2.53-5.25 5.25a.75.75 0 0 1-1.06 0L7 7.06 4.28 9.78a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042l3.25-3.25a.75.75 0 0 1 1.06 0L10 7.94l4.72-4.72a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Insights
</span>      
</a>
  
</li>
</ul>    
</div></action-list>


</div>
      
</div></anchored-position>  </focus-group>
</action-menu></div>
</nav>
      </div>
</header>


      <div hidden="hidden" data-view-component="true" class="js-stale-session-flash stale-session-flash flash flash-warn flash-full">
  
        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-alert">
    <path d="M6.457 1.047c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0 1 14.082 15H1.918a1.75 1.75 0 0 1-1.543-2.575Zm1.763.707a.25.25 0 0 0-.44 0L1.698 13.132a.25.25 0 0 0 .22.368h12.164a.25.25 0 0 0 .22-.368Zm.53 3.996v2.5a.75.75 0 0 1-1.5 0v-2.5a.75.75 0 0 1 1.5 0ZM9 11a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path>
</svg>
        <span class="js-stale-session-flash-signed-in" hidden="">You signed in with another tab or window. <a class="Link--inTextBlock" href="https://github.com/fengvyi/LeetCode/commit/04d012e5dcccad0a7087e885a83bd6b9872670a4">Reload</a> to refresh your session.</span>
        <span class="js-stale-session-flash-signed-out" hidden="">You signed out in another tab or window. <a class="Link--inTextBlock" href="https://github.com/fengvyi/LeetCode/commit/04d012e5dcccad0a7087e885a83bd6b9872670a4">Reload</a> to refresh your session.</span>
        <span class="js-stale-session-flash-switched" hidden="">You switched accounts on another tab or window. <a class="Link--inTextBlock" href="https://github.com/fengvyi/LeetCode/commit/04d012e5dcccad0a7087e885a83bd6b9872670a4">Reload</a> to refresh your session.</span>

    <button id="icon-button-78f71afa-ab65-481d-bd87-921a71bdedad" aria-labelledby="tooltip-cc731326-73c0-4fe6-8fd3-e5f0baf6c82e" type="button" data-view-component="true" class="Button Button--iconOnly Button--invisible Button--medium flash-close js-flash-close">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x Button-visual">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg>
</button><tool-tip id="tooltip-cc731326-73c0-4fe6-8fd3-e5f0baf6c82e" for="icon-button-78f71afa-ab65-481d-bd87-921a71bdedad" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        --tooltip-top: var(--tool-tip-position-top, 0);
        --tooltip-left: var(--tool-tip-position-left, 0);
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--tooltip-fgColor, var(--fgColor-onEmphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--tooltip-bgColor, var(--bgColor-emphasis)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tooltip-top) auto auto var(--tooltip-left) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host(:is(.tooltip-n, .tooltip-nw, .tooltip-ne)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) - var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(:is(.tooltip-s, .tooltip-sw, .tooltip-se)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) + var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(.tooltip-w) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) - var(--overlay-offset, 0.25rem));
      }

      :host(.tooltip-e) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) + var(--overlay-offset, 0.25rem));
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: var(--overlay-offset, 0.25rem);
        content: "";
      }

      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }

      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open) {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      @media (forced-colors: active) {
        :host {
          outline: solid 1px transparent;
        }

        :host:before {
          display: none;
        }
      }
    </style><slot></slot></template>Dismiss alert</tool-tip>


  
</div>
          
    </div>

  <div id="start-of-content" class="show-on-focus"></div>








    <div id="js-flash-container" class="flash-container" data-turbo-replace="">




  <template class="js-flash-template"></template>
</div>


    
    <notification-shelf-watcher data-base-url="https://github.com/notifications/beta/shelf" data-view-component="true" class="js-socket-channel" data-refresh-delay="500" data-catalyst=""></notification-shelf-watcher>
  <div hidden="" data-initial="" data-target="notification-shelf-watcher.placeholder"></div>






  <div class="application-main " data-commit-hovercards-enabled="" data-discussion-hovercards-enabled="" data-issue-and-pr-hovercards-enabled="">
        <div itemscope="" itemtype="http://schema.org/SoftwareSourceCode" class="">
    <main id="js-repo-pjax-container">
      
      






    
  <div id="repository-container-header" data-turbo-replace="" hidden=""></div>




<turbo-frame id="repo-content-turbo-frame" target="_top" data-turbo-action="advance" class="">
    <div id="repo-content-pjax-container" class="repository-content ">
    



    
      
    








<react-app app-name="commits" initial-path="/_view_fragments/Voltron::CommitFragmentsController/show/fengvyi/LeetCode/04d012e5dcccad0a7087e885a83bd6b9872670a4/repo_layout" style="display: block; min-height: calc(100vh - 64px)" datta-attempted-ssr="true" data-ssr="true" data-lazy="false" data-alternate="false" data-catalyst="" class="loaded">
  
  <script type="application/json" data-target="react-app.embeddedData">{"payload":{"commit":{"oid":"04d012e5dcccad0a7087e885a83bd6b9872670a4","url":"/fengvyi/LeetCode/commit/04d012e5dcccad0a7087e885a83bd6b9872670a4","authoredDate":"2017-08-24T10:07:20.000-04:00","committedDate":"2017-08-24T10:07:20.000-04:00","shortMessage":null,"shortMessageMarkdown":"Create 001. Two Sum.cpp","shortMessageMarkdownLink":null,"bodyMessageHtml":"","authors":[{"login":"fengvyi","displayName":"fengvyi","avatarUrl":"https://avatars.githubusercontent.com/u/25286149?v=4","path":"/fengvyi","isGitHub":false}],"committerAttribution":false,"committer":{"login":"web-flow","displayName":"GitHub","avatarUrl":"https://avatars.githubusercontent.com/u/19864447?v=4","path":"/web-flow","isGitHub":true},"parents":["d1064d82c4e0b660270e1d95ae923169c0c6b1a7"],"globalRelayId":"MDY6Q29tbWl0OTk0Nzc3Mzg6MDRkMDEyZTVkY2NjYWQwYTcwODdlODg1YTgzYmQ2Yjk4NzI2NzBhNA=="},"currentUser":{"id":156987853,"login":"aryanmanlol","userEmail":"aryanmangupta58@gmail.com","avatarURL":"https://avatars.githubusercontent.com/u/156987853?v=4","tabSize":8},"repo":{"id":99477738,"defaultBranch":"master","name":"LeetCode","ownerLogin":"fengvyi","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2017-08-06T15:22:55.000+05:30","ownerAvatar":"https://avatars.githubusercontent.com/u/25286149?v=4","public":true,"private":false,"isOrgOwned":false},"diffEntryData":[{"diffLines":[{"type":"HUNK","blobLineNumber":0,"text":"@@ -0,0 +1,10 @@","html":"@@ -0,0 +1,10 @@","position":0,"left":null,"right":0},{"type":"ADDITION","blobLineNumber":1,"text":"+class Solution {","html":"+\u003cspan class=\"pl-k\"\u003eclass\u003c/span\u003e \u003cspan class=\"pl-en\"\u003eSolution\u003c/span\u003e {","position":1,"left":null,"right":1},{"type":"ADDITION","blobLineNumber":2,"text":"+public:","html":"+\u003cspan class=\"pl-k\"\u003epublic:\u003c/span\u003e","position":2,"left":null,"right":2},{"type":"ADDITION","blobLineNumber":3,"text":"+    vector\u003cint\u003e twoSum(vector\u003cint\u003e\u0026 nums, int target) {","html":"+    vector\u0026lt;\u003cspan class=\"pl-k\"\u003eint\u003c/span\u003e\u0026gt; \u003cspan class=\"pl-en\"\u003etwoSum\u003c/span\u003e(vector\u0026lt;\u003cspan class=\"pl-k\"\u003eint\u003c/span\u003e\u0026gt;\u0026amp; nums, \u003cspan class=\"pl-k\"\u003eint\u003c/span\u003e target) {","position":3,"left":null,"right":3},{"type":"ADDITION","blobLineNumber":4,"text":"+        unordered_map\u003cint, int\u003em;","html":"+        unordered_map\u0026lt;\u003cspan class=\"pl-k\"\u003eint\u003c/span\u003e, \u003cspan class=\"pl-k\"\u003eint\u003c/span\u003e\u0026gt;m;","position":4,"left":null,"right":4},{"type":"ADDITION","blobLineNumber":5,"text":"+        for(int i = 0; i \u003c nums.size(); i++){","html":"+        \u003cspan class=\"pl-k\"\u003efor\u003c/span\u003e(\u003cspan class=\"pl-k\"\u003eint\u003c/span\u003e i = \u003cspan class=\"pl-c1\"\u003e0\u003c/span\u003e; i \u0026lt; nums.\u003cspan class=\"pl-c1\"\u003esize\u003c/span\u003e(); i++){","position":5,"left":null,"right":5},{"type":"ADDITION","blobLineNumber":6,"text":"+            if(m.count(target - nums[i])) return {m[target - nums[i]], i};","html":"+            \u003cspan class=\"pl-k\"\u003eif\u003c/span\u003e(m.\u003cspan class=\"pl-c1\"\u003ecount\u003c/span\u003e(target - nums[i])) \u003cspan class=\"pl-k\"\u003ereturn\u003c/span\u003e {m[target - nums[i]], i};","position":6,"left":null,"right":6},{"type":"ADDITION","blobLineNumber":7,"text":"+            m[nums[i]] = i;","html":"+            m[nums[i]] = i;","position":7,"left":null,"right":7},{"type":"ADDITION","blobLineNumber":8,"text":"+        }","html":"+        }","position":8,"left":null,"right":8},{"type":"ADDITION","blobLineNumber":9,"text":"+    }","html":"+    }","position":9,"left":null,"right":9},{"type":"ADDITION","blobLineNumber":10,"text":"+};","html":"+};","position":10,"left":null,"right":10}],"diffNumber":0,"isBinary":false,"isTooBig":false,"isSubmodule":false,"linesChanged":10,"newTreeEntry":{"path":"C++/001. Two Sum.cpp","mode":100644,"lineCount":10,"isGenerated":false},"oldTreeEntry":null,"linesAdded":10,"linesDeleted":0,"path":"C++/001. Two Sum.cpp","pathDigest":"e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56","status":"ADDED","truncatedReason":null,"oldOid":"d1064d82c4e0b660270e1d95ae923169c0c6b1a7","newOid":"04d012e5dcccad0a7087e885a83bd6b9872670a4","copilotChatReferenceData":{"isBinary":false,"isSubmodule":false,"newTreeEntry":null,"oldTreeEntry":{"path":"C++/001. Two Sum.cpp","size":283},"path":"C++/001. Two Sum.cpp","pathDigest":"e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56","rawUrl":"https://github.com/fengvyi/LeetCode/raw/d1064d82c4e0b660270e1d95ae923169c0c6b1a7/C++/001. Two Sum.cpp","isLfsPointer":false},"deletedSha":"d1064d82c4e0b660270e1d95ae923169c0c6b1a7","canToggleRichDiff":false,"defaultToRichDiff":false,"proseDifffHtml":null,"renderInfo":null,"dependencyDiffPath":null}],"splitViewPreference":"unified","ignoreWhitespace":false,"diffLineSpacingPreference":"relaxed","userNotices":[{"name":"compact_diff_lines","dismissed":false}],"path":"/_view_fragments/Voltron::CommitFragmentsController/show/fengvyi/LeetCode/04d012e5dcccad0a7087e885a83bd6b9872670a4/repo_layout","fileTreeExpanded":true,"headerInfo":{"additions":10,"deletions":0,"filesChanged":1,"filesChangedString":"1"},"moreDiffsToLoad":false,"asyncDiffLoadInfo":{"startIndex":1,"truncated":false,"byteCount":309,"lineShownCount":11},"commentInfo":{"canComment":true,"locked":false,"canLock":false,"repoArchived":false},"csrf_tokens":{"/users/diffview?diff=split":{"post":"1PwpYELkUQ6hRoCTa5Y9cJp4XCOexNF9e-1xV2z8g674vLgQDsRH1iR-a9SwbVuWF63SUfBL66-0HqxQmFZfPg"},"/users/diffview?diff=unified":{"post":"SpG-C-Kt1NTqcLgVzz012StFz_ab4AJxdwnThe0WkPtm0S97ro3CDG9IU1IUxlM_ppBBhPVvOKO4-g6CGbxMaw"},"/users/aryanmanlol/pulls/settings/file_tree_visibility":{"put":"ruHOwkxmoCFAlPEMfYINL030j3QqjQkWv6l2mRR7MhBBnc6Bqw2djjgwXZIi-vCxtO31DO4LrMg-sKCBmcz-JQ"},"/notifications/thread":{"post":"yzUbtbjD9MLDMyGIsNkBqXcRFHt9AnUlCmn0FMZR98DLeoi0sWGkqdzp_lZpFzAe7N234r-wQeHEs_43isIwFw"}}},"title":"Create 001. Two Sum.cpp · fengvyi/LeetCode@04d012e","appPayload":{"helpUrl":"https://docs.github.com","findInDiffWorkerPath":"/assets-cdn/worker/find-in-diff-worker-75a188dc7aee.js","enabled_features":{"diff_ux_refresh_beta":true,"diff_ux_refresh_tab_wrap_reset":true,"diff_compact_lines":true}}}</script>
  <div data-target="react-app.reactRoot"> <!-- --> <div class="d-none"></div><div style="--sticky-pane-height: calc(100vh - (max(176.7375030517578px, 0px)));" class="Box-sc-g0xbh4-0 hOfjFo"><div class="Box-sc-g0xbh4-0 oDGAe"><header class="Box-sc-g0xbh4-0 eQkynW"><div class="Box-sc-g0xbh4-0 kkWQEA"><div class="Box-sc-g0xbh4-0 fHrHav"><div class="Box-sc-g0xbh4-0 RAkv" data-component="TitleArea" data-size-variant="large"><h1 class="Box-sc-g0xbh4-0 gTYCFh f2 prc-Heading-Heading-6CmGO" data-component="PH_Title"><span class="Text__StyledText-sc-17v1xeu-0 hWqAbU markdown-title">Create 001. Two Sum.cpp</span></h1></div><div class="Box-sc-g0xbh4-0 kuCWTy"><div class="Box-sc-g0xbh4-0 clUckM"><div class="d-flex flex-items-center gap-2"><span class="Label__StyledLabel-sc-1dgcne-0 bdkuHI">Beta</span><a class="no-wrap f5 text-normal prc-Link-Link-85e08" href="https://gh.io/new-commit-details-feedback" target="_blank" rel="noopener noreferrer">Give feedback</a></div></div><div class="Box-sc-g0xbh4-0 keCuOF"><a class="Box-sc-g0xbh4-0 fzHQfk types__StyledButton-sc-ws60qy-0 cDbgyb prc-Button-IconButton-szpyj prc-Link-Link-85e08" data-component="IconButton" type="button" href="https://github.com/fengvyi/LeetCode/tree/04d012e5dcccad0a7087e885a83bd6b9872670a4" data-loading="false" data-no-visuals="true" data-size="medium" aria-describedby=":Reabab:-loading-announcement" aria-labelledby=":R2abab:"><svg aria-hidden="true" focusable="false" class="octicon octicon-file-code" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display:inline-block;user-select:none;vertical-align:text-bottom;overflow:visible"><path d="M4 1.75C4 .784 4.784 0 5.75 0h5.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v8.586A1.75 1.75 0 0 1 14.25 15h-9a.75.75 0 0 1 0-1.5h9a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 10 4.25V1.5H5.75a.25.25 0 0 0-.25.25v2.5a.75.75 0 0 1-1.5 0Zm1.72 4.97a.75.75 0 0 1 1.06 0l2 2a.75.75 0 0 1 0 1.06l-2 2a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734l1.47-1.47-1.47-1.47a.75.75 0 0 1 0-1.06ZM3.28 7.78 1.81 9.25l1.47 1.47a.751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018l-2-2a.75.75 0 0 1 0-1.06l2-2a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042Zm8.22-6.218V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg></a><span data-direction="sw" aria-hidden="true" id=":R2abab:" class="Tooltip__StyledTooltip-sc-e45c7z-0 fLAhLl" popover="auto" style="top: 156px; left: 660.75px;">Browse files</span></div></div><div class="Box-sc-g0xbh4-0 bnmsDs CommitHeader-module__commit-header-actions--kHXV1" data-component="PH_Actions"><div class="d-none d-md-flex gap-2 flex-items-center flex-justify-between flex-md-justify-end"><div class="d-flex flex-items-center gap-2"><span class="Label__StyledLabel-sc-1dgcne-0 bdkuHI">Beta</span><a class="no-wrap f5 text-normal prc-Link-Link-85e08" href="https://gh.io/new-commit-details-feedback" target="_blank" rel="noopener noreferrer">Give feedback</a></div><span role="tooltip" aria-label="Browse the repository at this point in the history" id=":R2ebab:" class="Tooltip__TooltipBase-sc-17tf59c-0 itVfLR tooltipped-sw"><a class="Box-sc-g0xbh4-0 fzHQfk types__StyledButton-sc-ws60qy-0 cDbgyb prc-Link-Link-85e08" type="button" href="https://github.com/fengvyi/LeetCode/tree/04d012e5dcccad0a7087e885a83bd6b9872670a4" data-loading="false" data-size="medium" aria-describedby=":R6ebab:-loading-announcement"><span data-component="buttonContent" class="Box-sc-g0xbh4-0 gUkoLg"><span data-component="leadingVisual" class="Box-sc-g0xbh4-0 hzSPyu"><svg aria-hidden="true" focusable="false" class="octicon octicon-file-code" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display:inline-block;user-select:none;vertical-align:text-bottom;overflow:visible"><path d="M4 1.75C4 .784 4.784 0 5.75 0h5.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v8.586A1.75 1.75 0 0 1 14.25 15h-9a.75.75 0 0 1 0-1.5h9a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 10 4.25V1.5H5.75a.25.25 0 0 0-.25.25v2.5a.75.75 0 0 1-1.5 0Zm1.72 4.97a.75.75 0 0 1 1.06 0l2 2a.75.75 0 0 1 0 1.06l-2 2a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734l1.47-1.47-1.47-1.47a.75.75 0 0 1 0-1.06ZM3.28 7.78 1.81 9.25l1.47 1.47a.751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018l-2-2a.75.75 0 0 1 0-1.06l2-2a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042Zm8.22-6.218V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg></span><span data-component="text">Browse files</span></span></a></span></div></div><div class="Box-sc-g0xbh4-0 kScZQx"><div class="d-flex flex-column gap-2 width-full"><div class="Box-sc-g0xbh4-0 dpBUfI color-fg-muted"><div data-testid="author-avatar" class="Box-sc-g0xbh4-0 hKWjvQ"><a class="prc-Link-Link-85e08" href="https://github.com/fengvyi" data-testid="avatar-icon-link" data-hovercard-url="/users/fengvyi/hovercard"><img data-component="Avatar" class="Avatar__StyledAvatar-sc-2lv0r8-0 ftDNwr" alt="fengvyi" size="20" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/25286149" data-testid="github-avatar" aria-label="fengvyi" height="20" width="20"></a><a class="Box-sc-g0xbh4-0 kJvqaq prc-Link-Link-85e08" data-muted="true" muted="" href="https://github.com/fengvyi/LeetCode/commits?author=fengvyi" aria-label="commits by fengvyi" data-hovercard-url="/users/fengvyi/hovercard">fengvyi</a></div><span class="pl-1">authored</span><relative-time class="sc-aXZVg pl-1" tense="past" datetime="2017-08-24T14:07:20.000Z" title="Aug 24, 2017, 7:37 PM GMT+5:30"><template shadowrootmode="open">7 years ago</template>Aug 24, 2017</relative-time><div class="ml-2"></div></div><div class="color-bg-default position-relative border rounded-2 color-border-default mt-2 d-flex flex-column pt-0"><div class="p-2 d-flex gap-2 flex-column flex-md-row flex-justify-between"><div class="d-flex flex-row flex-items-center"><div class="d-flex flex-items-center flex-wrap fgColor-muted gap-1"><svg aria-hidden="true" focusable="false" class="Octicon-sc-9kayk9-0 mr-1" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display:inline-block;user-select:none;vertical-align:text-bottom;overflow:visible"><path d="M9.5 3.25a2.25 2.25 0 1 1 3 2.122V6A2.5 2.5 0 0 1 10 8.5H6a1 1 0 0 0-1 1v1.128a2.251 2.251 0 1 1-1.5 0V5.372a2.25 2.25 0 1 1 1.5 0v1.836A2.493 2.493 0 0 1 6 7h4a1 1 0 0 0 1-1v-.628A2.25 2.25 0 0 1 9.5 3.25Zm-6 0a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Zm8.25-.75a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5ZM4.25 12a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Z"></path></svg><div><a class="BranchName-sc-sg8jsy-0 ePZvcf mx-1" href="https://github.com/fengvyi/LeetCode/tree/master">master</a></div></div></div><pre class="color-fg-muted d-flex flex-items-center">1 parent <a class="color-fg-default Link--inTextBlock prc-Link-Link-85e08" data-hovercard-url="/fengvyi/LeetCode/commit/d1064d82c4e0b660270e1d95ae923169c0c6b1a7/hovercard" href="https://github.com/fengvyi/LeetCode/commit/d1064d82c4e0b660270e1d95ae923169c0c6b1a7">d1064d8</a> commit <span class="fgColor-default">04d012e</span><div><div aria-describedby=":R9aibab:"><button aria-label="Copy full SHA for 04d012e" tabindex="0" class="Button Button--iconOnly Button--invisible Button--small " fdprocessedid="ujnkax"><svg aria-hidden="true" focusable="false" class="Octicon-sc-9kayk9-0" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display:inline-block;user-select:none;vertical-align:text-bottom;overflow:visible"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path></svg></button></div></div></pre></div></div></div></div></div></div><div class="Box-sc-g0xbh4-0 joJRTe"></div></header><div class="Box-sc-g0xbh4-0 kowOcT"><div class="Box-sc-g0xbh4-0 fYuKbd"><div class="Box-sc-g0xbh4-0 hPvFuC"></div><div style="--pane-width:296px" class="Box-sc-g0xbh4-0 glhAZp"><div class="d-flex flex-column gap-2" id="diff_file_tree"><h2 class="sr-only">File tree</h2><div class="d-md-none"><div class="d-flex flex-items-center flex-justify-between gap-2 pt-3 pt-lg-4 pb-2 position-sticky top-0 color-bg-default" style="z-index: 2;"><div class="d-flex flex-items-center"><span role="tooltip" aria-label="Expand file tree" id="expand-button-file-tree-button" class="Tooltip__TooltipBase-sc-17tf59c-0 fiSvBN tooltipped-se"><button data-component="IconButton" type="button" data-testid="expand-file-tree-button" aria-expanded="false" aria-controls="diff_file_tree" class="types__StyledButton-sc-ws60qy-0 hQsKGs d-md-none position-relative fgColor-muted prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" aria-describedby=":r2n:-loading-announcement" aria-labelledby="expand-button-file-tree-button"><svg aria-hidden="true" focusable="false" class="octicon octicon-sidebar-collapse" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display: inline-block; user-select: none; vertical-align: text-bottom; overflow: visible;"><path d="M6.823 7.823a.25.25 0 0 1 0 .354l-2.396 2.396A.25.25 0 0 1 4 10.396V5.604a.25.25 0 0 1 .427-.177Z"></path><path d="M1.75 0h12.5C15.216 0 16 .784 16 1.75v12.5A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25V1.75C0 .784.784 0 1.75 0ZM1.5 1.75v12.5c0 .138.112.25.25.25H9.5v-13H1.75a.25.25 0 0 0-.25.25ZM11 14.5h3.25a.25.25 0 0 0 .25-.25V1.75a.25.25 0 0 0-.25-.25H11Z"></path></svg></button></span><span role="tooltip" aria-label="Collapse file tree" id="expand-button-file-tree-button" class="Tooltip__TooltipBase-sc-17tf59c-0 fiSvBN tooltipped-se"><button data-component="IconButton" type="button" data-testid="collapse-file-tree-button" aria-expanded="true" aria-controls="diff_file_tree" class="types__StyledButton-sc-ws60qy-0 hQsKGs d-none d-md-flex position-relative fgColor-muted prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" aria-describedby=":r2p:-loading-announcement" aria-labelledby="expand-button-file-tree-button"><svg aria-hidden="true" focusable="false" class="octicon octicon-sidebar-expand" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display: inline-block; user-select: none; vertical-align: text-bottom; overflow: visible;"><path d="m4.177 7.823 2.396-2.396A.25.25 0 0 1 7 5.604v4.792a.25.25 0 0 1-.427.177L4.177 8.177a.25.25 0 0 1 0-.354Z"></path><path d="M0 1.75C0 .784.784 0 1.75 0h12.5C15.216 0 16 .784 16 1.75v12.5A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25H9.5v-13Zm12.5 13a.25.25 0 0 0 .25-.25V1.75a.25.25 0 0 0-.25-.25H11v13Z"></path></svg></button></span><h2 class="mx-2 f4 prc-Heading-Heading-6CmGO">1 file changed</h2><div class="Box-sc-g0xbh4-0 cEbXtN">+10</div><div class="Box-sc-g0xbh4-0 dvgSfR">-0</div><span class="Text__StyledText-sc-17v1xeu-0 eoLPqH">lines changed</span></div><div class="d-flex"><button type="button" class="types__StyledButton-sc-ws60qy-0 hQsKGs fgColor-default px-2 f6 gap-1" data-loading="false" data-size="medium" aria-describedby=":r3a:-loading-announcement"><span data-component="buttonContent" class="Box-sc-g0xbh4-0 gUkoLg"><span data-component="leadingVisual" class="Box-sc-g0xbh4-0 hzSPyu"><svg aria-hidden="true" focusable="false" class="octicon octicon-arrow-up" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display: inline-block; user-select: none; vertical-align: text-bottom; overflow: visible;"><path d="M3.47 7.78a.75.75 0 0 1 0-1.06l4.25-4.25a.75.75 0 0 1 1.06 0l4.25 4.25a.751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018L9 4.81v7.44a.75.75 0 0 1-1.5 0V4.81L4.53 7.78a.75.75 0 0 1-1.06 0Z"></path></svg></span><span data-component="text">Top</span></span></button><button class="Button Button--iconOnly Button--invisible ml-2" aria-label="Diff view settings" id=":r2q:" aria-haspopup="true" aria-expanded="false" tabindex="0"><svg aria-hidden="true" focusable="false" class="octicon octicon-gear" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display: inline-block; user-select: none; vertical-align: text-bottom; overflow: visible;"><path d="M8 0a8.2 8.2 0 0 1 .701.031C9.444.095 9.99.645 10.16 1.29l.288 1.107c.018.066.079.158.212.224.231.114.454.243.668.386.123.082.233.09.299.071l1.103-.303c.644-.176 1.392.021 1.82.63.27.385.506.792.704 1.218.315.675.111 1.422-.364 1.891l-.814.806c-.049.048-.098.147-.088.294.016.257.016.515 0 .772-.01.147.038.246.088.294l.814.806c.475.469.679 1.216.364 1.891a7.977 7.977 0 0 1-.704 1.217c-.428.61-1.176.807-1.82.63l-1.102-.302c-.067-.019-.177-.011-.3.071a5.909 5.909 0 0 1-.668.386c-.133.066-.194.158-.211.224l-.29 1.106c-.168.646-.715 1.196-1.458 1.26a8.006 8.006 0 0 1-1.402 0c-.743-.064-1.289-.614-1.458-1.26l-.289-1.106c-.018-.066-.079-.158-.212-.224a5.738 5.738 0 0 1-.668-.386c-.123-.082-.233-.09-.299-.071l-1.103.303c-.644.176-1.392-.021-1.82-.63a8.12 8.12 0 0 1-.704-1.218c-.315-.675-.111-1.422.363-1.891l.815-.806c.05-.048.098-.147.088-.294a6.214 6.214 0 0 1 0-.772c.01-.147-.038-.246-.088-.294l-.815-.806C.635 6.045.431 5.298.746 4.623a7.92 7.92 0 0 1 .704-1.217c.428-.61 1.176-.807 1.82-.63l1.102.302c.067.019.177.011.3-.071.214-.143.437-.272.668-.386.133-.066.194-.158.211-.224l.29-1.106C6.009.645 6.556.095 7.299.03 7.53.01 7.764 0 8 0Zm-.571 1.525c-.036.003-.108.036-.137.146l-.289 1.105c-.147.561-.549.967-.998 1.189-.173.086-.34.183-.5.29-.417.278-.97.423-1.529.27l-1.103-.303c-.109-.03-.175.016-.195.045-.22.312-.412.644-.573.99-.014.031-.021.11.059.19l.815.806c.411.406.562.957.53 1.456a4.709 4.709 0 0 0 0 .582c.032.499-.119 1.05-.53 1.456l-.815.806c-.081.08-.073.159-.059.19.162.346.353.677.573.989.02.03.085.076.195.046l1.102-.303c.56-.153 1.113-.008 1.53.27.161.107.328.204.501.29.447.222.85.629.997 1.189l.289 1.105c.029.109.101.143.137.146a6.6 6.6 0 0 0 1.142 0c.036-.003.108-.036.137-.146l.289-1.105c.147-.561.549-.967.998-1.189.173-.086.34-.183.5-.29.417-.278.97-.423 1.529-.27l1.103.303c.109.029.175-.016.195-.045.22-.313.411-.644.573-.99.014-.031.021-.11-.059-.19l-.815-.806c-.411-.406-.562-.957-.53-1.456a4.709 4.709 0 0 0 0-.582c-.032-.499.119-1.05.53-1.456l.815-.806c.081-.08.073-.159.059-.19a6.464 6.464 0 0 0-.573-.989c-.02-.03-.085-.076-.195-.046l-1.102.303c-.56.153-1.113.008-1.53-.27a4.44 4.44 0 0 0-.501-.29c-.447-.222-.85-.629-.997-1.189l-.289-1.105c-.029-.11-.101-.143-.137-.146a6.6 6.6 0 0 0-1.142 0ZM11 8a3 3 0 1 1-6 0 3 3 0 0 1 6 0ZM9.5 8a1.5 1.5 0 1 0-3.001.001A1.5 1.5 0 0 0 9.5 8Z"></path></svg></button><div open="" class="Popover-sc-q9r75g-0 iUwman caret-pos--top-right"><div class="Popover__PopoverContent-sc-q9r75g-1 hxtOrr d-flex flex-column gap-2"><h2 class="Box-sc-g0xbh4-0 isSOdJ prc-Heading-Heading-6CmGO">Customizable line height</h2><p>The default line height has been increased for improved accessibility. You can choose to enable a more compact line height from the view settings menu.</p><div class="d-flex gap-2 flex-row w-full flex-wrap"><button type="button" class="types__StyledButton-sc-ws60qy-0 jRzQJQ" data-loading="false" data-no-visuals="true" data-size="medium" aria-describedby=":r2s:-loading-announcement"><span data-component="buttonContent" class="Box-sc-g0xbh4-0 gUkoLg"><span data-component="text">Enable compact line height</span></span></button><button type="button" class="types__StyledButton-sc-ws60qy-0 logAaL" data-loading="false" data-no-visuals="true" data-size="medium" aria-describedby=":r2t:-loading-announcement" style="--button-color: accent.fg;"><span data-component="buttonContent" class="Box-sc-g0xbh4-0 gUkoLg"><span data-component="text">Dismiss</span></span></button></div></div></div></div></div></div><div class="d-flex flex-nowrap gap-2"><span class="TextInputWrapper__TextInputBaseWrapper-sc-1mqhpbi-0 TextInputWrapper-sc-1mqhpbi-1 gvtfsN fCHmyD TextInput-wrapper" aria-busy="false"><span class="TextInput-icon"><svg aria-hidden="true" focusable="false" class="octicon octicon-search" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display:inline-block;user-select:none;vertical-align:text-bottom;overflow:visible"><path d="M10.68 11.74a6 6 0 0 1-7.922-8.982 6 6 0 0 1 8.982 7.922l3.04 3.04a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215ZM11.5 7a4.499 4.499 0 1 0-8.997 0A4.499 4.499 0 0 0 11.5 7Z"></path></svg></span><input type="text" aria-label="Filter files…" placeholder="Filter files…" data-component="input" class="UnstyledTextInput-sc-14ypya-0 kbCLEG" value=""></span><button data-component="IconButton" type="button" aria-label="Filter" aria-haspopup="true" aria-expanded="false" tabindex="0" class="types__StyledButton-sc-ws60qy-0 cDbgyb flex-shrink-0 prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" aria-describedby=":R4tdab:-loading-announcement" id=":R4tdab:"><svg aria-hidden="true" focusable="false" class="octicon octicon-sliders" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display:inline-block;user-select:none;vertical-align:text-bottom;overflow:visible"><path d="M15 2.75a.75.75 0 0 1-.75.75h-4a.75.75 0 0 1 0-1.5h4a.75.75 0 0 1 .75.75Zm-8.5.75v1.25a.75.75 0 0 0 1.5 0v-4a.75.75 0 0 0-1.5 0V2H1.75a.75.75 0 0 0 0 1.5H6.5Zm1.25 5.25a.75.75 0 0 0 0-1.5h-6a.75.75 0 0 0 0 1.5h6ZM15 8a.75.75 0 0 1-.75.75H11.5V10a.75.75 0 1 1-1.5 0V6a.75.75 0 0 1 1.5 0v1.25h2.75A.75.75 0 0 1 15 8Zm-9 5.25v-2a.75.75 0 0 0-1.5 0v1.25H1.75a.75.75 0 0 0 0 1.5H4.5v1.25a.75.75 0 0 0 1.5 0v-2Zm9 0a.75.75 0 0 1-.75.75h-6a.75.75 0 0 1 0-1.5h6a.75.75 0 0 1 .75.75Z"></path></svg></button></div><span role="status" aria-live="polite" aria-atomic="true" class="_VisuallyHidden__VisuallyHidden-sc-11jhm7a-0 brGdpi"></span><ul role="tree" aria-label="File Tree" class="TreeView__UlBox-sc-4ex6b6-0 jGvHJc"><div class="d-none"></div><li class="PRIVATE_TreeView-item" tabindex="0" id="C++" role="treeitem" aria-labelledby=":R1d5dab:" aria-describedby=":R1d5dabH1: :R1d5dabH2:" aria-level="1" aria-expanded="true" aria-selected="false"><div class="PRIVATE_TreeView-item-container" style="--level:1"><div style="grid-area:spacer;display:flex"><div style="width:100%;display:flex"></div></div><div class="PRIVATE_TreeView-item-toggle PRIVATE_TreeView-item-toggle--end"><svg aria-hidden="true" focusable="false" class="octicon octicon-chevron-down" viewBox="0 0 12 12" width="12" height="12" fill="currentColor" style="display:inline-block;user-select:none;vertical-align:text-bottom;overflow:visible"><path d="M6 8.825c-.2 0-.4-.1-.5-.2l-3.3-3.3c-.3-.3-.3-.8 0-1.1.3-.3.8-.3 1.1 0l2.7 2.7 2.7-2.7c.3-.3.8-.3 1.1 0 .3.3.3.8 0 1.1l-3.2 3.2c-.2.2-.4.3-.6.3Z"></path></svg></div><div id=":R1d5dab:" class="PRIVATE_TreeView-item-content"><div class="PRIVATE_VisuallyHidden" aria-hidden="true" id=":R1d5dabH1:"></div><div class="PRIVATE_TreeView-item-visual" aria-hidden="true"><div class="PRIVATE_TreeView-directory-icon"><svg aria-hidden="true" focusable="false" class="octicon octicon-file-directory-open-fill" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display:inline-block;user-select:none;vertical-align:text-bottom;overflow:visible"><path d="M.513 1.513A1.75 1.75 0 0 1 1.75 1h3.5c.55 0 1.07.26 1.4.7l.9 1.2a.25.25 0 0 0 .2.1H13a1 1 0 0 1 1 1v.5H2.75a.75.75 0 0 0 0 1.5h11.978a1 1 0 0 1 .994 1.117L15 13.25A1.75 1.75 0 0 1 13.25 15H1.75A1.75 1.75 0 0 1 0 13.25V2.75c0-.464.184-.91.513-1.237Z"></path></svg></div></div><span class="PRIVATE_TreeView-item-content-text"><span>C++</span></span></div></div><ul role="group" style="list-style:none;padding:0;margin:0"><div class="d-none"></div><li class="PRIVATE_TreeView-item" tabindex="-1" id="C++/001. Two Sum.cpp" role="treeitem" aria-labelledby=":Rard5dab:" aria-describedby=":Rard5dabH1: :Rard5dabH2:" aria-level="2" aria-selected="false" aria-current="true"><div class="PRIVATE_TreeView-item-container" style="--level:2"><div style="grid-area:spacer;display:flex"><div style="width:100%;display:flex"><div class="PRIVATE_TreeView-item-level-line"></div></div></div><div id=":Rard5dab:" class="PRIVATE_TreeView-item-content"><div class="PRIVATE_VisuallyHidden" aria-hidden="true" id=":Rard5dabH1:"></div><div class="PRIVATE_TreeView-item-visual" aria-hidden="true"><svg aria-hidden="true" focusable="false" class="Octicon-sc-9kayk9-0 fgColor-success" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display:inline-block;user-select:none;vertical-align:text-bottom;overflow:visible"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V4.664a.25.25 0 0 0-.073-.177l-2.914-2.914a.25.25 0 0 0-.177-.073Zm4.48 3.758a.75.75 0 0 1 .755.745l.01 1.497h1.497a.75.75 0 0 1 0 1.5H9v1.507a.75.75 0 0 1-1.5 0V9.005l-1.502.01a.75.75 0 0 1-.01-1.5l1.507-.01-.01-1.492a.75.75 0 0 1 .745-.755Z"></path></svg></div><span class="PRIVATE_TreeView-item-content-text">001. Two Sum.cpp</span></div></div></li></ul></li></ul></div></div><div class="Box-sc-g0xbh4-0 bTBnTW"><div role="slider" aria-label="Draggable pane splitter" aria-valuemin="256" aria-valuemax="256" aria-valuenow="0" aria-valuetext="Pane width 0 pixels" tabindex="0" class="Box-sc-g0xbh4-0 fFMzrG"></div></div></div><div class="Box-sc-g0xbh4-0 sYjuB"><div class="Box-sc-g0xbh4-0"></div><div class="Box-sc-g0xbh4-0 FxAyp"><div class="d-flex flex-items-center flex-justify-between gap-2 pt-3 pt-lg-4 pb-2 position-sticky top-0 color-bg-default" style="z-index: 2;"><div class="d-flex flex-items-center"><span role="tooltip" aria-label="Expand file tree" id="expand-button-file-tree-button" class="Tooltip__TooltipBase-sc-17tf59c-0 fiSvBN tooltipped-se"><button data-component="IconButton" type="button" data-testid="expand-file-tree-button" aria-expanded="false" aria-controls="diff_file_tree" class="types__StyledButton-sc-ws60qy-0 hQsKGs d-md-none position-relative fgColor-muted prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" aria-describedby=":r2v:-loading-announcement" aria-labelledby="expand-button-file-tree-button" fdprocessedid="qpnk2b"><svg aria-hidden="true" focusable="false" class="octicon octicon-sidebar-collapse" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display: inline-block; user-select: none; vertical-align: text-bottom; overflow: visible;"><path d="M6.823 7.823a.25.25 0 0 1 0 .354l-2.396 2.396A.25.25 0 0 1 4 10.396V5.604a.25.25 0 0 1 .427-.177Z"></path><path d="M1.75 0h12.5C15.216 0 16 .784 16 1.75v12.5A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25V1.75C0 .784.784 0 1.75 0ZM1.5 1.75v12.5c0 .138.112.25.25.25H9.5v-13H1.75a.25.25 0 0 0-.25.25ZM11 14.5h3.25a.25.25 0 0 0 .25-.25V1.75a.25.25 0 0 0-.25-.25H11Z"></path></svg></button></span><span role="tooltip" aria-label="Collapse file tree" id="expand-button-file-tree-button" class="Tooltip__TooltipBase-sc-17tf59c-0 fiSvBN tooltipped-se"><button data-component="IconButton" type="button" data-testid="collapse-file-tree-button" aria-expanded="true" aria-controls="diff_file_tree" class="types__StyledButton-sc-ws60qy-0 hQsKGs d-none d-md-flex position-relative fgColor-muted prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" aria-describedby=":r31:-loading-announcement" aria-labelledby="expand-button-file-tree-button"><svg aria-hidden="true" focusable="false" class="octicon octicon-sidebar-expand" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display: inline-block; user-select: none; vertical-align: text-bottom; overflow: visible;"><path d="m4.177 7.823 2.396-2.396A.25.25 0 0 1 7 5.604v4.792a.25.25 0 0 1-.427.177L4.177 8.177a.25.25 0 0 1 0-.354Z"></path><path d="M0 1.75C0 .784.784 0 1.75 0h12.5C15.216 0 16 .784 16 1.75v12.5A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25H9.5v-13Zm12.5 13a.25.25 0 0 0 .25-.25V1.75a.25.25 0 0 0-.25-.25H11v13Z"></path></svg></button></span><h2 class="mx-2 f4 prc-Heading-Heading-6CmGO">1 file changed</h2><div class="Box-sc-g0xbh4-0 cqrBaU">+10</div><div class="Box-sc-g0xbh4-0 evMbbE">-0</div><span class="Text__StyledText-sc-17v1xeu-0 fAkiqC">lines changed</span></div><div class="d-flex"><button class="Button Button--iconOnly Button--invisible ml-2" aria-label="Diff view settings" id=":r32:" aria-haspopup="true" aria-expanded="false" tabindex="0" fdprocessedid="oztpmg"><svg aria-hidden="true" focusable="false" class="octicon octicon-gear" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display: inline-block; user-select: none; vertical-align: text-bottom; overflow: visible;"><path d="M8 0a8.2 8.2 0 0 1 .701.031C9.444.095 9.99.645 10.16 1.29l.288 1.107c.018.066.079.158.212.224.231.114.454.243.668.386.123.082.233.09.299.071l1.103-.303c.644-.176 1.392.021 1.82.63.27.385.506.792.704 1.218.315.675.111 1.422-.364 1.891l-.814.806c-.049.048-.098.147-.088.294.016.257.016.515 0 .772-.01.147.038.246.088.294l.814.806c.475.469.679 1.216.364 1.891a7.977 7.977 0 0 1-.704 1.217c-.428.61-1.176.807-1.82.63l-1.102-.302c-.067-.019-.177-.011-.3.071a5.909 5.909 0 0 1-.668.386c-.133.066-.194.158-.211.224l-.29 1.106c-.168.646-.715 1.196-1.458 1.26a8.006 8.006 0 0 1-1.402 0c-.743-.064-1.289-.614-1.458-1.26l-.289-1.106c-.018-.066-.079-.158-.212-.224a5.738 5.738 0 0 1-.668-.386c-.123-.082-.233-.09-.299-.071l-1.103.303c-.644.176-1.392-.021-1.82-.63a8.12 8.12 0 0 1-.704-1.218c-.315-.675-.111-1.422.363-1.891l.815-.806c.05-.048.098-.147.088-.294a6.214 6.214 0 0 1 0-.772c.01-.147-.038-.246-.088-.294l-.815-.806C.635 6.045.431 5.298.746 4.623a7.92 7.92 0 0 1 .704-1.217c.428-.61 1.176-.807 1.82-.63l1.102.302c.067.019.177.011.3-.071.214-.143.437-.272.668-.386.133-.066.194-.158.211-.224l.29-1.106C6.009.645 6.556.095 7.299.03 7.53.01 7.764 0 8 0Zm-.571 1.525c-.036.003-.108.036-.137.146l-.289 1.105c-.147.561-.549.967-.998 1.189-.173.086-.34.183-.5.29-.417.278-.97.423-1.529.27l-1.103-.303c-.109-.03-.175.016-.195.045-.22.312-.412.644-.573.99-.014.031-.021.11.059.19l.815.806c.411.406.562.957.53 1.456a4.709 4.709 0 0 0 0 .582c.032.499-.119 1.05-.53 1.456l-.815.806c-.081.08-.073.159-.059.19.162.346.353.677.573.989.02.03.085.076.195.046l1.102-.303c.56-.153 1.113-.008 1.53.27.161.107.328.204.501.29.447.222.85.629.997 1.189l.289 1.105c.029.109.101.143.137.146a6.6 6.6 0 0 0 1.142 0c.036-.003.108-.036.137-.146l.289-1.105c.147-.561.549-.967.998-1.189.173-.086.34-.183.5-.29.417-.278.97-.423 1.529-.27l1.103.303c.109.029.175-.016.195-.045.22-.313.411-.644.573-.99.014-.031.021-.11-.059-.19l-.815-.806c-.411-.406-.562-.957-.53-1.456a4.709 4.709 0 0 0 0-.582c-.032-.499.119-1.05.53-1.456l.815-.806c.081-.08.073-.159.059-.19a6.464 6.464 0 0 0-.573-.989c-.02-.03-.085-.076-.195-.046l-1.102.303c-.56.153-1.113.008-1.53-.27a4.44 4.44 0 0 0-.501-.29c-.447-.222-.85-.629-.997-1.189l-.289-1.105c-.029-.11-.101-.143-.137-.146a6.6 6.6 0 0 0-1.142 0ZM11 8a3 3 0 1 1-6 0 3 3 0 0 1 6 0ZM9.5 8a1.5 1.5 0 1 0-3.001.001A1.5 1.5 0 0 0 9.5 8Z"></path></svg></button><div class="Popover-sc-q9r75g-0 hfBpbQ caret-pos--top-right"><div class="Popover__PopoverContent-sc-q9r75g-1 hxtOrr d-flex flex-column gap-2"><h2 class="Box-sc-g0xbh4-0 isSOdJ prc-Heading-Heading-6CmGO">Customizable line height</h2><p>The default line height has been increased for improved accessibility. You can choose to enable a more compact line height from the view settings menu.</p><div class="d-flex gap-2 flex-row w-full flex-wrap"><button type="button" class="types__StyledButton-sc-ws60qy-0 jRzQJQ" data-loading="false" data-no-visuals="true" data-size="medium" aria-describedby=":r34:-loading-announcement" fdprocessedid="gsaxze"><span data-component="buttonContent" class="Box-sc-g0xbh4-0 gUkoLg"><span data-component="text">Enable compact line height</span></span></button><button type="button" class="types__StyledButton-sc-ws60qy-0 logAaL" data-loading="false" data-no-visuals="true" data-size="medium" aria-describedby=":r35:-loading-announcement" style="--button-color: accent.fg;" fdprocessedid="60k32"><span data-component="buttonContent" class="Box-sc-g0xbh4-0 gUkoLg"><span data-component="text">Dismiss</span></span></button></div></div></div></div></div><div data-hpc="true"><span id="commit-details-marker-portal" style="position: absolute; top: 0px; right: 0px; z-index: 10;"></span><div style="padding-top: 0px; left: 3px; right: 3px;"><div class="position-relative"><div class="Box-sc-g0xbh4-0 ibkrbZ"><div class="DiffFileHeader-module__diff-file-header--TjXyn flex-wrap flex-sm-nowrap"><button class="Button Button--iconOnly Button--invisible flex-shrink-0 flex-order-1" aria-label="collapse file: C++/001. Two Sum.cpp" fdprocessedid="5m2qli"><svg aria-hidden="true" focusable="false" class="octicon octicon-chevron-down" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display: inline-block; user-select: none; vertical-align: text-bottom; overflow: visible;"><path d="M12.78 5.22a.749.749 0 0 1 0 1.06l-4.25 4.25a.749.749 0 0 1-1.06 0L3.22 6.28a.749.749 0 1 1 1.06-1.06L8 8.939l3.72-3.719a.749.749 0 0 1 1.06 0Z"></path></svg></button><div class="d-flex px-1 flex-items-center overflow-hidden flex-order-2 flex-sm-order-1"><h3 class="DiffFileHeader-module__file-name--mY1O5"><a class="Link--primary prc-Link-Link-85e08" href="https://github.com/fengvyi/LeetCode/commit/04d012e5dcccad0a7087e885a83bd6b9872670a4#diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56"><code>‎C++/001. Two Sum.cpp</code></a></h3><div aria-describedby=":rg:"><button aria-label="Copy file name to clipboard" tabindex="0" class="Button Button--iconOnly Button--invisible Button--medium  ml-1 flex-shrink-0" fdprocessedid="ck6nws"><svg aria-hidden="true" focusable="false" class="Octicon-sc-9kayk9-0" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display: inline-block; user-select: none; vertical-align: text-bottom; overflow: visible;"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path></svg></button></div></div><div class="d-flex flex-row flex-justify-end flex-1 flex-order-1 flex-sm-order-2"><div class="d-flex mr-2 flex-justify-end flex-items-center flex-1"><div class="d-flex gap-1 px-1"><span class="f6 text-bold fgColor-success">+10</span></div><span role="tooltip" aria-label="10 changes: 10 additions &amp; 0 deletions" id=":rh:" class="Tooltip__TooltipBase-sc-17tf59c-0 fiSvBN tooltipped-sw"><div class="d-flex"><div data-testid="addition diffstat" class="DiffSquares-module__diffSquare--h5kjy DiffSquares-module__addition--jeNtt"></div><div data-testid="addition diffstat" class="DiffSquares-module__diffSquare--h5kjy DiffSquares-module__addition--jeNtt"></div><div data-testid="addition diffstat" class="DiffSquares-module__diffSquare--h5kjy DiffSquares-module__addition--jeNtt"></div><div data-testid="addition diffstat" class="DiffSquares-module__diffSquare--h5kjy DiffSquares-module__addition--jeNtt"></div><div data-testid="addition diffstat" class="DiffSquares-module__diffSquare--h5kjy DiffSquares-module__addition--jeNtt"></div></div></span></div><button class="Button Button--iconOnly Button--invisible" aria-label="More options" id=":ri:" aria-haspopup="true" aria-expanded="false" tabindex="0" fdprocessedid="qre0g"><svg aria-hidden="true" focusable="false" class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display: inline-block; user-select: none; vertical-align: text-bottom; overflow: visible;"><path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path></svg></button></div></div></div><div class="border position-relative rounded-bottom-2"><table class="tab-size width-full DiffLines-module__tableLayoutFixed--YZcIJ" data-diff-anchor="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56" data-tab-size="8" data-paste-markdown-skip="true" role="grid" style="--line-number-cell-width: 40px;"><thead class="sr-only"><tr><th scope="col">Original file line number</th><th scope="col">Diff line number</th><th scope="col">Diff line change</th></tr></thead><colgroup><col width="40"><col width="40"><col width="100%"></colgroup><tbody><tr class="diff-line-row"><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-0-0" role="gridcell" tabindex="0" valign="top" class="focusable-grid-cell" colspan="4" style="background-color: var(--bgColor-accent-muted, var(--color-accent-subtle)); flex-grow: 1;" data-selected="false"><div class="d-flex flex-row"><div class="hunk-kebab-icon pr-2 pb-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display: inline-block; user-select: none; vertical-align: text-bottom; overflow: visible;"><path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path></svg></div><code class="diff-text-cell hunk"><div class="diff-text-inner color-fg-muted">@@ -0,0 +1,10 @@</div></code></div></td></tr><tr class="diff-line-row"><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-1-0" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-line-number left-side" style="background-color: var(--diffBlob-addition-bgColor-num, var(--color-diff-blob-addition-num-bg)); text-align: center;" data-selected="false"><code></code></td><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-1-1" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-line-number left-side" style="background-color: var(--diffBlob-addition-bgColor-num, var(--color-diff-blob-addition-num-bg)); text-align: center;" data-selected="false"><code>1</code></td><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-1-2" data-line-anchor="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56R1" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-text-cell right-side-diff-cell left-side" style="background-color: var(--diffBlob-addition-bgColor-line, var(--color-diff-blob-addition-line-bg)); padding-right: 30px;" data-selected="false"><code class="diff-text syntax-highlighted-line addition"><span class="diff-text-marker">+</span><div class="diff-text-inner"><span class="pl-k">class</span> <span class="pl-en">Solution</span> {</div></code><div aria-hidden="true" class="d-flex flex-row ActionBar-module__action-bar-position--q5zYS"><div class="ButtonGroup-sc-1gxhls1-0 kiEfKw"><button data-component="IconButton" type="button" aria-label="Start conversation" class="types__StyledButton-sc-ws60qy-0 ldywDz prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" aria-describedby=":r7n:-loading-announcement" fdprocessedid="gr1xfs"><svg aria-hidden="true" focusable="false" class="octicon octicon-plus" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display: inline-block; user-select: none; vertical-align: text-bottom; overflow: visible;"><path d="M7.75 2a.75.75 0 0 1 .75.75V7h4.25a.75.75 0 0 1 0 1.5H8.5v4.25a.75.75 0 0 1-1.5 0V8.5H2.75a.75.75 0 0 1 0-1.5H7V2.75A.75.75 0 0 1 7.75 2Z"></path></svg></button><button data-component="IconButton" type="button" aria-label="More actions" aria-haspopup="true" class="types__StyledButton-sc-ws60qy-0 iBeJxC prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" aria-describedby=":r7o:-loading-announcement" fdprocessedid="jks9u4"><svg aria-hidden="true" focusable="false" class="octicon octicon-triangle-down" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display: inline-block; user-select: none; vertical-align: text-bottom; overflow: visible;"><path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path></svg></button></div></div></td></tr><tr class="diff-line-row"><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-2-0" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-line-number left-side" style="background-color: var(--diffBlob-addition-bgColor-num, var(--color-diff-blob-addition-num-bg)); text-align: center;" data-selected="false"><code></code></td><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-2-1" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-line-number left-side" style="background-color: var(--diffBlob-addition-bgColor-num, var(--color-diff-blob-addition-num-bg)); text-align: center;" data-selected="false"><code>2</code></td><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-2-2" data-line-anchor="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56R2" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-text-cell right-side-diff-cell left-side" style="background-color: var(--diffBlob-addition-bgColor-line, var(--color-diff-blob-addition-line-bg)); padding-right: 30px;" data-selected="false"><code class="diff-text syntax-highlighted-line addition"><span class="diff-text-marker">+</span><div class="diff-text-inner"><span class="pl-k">public:</span></div></code><div aria-hidden="true" class="position-absolute top-0 d-flex user-select-none" style="right: 40px;"></div></td></tr><tr class="diff-line-row"><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-3-0" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-line-number left-side" style="background-color: var(--diffBlob-addition-bgColor-num, var(--color-diff-blob-addition-num-bg)); text-align: center;" data-selected="false"><code></code></td><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-3-1" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-line-number left-side" style="background-color: var(--diffBlob-addition-bgColor-num, var(--color-diff-blob-addition-num-bg)); text-align: center;" data-selected="false"><code>3</code></td><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-3-2" data-line-anchor="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56R3" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-text-cell right-side-diff-cell left-side" style="background-color: var(--diffBlob-addition-bgColor-line, var(--color-diff-blob-addition-line-bg)); padding-right: 30px;" data-selected="false"><code class="diff-text syntax-highlighted-line addition"><span class="diff-text-marker">+</span><div class="diff-text-inner">    vector&lt;<span class="pl-k">int</span>&gt; <span class="pl-en">twoSum</span>(vector&lt;<span class="pl-k">int</span>&gt;&amp; nums, <span class="pl-k">int</span> target) {</div></code><div aria-hidden="true" class="position-absolute top-0 d-flex user-select-none" style="right: 40px;"></div></td></tr><tr class="diff-line-row"><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-4-0" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-line-number left-side" style="background-color: var(--diffBlob-addition-bgColor-num, var(--color-diff-blob-addition-num-bg)); text-align: center;" data-selected="false"><code></code></td><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-4-1" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-line-number left-side" style="background-color: var(--diffBlob-addition-bgColor-num, var(--color-diff-blob-addition-num-bg)); text-align: center;" data-selected="false"><code>4</code></td><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-4-2" data-line-anchor="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56R4" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-text-cell right-side-diff-cell left-side" style="background-color: var(--diffBlob-addition-bgColor-line, var(--color-diff-blob-addition-line-bg)); padding-right: 30px;" data-selected="false"><code class="diff-text syntax-highlighted-line addition"><span class="diff-text-marker">+</span><div class="diff-text-inner">        unordered_map&lt;<span class="pl-k">int</span>, <span class="pl-k">int</span>&gt;m;</div></code><div aria-hidden="true" class="position-absolute top-0 d-flex user-select-none" style="right: 40px;"></div></td></tr><tr class="diff-line-row"><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-5-0" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-line-number left-side" style="background-color: var(--diffBlob-addition-bgColor-num, var(--color-diff-blob-addition-num-bg)); text-align: center;" data-selected="false"><code></code></td><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-5-1" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-line-number left-side" style="background-color: var(--diffBlob-addition-bgColor-num, var(--color-diff-blob-addition-num-bg)); text-align: center;" data-selected="false"><code>5</code></td><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-5-2" data-line-anchor="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56R5" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-text-cell right-side-diff-cell left-side" style="background-color: var(--diffBlob-addition-bgColor-line, var(--color-diff-blob-addition-line-bg)); padding-right: 30px;" data-selected="false"><code class="diff-text syntax-highlighted-line addition"><span class="diff-text-marker">+</span><div class="diff-text-inner">        <span class="pl-k">for</span>(<span class="pl-k">int</span> i = <span class="pl-c1">0</span>; i &lt; nums.<span class="pl-c1">size</span>(); i++){</div></code><div aria-hidden="true" class="position-absolute top-0 d-flex user-select-none" style="right: 40px;"></div></td></tr><tr class="diff-line-row"><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-6-0" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-line-number left-side" style="background-color: var(--diffBlob-addition-bgColor-num, var(--color-diff-blob-addition-num-bg)); text-align: center;" data-selected="false"><code></code></td><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-6-1" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-line-number left-side" style="background-color: var(--diffBlob-addition-bgColor-num, var(--color-diff-blob-addition-num-bg)); text-align: center;" data-selected="false"><code>6</code></td><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-6-2" data-line-anchor="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56R6" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-text-cell right-side-diff-cell left-side" style="background-color: var(--diffBlob-addition-bgColor-line, var(--color-diff-blob-addition-line-bg)); padding-right: 30px;" data-selected="false"><code class="diff-text syntax-highlighted-line addition"><span class="diff-text-marker">+</span><div class="diff-text-inner">            <span class="pl-k">if</span>(m.<span class="pl-c1">count</span>(target - nums[i])) <span class="pl-k">return</span> {m[target - nums[i]], i};</div></code><div aria-hidden="true" class="position-absolute top-0 d-flex user-select-none" style="right: 40px;"></div></td></tr><tr class="diff-line-row"><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-7-0" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-line-number left-side" style="background-color: var(--diffBlob-addition-bgColor-num, var(--color-diff-blob-addition-num-bg)); text-align: center;" data-selected="false"><code></code></td><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-7-1" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-line-number left-side" style="background-color: var(--diffBlob-addition-bgColor-num, var(--color-diff-blob-addition-num-bg)); text-align: center;" data-selected="false"><code>7</code></td><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-7-2" data-line-anchor="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56R7" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-text-cell right-side-diff-cell left-side" style="background-color: var(--diffBlob-addition-bgColor-line, var(--color-diff-blob-addition-line-bg)); padding-right: 30px;" data-selected="false"><code class="diff-text syntax-highlighted-line addition"><span class="diff-text-marker">+</span><div class="diff-text-inner">            m[nums[i]] = i;</div></code><div aria-hidden="true" class="position-absolute top-0 d-flex user-select-none" style="right: 40px;"></div></td></tr><tr class="diff-line-row"><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-8-0" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-line-number left-side" style="background-color: var(--diffBlob-addition-bgColor-num, var(--color-diff-blob-addition-num-bg)); text-align: center;" data-selected="false"><code></code></td><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-8-1" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-line-number left-side" style="background-color: var(--diffBlob-addition-bgColor-num, var(--color-diff-blob-addition-num-bg)); text-align: center;" data-selected="false"><code>8</code></td><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-8-2" data-line-anchor="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56R8" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-text-cell right-side-diff-cell left-side" style="background-color: var(--diffBlob-addition-bgColor-line, var(--color-diff-blob-addition-line-bg)); padding-right: 30px;" data-selected="false"><code class="diff-text syntax-highlighted-line addition"><span class="diff-text-marker">+</span><div class="diff-text-inner">        }</div></code><div aria-hidden="true" class="position-absolute top-0 d-flex user-select-none" style="right: 40px;"></div></td></tr><tr class="diff-line-row"><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-9-0" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-line-number left-side" style="background-color: var(--diffBlob-addition-bgColor-num, var(--color-diff-blob-addition-num-bg)); text-align: center;" data-selected="false"><code></code></td><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-9-1" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-line-number left-side" style="background-color: var(--diffBlob-addition-bgColor-num, var(--color-diff-blob-addition-num-bg)); text-align: center;" data-selected="false"><code>9</code></td><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-9-2" data-line-anchor="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56R9" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-text-cell right-side-diff-cell left-side" style="background-color: var(--diffBlob-addition-bgColor-line, var(--color-diff-blob-addition-line-bg)); padding-right: 30px;" data-selected="false"><code class="diff-text syntax-highlighted-line addition"><span class="diff-text-marker">+</span><div class="diff-text-inner">    }</div></code><div aria-hidden="true" class="position-absolute top-0 d-flex user-select-none" style="right: 40px;"></div></td></tr><tr class="diff-line-row"><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-10-0" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-line-number left-side" style="background-color: var(--diffBlob-addition-bgColor-num, var(--color-diff-blob-addition-num-bg)); text-align: center;" data-selected="false"><code></code></td><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-10-1" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-line-number left-side" style="background-color: var(--diffBlob-addition-bgColor-num, var(--color-diff-blob-addition-num-bg)); text-align: center;" data-selected="false"><code>10</code></td><td data-grid-cell-id="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56-empty-10-2" data-line-anchor="diff-e6a69bca271999807c125e298819ebcd4c25e197aa559878e730e2a15953cf56R10" role="gridcell" tabindex="-1" valign="top" class="focusable-grid-cell diff-text-cell right-side-diff-cell left-side" style="background-color: var(--diffBlob-addition-bgColor-line, var(--color-diff-blob-addition-line-bg)); padding-right: 30px;" data-selected="false"><code class="diff-text syntax-highlighted-line addition"><span class="diff-text-marker">+</span><div class="diff-text-inner">};</div></code><div aria-hidden="true" class="position-absolute top-0 d-flex user-select-none" style="right: 40px;"></div></td></tr></tbody></table></div></div></div></div><div class="d-flex flex-column gap-2 pt-3 react-comments-container Comment-module__commit-discussion-comments--WaMOe" id="comments"><div class="d-flex flex-items-center flex-justify-between"><h2 class="sr-only">0 commit comments</h2><div class="d-flex flex-items-center"><div class="h4 pr-2">Comments</div><span aria-hidden="true" class="Box-sc-g0xbh4-0 cdRzSF">0</span><span class="_VisuallyHidden__VisuallyHidden-sc-11jhm7a-0 brGdpi">&nbsp;(0)</span></div></div><div class="d-flex flex-column gap-2 pt-3"><div class="d-flex flex-items-center border rounded-2 p-2 gap-2 color-bg-subtle"><img data-component="Avatar" class="Avatar__StyledAvatar-sc-2lv0r8-0 jZYvxQ" alt="" size="20" src="./Create 001. Two Sum.cpp · fengvyi_LeetCode@04d012e_files/156987853(1)" data-testid="github-avatar" height="20" width="20"><button type="button" class="Box-sc-g0xbh4-0 dRfQdO" fdprocessedid="miskb9">Comment</button></div></div><div class="d-flex flex-items-center border rounded-2 p-2 gap-2"><button type="button" class="types__StyledButton-sc-ws60qy-0 cDbgyb" data-loading="false" data-size="small" aria-describedby=":r2l:-loading-announcement" fdprocessedid="t3auy"><span data-component="buttonContent" class="Box-sc-g0xbh4-0 gUkoLg"><span data-component="leadingVisual" class="Box-sc-g0xbh4-0 hzSPyu"><svg aria-hidden="true" focusable="false" class="octicon octicon-bell" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" style="display: inline-block; user-select: none; vertical-align: text-bottom; overflow: visible;"><path d="M8 16a2 2 0 0 0 1.985-1.75c.017-.137-.097-.25-.235-.25h-3.5c-.138 0-.252.113-.235.25A2 2 0 0 0 8 16ZM3 5a5 5 0 0 1 10 0v2.947c0 .05.015.098.042.139l1.703 2.555A1.519 1.519 0 0 1 13.482 13H2.518a1.516 1.516 0 0 1-1.263-2.36l1.703-2.554A.255.255 0 0 0 3 7.947Zm5-3.5A3.5 3.5 0 0 0 4.5 5v2.947c0 .346-.102.683-.294.97l-1.703 2.556a.017.017 0 0 0-.003.01l.001.006c0 .002.002.004.004.006l.006.004.007.001h10.964l.007-.001.006-.004.004-.006.001-.007a.017.017 0 0 0-.003-.01l-1.703-2.554a1.745 1.745 0 0 1-.294-.97V5A3.5 3.5 0 0 0 8 1.5Z"></path></svg></span><span data-component="text">Subscribe</span></span></button><span class="f6 fgColor-muted">You're not receiving notifications from this thread.</span></div></div><svg aria-hidden="true" version="1.1" viewBox="0 0 340 84" xmlns="http://www.w3.org/2000/svg" class="Box-sc-g0xbh4-0 hqtbbn"><defs><clippath id="diff-placeholder"><rect height="11.9298746" rx="2" width="67.0175439" x="0" y="0"></rect><rect height="11.9298746" rx="2" width="100.701754" x="18.9473684" y="47.7194983"></rect><rect height="11.9298746" rx="2" width="37.8947368" x="0" y="71.930126"></rect><rect height="11.9298746" rx="2" width="53.3333333" x="127.017544" y="48.0703769"></rect><rect height="11.9298746" rx="2" width="72.9824561" x="187.719298" y="48.0703769"></rect><rect height="11.9298746" rx="2" width="140.350877" x="76.8421053" y="0"></rect><rect height="11.9298746" rx="2" width="140.350877" x="17.8947368" y="23.8597491"></rect><rect height="11.9298746" rx="2" width="173.684211" x="166.315789" y="23.8597491"></rect></clippath><lineargradient id="animated-diff-gradient" spreadMethod="reflect" x1="0" x2="0" y1="0" y2="1"><stop offset="0" stop-color="#eee"></stop><stop offset="0.2" stop-color="#eee"></stop><stop offset="0.5" stop-color="#ddd"></stop><stop offset="0.8" stop-color="#eee"></stop><stop offset="1" stop-color="#eee"></stop><animatetransform attributeName="y1" dur="1s" repeatCount="3" values="0%; 100%; 0"></animatetransform><animatetransform attributeName="y2" dur="1s" repeatCount="3" values="100%; 200%; 0"></animatetransform></lineargradient></defs></svg></div><div class="Box-sc-g0xbh4-0"></div></div></div></div></div> <!-- --> <script type="application/json" id="__PRIMER_DATA_:R0:__">{"resolvedServerColorMode":"night"}</script></div>
</react-app>




  </div>

</turbo-frame>

    </main>
  </div>

  </div>

          <footer class="footer pt-8 pb-6 f6 color-fg-muted p-responsive" role="contentinfo" hidden="">
  <h2 class="sr-only">Footer</h2>

  


  <div class="d-flex flex-justify-center flex-items-center flex-column-reverse flex-lg-row flex-wrap flex-lg-nowrap">
    <div class="d-flex flex-items-center flex-shrink-0 mx-2">
      <a aria-label="Homepage" title="GitHub" class="footer-octicon mr-2" href="https://github.com/">
        <svg aria-hidden="true" height="24" viewBox="0 0 24 24" version="1.1" width="24" data-view-component="true" class="octicon octicon-mark-github">
    <path d="M12.5.75C6.146.75 1 5.896 1 12.25c0 5.089 3.292 9.387 7.863 10.91.575.101.79-.244.79-.546 0-.273-.014-1.178-.014-2.142-2.889.532-3.636-.704-3.866-1.35-.13-.331-.69-1.352-1.18-1.625-.402-.216-.977-.748-.014-.762.906-.014 1.553.834 1.769 1.179 1.035 1.74 2.688 1.25 3.349.948.1-.747.402-1.25.733-1.538-2.559-.287-5.232-1.279-5.232-5.678 0-1.25.445-2.285 1.178-3.09-.115-.288-.517-1.467.115-3.048 0 0 .963-.302 3.163 1.179.92-.259 1.897-.388 2.875-.388.977 0 1.955.13 2.875.388 2.2-1.495 3.162-1.179 3.162-1.179.633 1.581.23 2.76.115 3.048.733.805 1.179 1.825 1.179 3.09 0 4.413-2.688 5.39-5.247 5.678.417.36.776 1.05.776 2.128 0 1.538-.014 2.774-.014 3.162 0 .302.216.662.79.547C20.709 21.637 24 17.324 24 12.25 24 5.896 18.854.75 12.5.75Z"></path>
</svg>
</a>
      <span>
        © 2024 GitHub,&nbsp;Inc.
      </span>
    </div>

    <nav aria-label="Footer">
      <h3 class="sr-only" id="sr-footer-heading">Footer navigation</h3>

      <ul class="list-style-none d-flex flex-justify-center flex-wrap mb-2 mb-lg-0" aria-labelledby="sr-footer-heading">

          <li class="mx-2">
            <a data-analytics-event="{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to Terms&quot;,&quot;label&quot;:&quot;text:terms&quot;}" href="https://docs.github.com/site-policy/github-terms/github-terms-of-service" data-view-component="true" class="Link--secondary Link">Terms</a>
          </li>

          <li class="mx-2">
            <a data-analytics-event="{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to privacy&quot;,&quot;label&quot;:&quot;text:privacy&quot;}" href="https://docs.github.com/site-policy/privacy-policies/github-privacy-statement" data-view-component="true" class="Link--secondary Link">Privacy</a>
          </li>

          <li class="mx-2">
            <a data-analytics-event="{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to security&quot;,&quot;label&quot;:&quot;text:security&quot;}" href="https://github.com/security" data-view-component="true" class="Link--secondary Link">Security</a>
          </li>

          <li class="mx-2">
            <a data-analytics-event="{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to status&quot;,&quot;label&quot;:&quot;text:status&quot;}" href="https://www.githubstatus.com/" data-view-component="true" class="Link--secondary Link">Status</a>
          </li>

          <li class="mx-2">
            <a data-analytics-event="{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to docs&quot;,&quot;label&quot;:&quot;text:docs&quot;}" href="https://docs.github.com/" data-view-component="true" class="Link--secondary Link">Docs</a>
          </li>

          <li class="mx-2">
            <a data-analytics-event="{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to contact&quot;,&quot;label&quot;:&quot;text:contact&quot;}" href="https://support.github.com/?tags=dotcom-footer" data-view-component="true" class="Link--secondary Link">Contact</a>
          </li>

          <li class="mr-3">
  <cookie-consent-link data-catalyst="">
    <button type="button" class="Link--secondary underline-on-hover border-0 p-0 color-bg-transparent" data-action="click:cookie-consent-link#showConsentManagement" data-analytics-event="{&quot;location&quot;:&quot;footer&quot;,&quot;action&quot;:&quot;cookies&quot;,&quot;context&quot;:&quot;subfooter&quot;,&quot;tag&quot;:&quot;link&quot;,&quot;label&quot;:&quot;cookies_link_subfooter_footer&quot;}">
      Manage cookies
    </button>
  </cookie-consent-link>
</li>

<li class="mr-3">
  <cookie-consent-link data-catalyst="">
    <button type="button" class="Link--secondary underline-on-hover border-0 p-0 color-bg-transparent" data-action="click:cookie-consent-link#showConsentManagement" data-analytics-event="{&quot;location&quot;:&quot;footer&quot;,&quot;action&quot;:&quot;dont_share_info&quot;,&quot;context&quot;:&quot;subfooter&quot;,&quot;tag&quot;:&quot;link&quot;,&quot;label&quot;:&quot;dont_share_info_link_subfooter_footer&quot;}">
      Do not share my personal information
    </button>
  </cookie-consent-link>
</li>

      </ul>
    </nav>
  </div>
</footer>




    <ghcc-consent id="ghcc" class="position-fixed bottom-0 left-0" style="z-index: 999999" data-initial-cookie-consent-allowed="" data-cookie-consent-required="false" data-catalyst=""></ghcc-consent>


  <div id="ajax-error-message" class="ajax-error-message flash flash-error" hidden="">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-alert">
    <path d="M6.457 1.047c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0 1 14.082 15H1.918a1.75 1.75 0 0 1-1.543-2.575Zm1.763.707a.25.25 0 0 0-.44 0L1.698 13.132a.25.25 0 0 0 .22.368h12.164a.25.25 0 0 0 .22-.368Zm.53 3.996v2.5a.75.75 0 0 1-1.5 0v-2.5a.75.75 0 0 1 1.5 0ZM9 11a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path>
</svg>
    <button type="button" class="flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg>
    </button>
    You can’t perform that action at this time.
  </div>

    <template id="site-details-dialog"></template>

    <div class="Popover js-hovercard-content position-absolute" style="display: none; outline: none;">
  <div class="Popover-message Popover-message--bottom-left Popover-message--large Box color-shadow-large" style="width:360px;"></div>
</div>

    <template id="snippet-clipboard-copy-button"></template>
<template id="snippet-clipboard-copy-button-unpositioned"></template>


    <style>
      .user-mention[href$="/aryanmanlol"] {
        color: var(--color-user-mention-fg);
        background-color: var(--bgColor-attention-muted, var(--color-attention-subtle));
        border-radius: 2px;
        margin-left: -2px;
        margin-right: -2px;
        padding: 0 2px;
      }
    </style>


    </div>

    <div id="js-global-screen-reader-notice" class="sr-only mt-n1" aria-live="polite" aria-atomic="true">R10 selected.</div>
    <div id="js-global-screen-reader-notice-assertive" class="sr-only mt-n1" aria-live="assertive" aria-atomic="true"></div>
  


<div id="__primerPortalRoot__" style="position: absolute; top: 0px; left: 0px;"><div style="position: relative; z-index: 1;"><span role="tooltip" aria-label="Copy full SHA for 04d012e" data-visible-text="Copy full SHA for 04d012e" aria-hidden="true" id=":R9aibab:" class="ControlledTooltip__TooltipBase-sc-9d998f82-0 eAydfi tooltipped-sw" style="position: absolute; left: 243.35px; top: 305.338px;"></span></div><div style="position: relative; z-index: 1;"><span role="tooltip" aria-label="Copy file name to clipboard" data-visible-text="Copy file name to clipboard" aria-hidden="true" id=":rg:" class="ControlledTooltip__TooltipBase-sc-9d998f82-0 eAydfi tooltipped-s" style="position: absolute; left: 210.762px; top: 427.938px;"></span></div></div><span id="PING_IFRAME_FORM_DETECTION" style="display: none;"></span></body></html>
