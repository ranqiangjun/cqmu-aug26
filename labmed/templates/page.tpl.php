<?php
?>

<table>
  
<tr>
  <td colspan="2">
    <?php print render($page["header"]) ?>
  </td>
</tr>
<tr>
  <td colspan="2">
    <?php if ($messages): ?>
      <div id="console" class="clearfix"><?php print $messages; ?></div>
    <?php endif; ?>
  </td>
</tr>
<tr>
  <td>
   <?php print render($page["left"]) ?>
  </td>
  <td>
       <?php print render($page["right"]) ?>

       <h2 id="title"></h2>
       <div id="body"></div>


  </td>
</tr>
<tr>
  <td colspan="2">
    <?php print render($page["footer"]) ?>
  </td>
</tr>

</table>



